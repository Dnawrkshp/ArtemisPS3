#ifndef __PNGDEC_PPUONLY_H__
#define __PNGDEC_PPUONLY_H__


extern int pngdec_ppuonly_0C515302(CellPngDecMainHandle m,        // PngDecExtOpen()
                                   CellPngDecSubHandle *s,
                                   const CellPngDecSrc *src,
                                   CellPngDecOpnInfo *openInfo,
                                   const CellPngDecCbCtrlStrm *cbCtrlStrm,
                                   const CellPngDecOpnParam *opnParam);
#define PngDecExtOpen pngdec_ppuonly_0C515302

extern int pngdec_ppuonly_157D30C5(CellPngDecMainHandle *m,       // PngDecCreate()
                                   const CellPngDecThreadInParam *in,
                                   CellPngDecThreadOutParam *out);
#define PngDecCreate pngdec_ppuonly_157D30C5

extern int pngdec_ppuonly_2310F155(CellPngDecMainHandle m,        // PngDecDecodeData()
                                   CellPngDecSubHandle s,
                                   uint8_t *buf,
                                   const CellPngDecDataCtrlParam *ctl,
                                   CellPngDecDataOutInfo *out);
#define PngDecDecodeData pngdec_ppuonly_2310F155

extern int pngdec_ppuonly_48436B2D(CellPngDecMainHandle *m,       // PngDecExtCreate()
                                   const CellPngDecThreadInParam *threadInParam,
                                   CellPngDecThreadOutParam *threadOutParam,
                                   const CellPngDecExtThreadInParam *extThreadInParam,
                                   CellPngDecExtThreadOutParam *extThreadOutParam);
#define PngDecExtCreate pngdec_ppuonly_48436B2D

extern int pngdec_ppuonly_5B3D1FF1(CellPngDecMainHandle m,        // PngDecClose()
                                   CellPngDecSubHandle s);
#define PngDecClose pngdec_ppuonly_5B3D1FF1

extern int pngdec_ppuonly_726FC1D0(CellPngDecMainHandle m,        // PngDecExtDecodeData()
                                   CellPngDecSubHandle s,
                                   uint8_t *data,
                                   const CellPngDecDataCtrlParam *dataCtrlParam,
                                   CellPngDecDataOutInfo *dataOutInfo,
                                   const CellPngDecCbCtrlDisp *cbCtrlDisp,
                                   CellPngDecDispParam *dispParam);
#define PngDecExtDecodeData pngdec_ppuonly_726FC1D0

extern int pngdec_ppuonly_820DAE1A(CellPngDecMainHandle m);       // PngDecDestroy()
#define PngDecDestroy pngdec_ppuonly_820DAE1A

extern int pngdec_ppuonly_8B33F863(CellPngDecMainHandle m,        // PngDecExtReadHeader()
                                   CellPngDecSubHandle s,
                                   CellPngDecInfo *info,
                                   CellPngDecExtInfo *extInfo); 
#define PngDecExtReadHeader pngdec_ppuonly_8B33F863

extern int pngdec_ppuonly_9CCDCC95(CellPngDecMainHandle m,        // PngDecReadHeader()
                                   CellPngDecSubHandle s,
                                   CellPngDecInfo *info);
#define PngDecReadHeader pngdec_ppuonly_9CCDCC95

extern int pngdec_ppuonly_9E9D7D42(CellPngDecMainHandle m,        // PngDecExtSetParameter()
                                   CellPngDecSubHandle s,
                                   const CellPngDecInParam *inParam,
                                   CellPngDecOutParam *outParam,
                                   const CellPngDecExtInParam *extInParam,
                                   CellPngDecExtOutParam *extOutParam);
#define PngDecExtSetParameter pngdec_ppuonly_9E9D7D42

extern int pngdec_ppuonly_D2BC5BFD(CellPngDecMainHandle m,        // PngDecOpen()
                                   CellPngDecSubHandle *s,
                                   const CellPngDecSrc *src,
                                   CellPngDecOpnInfo *info);
#define PngDecOpen pngdec_ppuonly_D2BC5BFD

extern int pngdec_ppuonly_E97C9BD4(CellPngDecMainHandle m,        // PngDecSetParameter()
                                   CellPngDecSubHandle s,
                                   const CellPngDecInParam *in,
                                   CellPngDecOutParam *out);
#define PngDecSetParameter pngdec_ppuonly_E97C9BD4

#endif // __PNGDEC_PPUONLY_H__ 
