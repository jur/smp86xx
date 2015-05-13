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
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "SDL_config.h"

#include "SDL_video.h"
#include "SDL_mouse.h"
#include "../SDL_sysvideo.h"
#include "../SDL_pixels_c.h"
#include "../../events/SDL_events_c.h"

#include "SDL_smp8634video.h"

#define ALLOW_OS_CODE 1
#include <rua.h> 
#include <dcc.h>

#define DEFAULT_OSD_CHIP 0

#define IR_DEVICE "/dev/ir"

#define RC_POWER 0xf50a4040
#define RC_UP 0xf40b4040
#define RC_DOWN 0xf10e4040
#define RC_LEFT 0xef104040
#define RC_RIGHT 0xee114040
#define RC_OK 0xf20d4040
#define RC_MUTE 0xf30c4040
#define RC_HOME 0xf00f4040
#define RC_OUTPUT 0xfe014040
#define RC_INFO 0xfd024040
#define RC_MENU 0xfc034040
#define RC_AB 0xfb044040
#define RC_SLOW 0xfa054040
#define RC_ROTATE 0xf9064040
#define RC_REPEAT 0xf8074040
#define RC_STOP 0xf7084040
#define RC_ZOOM_MOVE 0xf6094040
#define RC_PREV 0xba454040
#define RC_NEXT 0xff004040
#define RC_BACK 0xe21d4040
#define RC_RED 0xbf404040
#define RC_GREEN 0xe51a4040
#define RC_YELLOW 0xbd424040
#define RC_BLUE 0xbe414040
#define RC_SUB 0xea154040
#define RC_LANG 0xe31c4040
#define RC_VOL_LOWER 0xe11e4040
#define RC_VOL_HIGHER 0xe01f4040
#define RC_1 0xe9164040
#define RC_2 0xe8174040
#define RC_3 0xe7184040
#define RC_4 0xb8474040
#define RC_5 0xbc434040
#define RC_6 0xb9464040
#define RC_7 0xec134040
#define RC_8 0xe41b4040
#define RC_9 0xeb144040
#define RC_0 0xa45b4040
#define RC_SETUP 0xe6194040
#define RC_SORT 0xed124040
#define RC_BGM 0xbb444040
#define RC_BGM_PREV 0xa8574040
#define RC_BGM_NEXT 0xab544040

static void SMP8634_VideoQuit(_THIS);

static int SMP8634_Available(void)
{
	struct RUA *pRUA;
	struct DCC *pDCC;
	RMstatus err;

	err = RUACreateInstance(&pRUA, DEFAULT_OSD_CHIP);
	if (RMFAILED(err)) {
		SDL_SetError("Unable to RUACreateInstance for chip %d", DEFAULT_OSD_CHIP);
		return 0;
	}
	err = DCCOpen(pRUA, &pDCC);
	if (RMFAILED(err)) {
		SDL_SetError("Unable to DCCOpen for chip %d", DEFAULT_OSD_CHIP);
		RUADestroyInstance(pRUA);
		return 0;
	}
	DCCClose(pDCC);
	RUADestroyInstance(pRUA);

	return 1;
}

