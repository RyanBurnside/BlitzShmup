#ifndef BLITZSHMUP_SHMUP_BMX_CONSOLE_DEBUG_LINUX_X64_H
#define BLITZSHMUP_SHMUP_BMX_CONSOLE_DEBUG_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.debug.linux.x64.h>
#include <sdl.mod/sdlrendermax2d.mod/.bmx/sdlrendermax2d.bmx.debug.linux.x64.h>
#include <brl.mod/random.mod/.bmx/random.bmx.debug.linux.x64.h>
#include "GameObject.bmx.debug.linux.x64.h"
int _bb_main();
extern BBINT _m_shmup_SCREEN_WIDTH;
extern BBINT _m_shmup_SCREEN_HEIGHT;
extern BBINT _m_shmup_scaleX;
extern BBINT _m_shmup_scaleY;
extern BBINT _m_shmup_Scale;
extern BBINT _m_shmup_offsetX;
extern BBINT _m_shmup_offsetY;
extern struct brl_max2d_renderimage_TRenderImage_obj* _m_shmup_framebuffer;
BBINT _m_shmup_DrawRectOutline(BBINT bbt_x,BBINT bbt_y,BBINT bbt_width,BBINT bbt_height);
BBINT _m_shmup_main();
void _m_shmup_rand_color();

#endif
