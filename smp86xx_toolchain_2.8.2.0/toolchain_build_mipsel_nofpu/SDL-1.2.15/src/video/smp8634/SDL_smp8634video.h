/*
    SDL - Simple DirectMedia Layer

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
#include "SDL_config.h"

#ifndef _SDL_smp8634video_h
#define _SDL_smp8634video_h

#include "../SDL_sysvideo.h"

#define ALLOW_OS_CODE 1
#include <rua.h> 
#include <dcc.h>

/* Hidden "this" pointer for the video functions */
#define _THIS	SDL_VideoDevice *this

/* Private display data */
struct SDL_PrivateVideoData {
	struct RUA *pRUA;
	struct DCC *pDCC;
	int irfd;
	SDL_Surface *current;
	uint32_t surface_counter;
};

struct SDL_PrivateHwData {
	RMuint32 osd_scaler;
	struct DCCVideoSource *pVideoSource;
	RMuint32 surface_addr;
	RMuint32 pic_luma_addr;
	RMuint32 pic_luma_size;
	uint8_t *BaseAddr;
};

#endif /* _SDL_smp8634video_h */