static int SMP8634_VideoInit(_THIS, SDL_PixelFormat *vformat)
{
	RMstatus err;
	RMuint32 osd_scaler = EMHWLIB_MODULE(DispOSDScaler,0);

	this->hidden->surface_counter = 0;

	err = RUACreateInstance(&this->hidden->pRUA, DEFAULT_OSD_CHIP);
	if (RMFAILED(err)) {
		this->hidden->pRUA = NULL;
		SMP8634_VideoQuit(this);
		SDL_SetError("Failed RUACreateInstance(), err = %d\n", err);
		return -1;
	}
	err = DCCOpen(this->hidden->pRUA, &this->hidden->pDCC);
	if (RMFAILED(err)) {
		this->hidden->pDCC = NULL;
		SMP8634_VideoQuit(this);
		SDL_SetError("Failed DCCOpen(), err = %d\n", err);
		return -1;
	}

	err = DCCInitMicroCodeEx(this->hidden->pDCC, DCCInitMode_LeaveDisplay);
	if (RMFAILED(err)) {
		SMP8634_VideoQuit(this);
		SDL_SetError("Failed DCCInitMicroCodeEx(), err = %d\n", err);
		return -1;
	}

	err = DCCSetSurfaceSource(this->hidden->pDCC, osd_scaler, NULL);
	if (RMFAILED(err)) {
		SMP8634_VideoQuit(this);
		SDL_SetError("Cannot set osd_scaler, err = %d\n", err);
		return -1;
	}

	vformat->BitsPerPixel = 32;
	vformat->Rmask = 0x000000FF;
	vformat->Gmask = 0x0000FF00;
	vformat->Bmask = 0x00FF0000;

	return 0;
}

static void SMP8634_VideoQuit(_THIS)
{
#if 0 // TBD: Where should be the clean up?
	if (current->hwdata->pVideoSource != NULL) {
		DCCCloseVideoSource(current->hwdata->pVideoSource);
		current->hwdata->pVideoSource = NULL;
	}
#endif
	if (this->hidden->pDCC != NULL) {
		DCCClose(this->hidden->pDCC);
		this->hidden->pDCC = NULL;
	}
	if ((this->hidden->surface_counter <= 0) && (this->hidden->pRUA != NULL)) {
		RUADestroyInstance(this->hidden->pRUA);
		this->hidden->pRUA = NULL;
	}
}

static SDL_Rect **SMP8634_ListModes(_THIS, SDL_PixelFormat *format, Uint32 flags)
{
	static SDL_Rect mode_list[] = {
		{ 0, 0, 1920, 1080 },
		{ 0, 0, 1280, 1024 },
		{ 0, 0, 1280, 720 },
		{ 0, 0, 1024, 768 },
		{ 0, 0, 800, 600 },
		{ 0, 0, 640, 480 }
	};
	static SDL_Rect *modes[] = {
		&mode_list[0],
		&mode_list[1],
		&mode_list[2],
		&mode_list[3],
		&mode_list[4],
		&mode_list[5],
		NULL
	};

	return modes;
}


