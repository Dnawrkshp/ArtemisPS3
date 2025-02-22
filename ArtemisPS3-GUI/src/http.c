#include <net/net.h>
#include <net/netctl.h>
#include <sysmodule/sysmodule.h>

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <curl/curl.h>

#include "common.h"
#include "codes.h"

#define HTTP_SUCCESS 	1
#define HTTP_FAILED	 	0

#define ARTEMIS_USER_AGENT "Mozilla/5.0 (PLAYSTATION 3; 1.00)"

static uint64_t prog_bar1_value=0;
static int64_t dl_delta=0;

int http_init(void)
{
    int ret;

	//init
	ret = sysModuleLoad(SYSMODULE_NET);
	if (ret < 0) {
		LOG("Error : sysModuleLoad(SYSMODULE_NET) HTTP_FAILED (%x)", ret);
		return HTTP_FAILED;
	}

	ret = sysModuleLoad(SYSMODULE_NETCTL);
	if (ret < 0) {
		LOG("Error: sysModuleLoad(SYSMODULE_NETCTL) (%x)", ret);
		return HTTP_FAILED;
	}

	ret = netInitialize();
	if (ret < 0) {
		LOG("Error : netInitialize HTTP_FAILED (%x)", ret);
		return HTTP_FAILED;
	}

	ret = netCtlInit();
	if (ret < 0) {
		LOG("Error: netCtlInit (%x)", ret);
		return HTTP_FAILED;
	}

	curl_global_init(CURL_GLOBAL_ALL);

	return HTTP_SUCCESS;
}

void http_end(void)
{
	curl_global_cleanup();
	netCtlTerm();
	netDeinitialize();

	sysModuleUnload(SYSMODULE_NETCTL);
	sysModuleUnload(SYSMODULE_NET);

	return;
}

/* follow the CURLOPT_XFERINFOFUNCTION callback definition */
static int update_progress(void *p, int64_t dltotal, int64_t dlnow, int64_t ultotal, int64_t ulnow)
{
	LOG("DL: %ld / %ld", dlnow, dltotal);
	prog_bar1_value += (dlnow - dl_delta);
	update_progress_bar(&prog_bar1_value, dltotal, (const char*) p);
	dl_delta = dlnow;

	return 0;
}

int http_download(const char* url, const char* filename, const char* local_dst, int show_progress)
{
	union net_ctl_info proxy_info;
	char* escaped_name = NULL;
	char full_url[1024];
	CURL *curl;
	CURLcode res;
	FILE* fd;

	curl = curl_easy_init();
	if(!curl)
	{
		LOG("ERROR: CURL INIT");
		return HTTP_FAILED;
	}

	fd = fopen(local_dst, "wb");
	if (!fd) {
		LOG("Error: fopen(%s) failed", local_dst);
		return HTTP_FAILED;
	}

	// Escape URL file name characters
	escaped_name = curl_easy_escape(curl, filename ? filename : "", 0);
	snprintf(full_url, sizeof(full_url), "%s%s", url, escaped_name);
	LOG("Downloading (%s) -> (%s)", full_url, local_dst);
	curl_free(escaped_name);

	curl_easy_setopt(curl, CURLOPT_URL, full_url);
	// Set user agent string
	curl_easy_setopt(curl, CURLOPT_USERAGENT, ARTEMIS_USER_AGENT);
	// not sure how to use this when enabled
	curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0L);
	// not sure how to use this when enabled
	curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);
	// Set SSL VERSION to TLS 1.2
	curl_easy_setopt(curl, CURLOPT_SSLVERSION, CURL_SSLVERSION_TLSv1_2);
	// Set timeout for the connection to build
	curl_easy_setopt(curl, CURLOPT_CONNECTTIMEOUT, 10L);
	// Follow redirects
	curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
	// The function that will be used to write the data 
	curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, fwrite);
	// The data filedescriptor which will be written to
	curl_easy_setopt(curl, CURLOPT_WRITEDATA, fd);
	// maximum number of redirects allowed
	curl_easy_setopt(curl, CURLOPT_MAXREDIRS, 20L);
	// Fail the request if the HTTP code returned is equal to or larger than 400
	curl_easy_setopt(curl, CURLOPT_FAILONERROR, 1L);
	// request using SSL for the FTP transfer if available
	curl_easy_setopt(curl, CURLOPT_USE_SSL, CURLUSESSL_TRY);

	// check for proxy settings
	memset(&proxy_info, 0, sizeof(proxy_info));
	netCtlGetInfo(NET_CTL_INFO_HTTP_PROXY_CONFIG, &proxy_info);

	if (proxy_info.http_proxy_config == NET_CTL_HTTP_PROXY_ON)
	{
		memset(&proxy_info, 0, sizeof(proxy_info));
		netCtlGetInfo(NET_CTL_INFO_HTTP_PROXY_SERVER, &proxy_info);
		curl_easy_setopt(curl, CURLOPT_PROXY, proxy_info.http_proxy_server);
		curl_easy_setopt(curl, CURLOPT_PROXYTYPE, CURLPROXY_HTTP);

		memset(&proxy_info, 0, sizeof(proxy_info));
		netCtlGetInfo(NET_CTL_INFO_HTTP_PROXY_PORT, &proxy_info);
		curl_easy_setopt(curl, CURLOPT_PROXYPORT, proxy_info.http_proxy_port);
	}

	dl_delta=0;
	prog_bar1_value=0;
	if (show_progress)
	{
		init_progress_bar("Downloading...", filename);
		/* pass the struct pointer into the xferinfo function */
		curl_easy_setopt(curl, CURLOPT_XFERINFOFUNCTION, &update_progress);
		curl_easy_setopt(curl, CURLOPT_XFERINFODATA, (void*) filename);
		curl_easy_setopt(curl, CURLOPT_NOPROGRESS, 0L);
	}

	// Perform the request
	res = curl_easy_perform(curl);
	// close filedescriptor
	fclose(fd);
	// cleanup
	curl_easy_cleanup(curl);

	if (show_progress)
		end_progress_bar();

	if(res != CURLE_OK)
	{
		LOG("curl_easy_perform() failed: %s", curl_easy_strerror(res));
		unlink_secure(local_dst);
		return HTTP_FAILED;
	}

	return HTTP_SUCCESS;
}
