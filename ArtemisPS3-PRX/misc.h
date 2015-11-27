#ifndef __MISC_H__
#define __MISC_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <cell/pad.h>

#include <sys/types.h>
#include <sys/memory.h>
#include <sys/syscall.h>




// redefinition of pad bit flags
#define	PAD_SELECT	 (1<<0)
#define	PAD_L3		   (1<<1)
#define	PAD_R3		   (1<<2)
#define	PAD_START	   (1<<3)
#define	PAD_UP		   (1<<4)
#define	PAD_RIGHT	   (1<<5)
#define	PAD_DOWN	   (1<<6)
#define	PAD_LEFT	   (1<<7)
#define	PAD_L2		   (1<<8)
#define	PAD_R2		   (1<<9)
#define	PAD_L1		   (1<<10)
#define	PAD_R1		   (1<<11)
#define	PAD_TRIANGLE (1<<12)
#define	PAD_CIRCLE   (1<<13)
#define	PAD_CROSS    (1<<14)
#define	PAD_SQUARE	 (1<<15)


#define _ES32(v)((uint32_t)(((((uint32_t)v) & 0xFF000000) >> 24) | \
							              ((((uint32_t)v) & 0x00FF0000) >> 8 ) | \
							              ((((uint32_t)v) & 0x0000FF00) << 8 ) | \
							              ((((uint32_t)v) & 0x000000FF) << 24)))



void VSHPadGetData(CellPadData *data);
void start_stop_vsh_pad(uint8_t flag);
void MyPadGetData(int32_t port_no, CellPadData *data);
int32_t lv1_rsx_fifo_pause(uint32_t rsx_ctx, uint8_t pause);

void buzzer(uint8_t mode);

#endif // __MISC_H__ 