static SDL_Surface *SMP8634_SetVideoMode(_THIS, SDL_Surface *current,
				int width, int height, int bpp, Uint32 flags)
{
	RMstatus err;
	struct DCCOSDProfile profile;
	Uint32 Rmask;
	Uint32 Gmask;
	Uint32 Bmask;
	struct SDL_PrivateHwData *hwdata;

	/* Set up the new mode framebuffer */
	current->flags = SDL_FULLSCREEN;
	current->w = width;
	current->h = height;
	current->pitch = SDL_CalculatePitch(current);

	profile.SamplingMode = EMhwlibSamplingMode_444;
	switch (bpp) {
		case 32:
			profile.ColorMode = EMhwlibColorMode_TrueColor;
			profile.ColorFormat = EMhwlibColorFormat_32BPP;
			Rmask = 0x000000FF;
			Gmask = 0x0000FF00;
			Bmask = 0x00FF0000;
			break;

		case 24:
			profile.ColorMode = EMhwlibColorMode_TrueColor;
			profile.ColorFormat = EMhwlibColorFormat_24BPP;
			Rmask = 0x000000FF;
			Gmask = 0x0000FF00;
			Bmask = 0x00FF0000;
			break;

#if 0
		case 16:
			profile.ColorMode = EMhwlibColorMode_16BPP_Alpha_LUT;
			profile.ColorFormat = EMhwlibColorFormat_16BPP_565;
			break;

		case 8:
			profile.ColorMode = EMhwlibColorMode_LUT_8BPP;
			profile.ColorFormat = EMhwlibColorFormat_24BPP;
			break;
#endif

		default:
			SDL_SetError("Error unsupport %d bpp\n", bpp);
			this->hidden->current = NULL;
			return NULL;
	}
	profile.Width = width;
	profile.Height = height;
	profile.ColorSpace = EMhwlibColorSpace_RGB_0_255;
	profile.PixelAspectRatio.X = 1; // TBD
	profile.PixelAspectRatio.Y = 1; // TBD

	hwdata = (void *) current->hwdata;
	if (hwdata != NULL) {
		if (hwdata->pVideoSource != NULL) {
			DCCCloseVideoSource(hwdata->pVideoSource);
			hwdata->pVideoSource = NULL;
		}

		if (hwdata->BaseAddr != NULL) {
			RUAUnMap(this->hidden->pRUA,
				hwdata->BaseAddr,
				hwdata->pic_luma_size);
			hwdata->BaseAddr = NULL;
			err = RUAUnLock(this->hidden->pRUA,
				hwdata->pic_luma_addr,
				hwdata->pic_luma_size);
			if (RMFAILED(err)) {
				fprintf(stderr, "SMP8634_SetVideoMode(): Failed RUAUnLock(), err = %d\n", err);
			}
		}
	}

	if ( !SDL_ReallocFormat(current, bpp, Rmask, Gmask, Bmask, 0) ) {
		this->hidden->current = NULL;
		return(NULL);
	}
	if (hwdata == NULL) {
		hwdata = malloc(sizeof(struct SDL_PrivateHwData));
		if (hwdata != NULL) {
			this->hidden->surface_counter++;
		}
	}
	if (hwdata == NULL) {
		SDL_SetError("Out of memory\n");
		this->hidden->current = NULL;
		return NULL;
	}
	memset(hwdata, 0, sizeof(*hwdata));
	current->hwdata = (void *) hwdata;

	err = DCCOpenOSDVideoSource(this->hidden->pDCC, &profile,
		&hwdata->pVideoSource);
	if (RMFAILED(err)) {
		hwdata->pVideoSource = NULL;
		SDL_SetError("Failed DCCOpenOSDVideoSource(), err = %d\n", err);
		this->hidden->current = NULL;
		return NULL;
	}

	hwdata->surface_addr = 0;
	err = DCCGetOSDSurfaceInfo(this->hidden->pDCC,
		hwdata->pVideoSource, NULL,
		&hwdata->surface_addr, NULL);
	if (RMFAILED(err)) {
		DCCCloseVideoSource(hwdata->pVideoSource);
		hwdata->pVideoSource = NULL;
		SDL_SetError("Error DCCGetOSDSurfaceInfo(), err = %d\n", err);
		this->hidden->current = NULL;
		return NULL;
	}
	//printf("surface_addr 0x%08lx\n", hwdata->surface_addr);

	hwdata->pic_luma_addr = 0;
	hwdata->pic_luma_size = 0;
	err = DCCGetOSDVideoSourceInfo(hwdata->pVideoSource,
		&hwdata->pic_luma_addr,
		&hwdata->pic_luma_size,
		NULL, NULL);
	if (RMFAILED(err)) {
		DCCCloseVideoSource(hwdata->pVideoSource);
		hwdata->pVideoSource = NULL;
		SDL_SetError("Error DCCGetOSDVideoSourceInfo(), err = %d\n",
			err);
		this->hidden->current = NULL;
		return NULL;
	}
	//printf("pic_luma_addr 0x%08lx\n", hwdata->pic_luma_addr);
	//printf("pic_luma_size 0x%08lx\n", hwdata->pic_luma_size);

	hwdata->osd_scaler = 0;
	err = DCCGetScalerModuleID(this->hidden->pDCC, DCCRoute_Main,
		DCCSurface_OSD, 0, &hwdata->osd_scaler);
	if (RMFAILED(err)) {
		DCCCloseVideoSource(hwdata->pVideoSource);
		hwdata->pVideoSource = NULL;
		SDL_SetError("Error creating scaler(), err = %d\n", err);
		this->hidden->current = NULL;
		return NULL;
	}
	//printf("osd_scaler 0x%08lx\n", hwdata->osd_scaler);

	err = DCCClearOSDVideoSource(hwdata->pVideoSource);
	if (RMFAILED(err)) {
		DCCCloseVideoSource(hwdata->pVideoSource);
		hwdata->pVideoSource = NULL;
		SDL_SetError("Error DCCClearOSDVideoSource(), err = %d\n", err);
		this->hidden->current = NULL;
		return NULL;
	}

	err = DCCSetSurfaceSource(this->hidden->pDCC,
		hwdata->osd_scaler,
		hwdata->pVideoSource);
	if (RMFAILED(err)) {
		DCCCloseVideoSource(hwdata->pVideoSource);
		hwdata->pVideoSource = NULL;
		SDL_SetError("Error DCCSetSurfaceSource(), err = %d\n", err);
		this->hidden->current = NULL;
		return NULL;
	}

	err = DCCEnableVideoSource(hwdata->pVideoSource, TRUE);
	if (RMFAILED(err)) {
		DCCCloseVideoSource(hwdata->pVideoSource);
		hwdata->pVideoSource = NULL;
		SDL_SetError("Error DCCEnableVideoSource! %d\n", err);
		this->hidden->current = NULL;
		return NULL;
	}

	err = RUALock(this->hidden->pRUA,
		hwdata->pic_luma_addr, hwdata->pic_luma_size);
	if (RMFAILED(err)) {
		DCCCloseVideoSource(hwdata->pVideoSource);
		hwdata->pVideoSource = NULL;
		SDL_SetError("Error RUALock(), err = %d\n", err);
		this->hidden->current = NULL;
		return NULL;
	}

	hwdata->BaseAddr = RUAMap(this->hidden->pRUA,
		hwdata->pic_luma_addr,
		hwdata->pic_luma_size);
	if (hwdata->BaseAddr == NULL) {
		err = RUAUnLock(this->hidden->pRUA,
			hwdata->pic_luma_addr,
			hwdata->pic_luma_size);
		if (RMFAILED(err)) {
			fprintf(stderr, "SMP8634_SetVideoMode(), RUAUnLock() 2, err = %d\n", err);
		}
		DCCCloseVideoSource(hwdata->pVideoSource);
		hwdata->pVideoSource = NULL;
		SDL_SetError("Failed RUAMap()\n");
		this->hidden->current = NULL;
		return NULL;
	}

	/* Let SDL directly write to the screen buffer. */
	current->flags = SDL_FULLSCREEN;
#if 0
	current->flags |= SDL_HWSURFACE;
	current->pixels = hwdata->BaseAddr;
#else
	//current->flags |= SDL_SWSURFACE;
	current->flags |= SDL_HWSURFACE;
	current->pixels = malloc(4 * current->w * current->h); // TBD: cleanup!!!
	//current->pixels = hwdata->BaseAddr;
#endif
	this->hidden->current = current;
	return current;
}

static int SMP8634_AllocHWSurface(_THIS, SDL_Surface *surface)
{
	struct SDL_PrivateHwData *hwdata;

	hwdata = malloc(sizeof(*hwdata));
	if (hwdata == NULL) {
		SDL_SetError("Out of memory\n");
		return -1;
	}
	memset(hwdata, 0, sizeof(*hwdata));
	surface->hwdata = (void *) hwdata;
	this->hidden->surface_counter++;
	return 0;
}

static void SMP8634_FreeHWSurface(_THIS, SDL_Surface *surface)
{
	RMstatus err;
	struct SDL_PrivateHwData *hwdata;

	hwdata = (void *) surface->hwdata;
	if (hwdata != NULL) {
		if (hwdata->BaseAddr != NULL) {
			if (this->hidden->pRUA != NULL) {
				RUAUnMap(this->hidden->pRUA,
					hwdata->BaseAddr,
					hwdata->pic_luma_size);
				hwdata->BaseAddr = NULL;
				err = RUAUnLock(this->hidden->pRUA,
					hwdata->pic_luma_addr,
					hwdata->pic_luma_size);
				if (RMFAILED(err)) {
					fprintf(stderr, "SMP8634_FreeHWSurface(), RUAUnLock(), err = %d\n", err);
				}
			} else {
				printf("SMP8634_FreeHWSurface with bad pRUA\n");
			}
		}
		if (hwdata->pVideoSource != NULL) {
			DCCCloseVideoSource(hwdata->pVideoSource);
			hwdata->pVideoSource = NULL;
		}
		free(hwdata);
		surface->hwdata = NULL;
#if 1
		if (surface->pixels != NULL) {
			free(surface->pixels);
		}
#endif
		surface->pixels = NULL;
		this->hidden->surface_counter--;
		if (this->hidden->surface_counter == 0) {
			if (this->hidden->pDCC == NULL) {
				/* SMP8634_VideoQuit() was already called, need to clean up. */
				RUADestroyInstance(this->hidden->pRUA);
				this->hidden->pRUA = NULL;
			}
		}
	}
	return;
}

static int SMP8634_LockHWSurface(_THIS, SDL_Surface *surface)
{
#if 0
	RMstatus err;
	struct SDL_PrivateHwData *hwdata;

	hwdata = (void *) surface->hwdata;
	if (hwdata == NULL) {
		SDL_SetError("SMP8634_LockHWSurface() hwdata not valid.\n");
		return -1;
	}
	err = RUALock(this->hidden->pRUA,
		hwdata->pic_luma_addr, hwdata->pic_luma_size);
	if (RMFAILED(err)) {
		SDL_SetError("Error RUALock(), err = %d\n", err);
		return -1;
	}
#endif
	return 0;
}

static void SMP8634_UnlockHWSurface(_THIS, SDL_Surface *surface)
{
#if 0
	RMstatus err;
	struct SDL_PrivateHwData *hwdata;

	hwdata = (void *) surface->hwdata;
	if (hwdata == NULL) {
		fprintf(stderr, "SMP8634_UnlockHWSurface() hwdata not valid.\n");
		return;
	}

	err = RUAUnLock(this->hidden->pRUA,
		hwdata->pic_luma_addr,
		hwdata->pic_luma_size);
	if (RMFAILED(err)) {
		fprintf(stderr, "SMP8634_UnlockHWSurface(), RUAUnLock(), err = %d\n", err);
		return;
	}
	return;
#endif
}

static void SMP8634_DeleteDevice(_THIS)
{
	if (this->hidden->irfd >= 0) {
		close(this->hidden->irfd);
		this->hidden->irfd = -1;
	}
	SDL_free(this->hidden);
	this->hidden = NULL;
	SDL_free(this);
}

static int SMP8634_SetColors(_THIS, int firstcolor, int ncolors, SDL_Color *colors)
{
	return(0);
}

static void SMP8634_PumpEvents(_THIS)
{
	int irfd = this->hidden->irfd;

	if (irfd >= 0) {
		fd_set rfds;
		struct timeval tv;
		int ret;
		Uint32 key;

		FD_ZERO(&rfds);
		FD_SET(irfd, &rfds);
		tv.tv_sec = 0;
		tv.tv_usec = 0;

		ret = select(irfd + 1, &rfds, NULL, NULL, &tv);
		if (ret) {
			key = 0;
			ret = read(irfd, &key, sizeof(key));
			if (ret == sizeof(key)) {
				SDL_keysym keysym;

				keysym.scancode = key;
				keysym.mod = KMOD_NONE;

				switch(key) {
					case RC_UP:
						keysym.sym = SDLK_UP;
						break;

					case RC_DOWN:
						keysym.sym = SDLK_DOWN;
						break;

					case RC_LEFT:
						keysym.sym = SDLK_LEFT;
						break;

					case RC_RIGHT:
						keysym.sym = SDLK_RIGHT;
						break;

					case RC_OK:
						keysym.sym = SDLK_SPACE;
						break;

					case RC_0:
						keysym.sym = SDLK_0;
						break;

					case RC_1:
						keysym.sym = SDLK_1;
						break;

					case RC_2:
						keysym.sym = SDLK_2;
						break;

					case RC_3:
						keysym.sym = SDLK_3;
						break;

					case RC_4:
						keysym.sym = SDLK_4;
						break;

					case RC_5:
						keysym.sym = SDLK_5;
						break;

					case RC_6:
						keysym.sym = SDLK_6;
						break;

					case RC_7:
						keysym.sym = SDLK_7;
						break;

					case RC_8:
						keysym.sym = SDLK_8;
						break;

					case RC_9:
						keysym.sym = SDLK_9;
						break;

					case RC_BACK:
						keysym.sym = SDLK_ESCAPE;
						break;

					case RC_MENU:
						keysym.sym = SDLK_MENU;
						break;

					case RC_PREV:
						keysym.sym = SDLK_PAGEUP;
						break;

					case RC_NEXT:
						keysym.sym = SDLK_PAGEDOWN;
						break;

					case RC_HOME:
						keysym.sym = SDLK_HOME;
						break;

					case RC_POWER:
						keysym.sym = SDLK_POWER;
						break;

					case RC_INFO:
						keysym.sym = SDLK_s;
						break;

					case RC_RED:
						keysym.sym = SDLK_RETURN;
						break;

					case RC_GREEN:
						keysym.sym = SDLK_r;
						break;

					case RC_YELLOW:
						keysym.sym = SDLK_a;
						break;

					case RC_BLUE:
						keysym.sym = SDLK_b;
						break;

					case RC_ROTATE:
						keysym.sym = SDLK_END;
						break;

					case RC_ZOOM_MOVE:
						keysym.sym = SDLK_f;
						break;

					case RC_SLOW:
						keysym.sym = SDLK_d;
						break;

					case RC_STOP:
						keysym.sym = SDLK_q;
						break;

					case RC_SETUP:
						keysym.sym = SDLK_SYSREQ;
						break;

					case RC_BGM:
						keysym.sym = SDLK_g;
						break;

					case RC_BGM_NEXT:
						keysym.sym = SDLK_n;
						break;

					case RC_BGM_PREV:
						keysym.sym = SDLK_p;
						break;

					default:
						keysym.sym = SDLK_LAST;
						break;
				}
				if (keysym.sym != SDLK_LAST) {
					SDL_PrivateKeyboard(SDL_PRESSED, &keysym);
					SDL_PrivateKeyboard(SDL_RELEASED, &keysym);
				}
			}
		}
	}
}

static void SMP8634_InitOSKeymap(_THIS)
{
}

static void SMP8634_UpdateRects(_THIS, int numrects, SDL_Rect *rects)
{
#if 1
	int i;
#define bpp 4
	SDL_Surface *surface;

	surface = this->hidden->current;
	if (surface == NULL) {
		return;
	}

	for (i = 0; i < numrects; i++) {
		struct SDL_PrivateHwData *hwdata;
		volatile Uint8 *d;
		Uint8 *s;

#if 0
		printf("Update rect x %d y %d w %d h %d\n",
			rects[i].x,
			rects[i].y,
			rects[i].w,
			rects[i].h);
#endif

		hwdata = (void *) surface->hwdata;
		if (hwdata != NULL) {
			if (hwdata->BaseAddr != NULL) {
				Uint32 x;
				Uint32 y;

				d = hwdata->BaseAddr;
				s = surface->pixels;

				for (y = rects[i].y; y < (rects[i].y + rects[i].h); y++) {
					d += bpp * rects[i].x;
					s += bpp * rects[i].x;
					for (x = rects[i].x; x < (rects[i].x + rects[i].w); x++) {
						int y;
						int u;
						int v;
						int r = s[0];
						int g = s[1];
						int b = s[2];

#if 0
						y = (int)(0.299 * r + 0.587 * g + 0.114 * b);
						u = (int)((b - y) * 0.565 + 128);
						v = (int)((r - y) * 0.713 + 128);
#else
						y = 306 * r + 601 * g + 116 * b;
						y = y >> 10;
						u = (b - y) * 578;
						u = (u >> 10) + 128;
						v = (r - y) * 730;
						v = (v >> 10) + 128;
#endif
						if (y > 255) {
							y = 255;
						}
						if (u < 0) {
							u = 0;
						}
						if (v < 0) {
							v = 0;
						}
						d[0] = u;
						d[1] = y;
						d[2] = v;
#if 1
						d[3] = 0xff; /* Alpha */
#else
						d[3] = y;
#endif

						d += bpp;
						s += bpp;
					}
					d += bpp * (surface->w - rects[i].w);
					s += bpp * (surface->w - rects[i].w);
				}
			}
		}
	}
#endif
}

static SDL_VideoDevice *SMP8634_CreateDevice(int devindex)
{
	SDL_VideoDevice *this;

	/* Initialize all variables that we clean on shutdown */
	this = (SDL_VideoDevice *)SDL_malloc(sizeof(SDL_VideoDevice));
	if ( this ) {
		SDL_memset(this, 0, (sizeof *this));
		this->hidden = (struct SDL_PrivateVideoData *)
				SDL_malloc((sizeof *this->hidden));
	}
	if ( (this == NULL) || (this->hidden == NULL) ) {
		SDL_OutOfMemory();
		if ( this ) {
			SDL_free(this);
		}
		return(0);
	}
	SDL_memset(this->hidden, 0, (sizeof *this->hidden));

	/* Set the function pointers */
	this->VideoInit = SMP8634_VideoInit;
	this->ListModes = SMP8634_ListModes;
	this->SetVideoMode = SMP8634_SetVideoMode;
#if 0 /* TBD: Define video overlay. */
	this->CreateYUVOverlay = SMP8634_CreateYUVOverlay;
#else
	this->CreateYUVOverlay = NULL;
#endif
	this->SetColors = SMP8634_SetColors;
	this->UpdateRects = SMP8634_UpdateRects;
	this->VideoQuit = SMP8634_VideoQuit;
	this->AllocHWSurface = SMP8634_AllocHWSurface;
	this->CheckHWBlit = NULL;
	this->FillHWRect = NULL;
	this->SetHWColorKey = NULL;
	this->SetHWAlpha = NULL;
	this->LockHWSurface = SMP8634_LockHWSurface;
	this->UnlockHWSurface = SMP8634_UnlockHWSurface;
	this->FlipHWSurface = NULL;
	this->FreeHWSurface = SMP8634_FreeHWSurface;
	this->SetIcon = NULL;
	this->SetCaption = NULL;
	this->GetWMInfo = NULL;
	this->FreeWMCursor = NULL;
	this->CreateWMCursor = NULL;
	this->ShowWMCursor = NULL;
	this->MoveWMCursor = NULL;
	this->InitOSKeymap = SMP8634_InitOSKeymap;
	this->PumpEvents = SMP8634_PumpEvents;

	this->free = SMP8634_DeleteDevice;

	this->hidden->irfd = open(IR_DEVICE, O_RDONLY);

	return this;
}

VideoBootStrap PS2GS_bootstrap = {
	"smp8634", "SMP8634 Graphic Driver",
	SMP8634_Available, SMP8634_CreateDevice
};
