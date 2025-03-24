#ifndef BLITZSHMUP_MAIN_BMX_CONSOLE_RELEASE_LINUX_X64_H
#define BLITZSHMUP_MAIN_BMX_CONSOLE_RELEASE_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.linux.x64.h>
#include <brl.mod/filesystem.mod/.bmx/filesystem.bmx.release.linux.x64.h>
#include <brl.mod/platform.mod/.bmx/platform.bmx.release.linux.x64.h>
#include <brl.mod/maxlua.mod/.bmx/maxlua.bmx.release.linux.x64.h>
#include <brl.mod/graphics.mod/.bmx/graphics.bmx.release.linux.x64.h>
#include <brl.mod/d3d7max2d.mod/.bmx/d3d7max2d.bmx.release.linux.x64.h>
#include <brl.mod/pixmap.mod/.bmx/pixmap.bmx.release.linux.x64.h>
#include <brl.mod/openalaudio.mod/.bmx/openalaudio.bmx.release.linux.x64.h>
#include <brl.mod/standardio.mod/.bmx/standardio.bmx.release.linux.x64.h>
#include <brl.mod/clipboard.mod/.bmx/clipboard.bmx.release.linux.x64.h>
#include <brl.mod/appstub.mod/.bmx/appstub.bmx.release.linux.x64.h>
#include <brl.mod/uuid.mod/.bmx/uuid.bmx.release.linux.x64.h>
#include <brl.mod/jpgloader.mod/.bmx/jpgloader.bmx.release.linux.x64.h>
#include <brl.mod/volumes.mod/.bmx/volumes.bmx.release.linux.x64.h>
#include <brl.mod/freetypefont.mod/.bmx/freetypefont.bmx.release.linux.x64.h>
#include <brl.mod/socket.mod/.bmx/socket.bmx.release.linux.x64.h>
#include <brl.mod/max2d.mod/.bmx/max2d.bmx.release.linux.x64.h>
#include <brl.mod/d3d9max2d.mod/.bmx/d3d9max2d.bmx.release.linux.x64.h>
#include <brl.mod/bytebuffer.mod/.bmx/bytebuffer.bmx.release.linux.x64.h>
#include <brl.mod/timer.mod/.bmx/timer.bmx.release.linux.x64.h>
#include <brl.mod/retro.mod/.bmx/retro.bmx.release.linux.x64.h>
#include <brl.mod/tgaloader.mod/.bmx/tgaloader.bmx.release.linux.x64.h>
#include <brl.mod/objectlist.mod/.bmx/objectlist.bmx.release.linux.x64.h>
#include <brl.mod/systemdefault.mod/.bmx/systemdefault.bmx.release.linux.x64.h>
#include <brl.mod/maxutil.mod/.bmx/maxutil.bmx.release.linux.x64.h>
#include <brl.mod/pngloader.mod/.bmx/pngloader.bmx.release.linux.x64.h>
#include <brl.mod/glgraphics.mod/.bmx/glgraphics.bmx.release.linux.x64.h>
#include <brl.mod/bmploader.mod/.bmx/bmploader.bmx.release.linux.x64.h>
#include <brl.mod/freeaudioaudio.mod/.bmx/freeaudioaudio.bmx.release.linux.x64.h>
#include <brl.mod/base64.mod/.bmx/base64.bmx.release.linux.x64.h>
#include <brl.mod/collections.mod/.bmx/collections.bmx.release.linux.x64.h>
#include <brl.mod/oggloader.mod/.bmx/oggloader.bmx.release.linux.x64.h>
#include <brl.mod/glmax2d.mod/.bmx/glmax2d.bmx.release.linux.x64.h>
#include <brl.mod/wavloader.mod/.bmx/wavloader.bmx.release.linux.x64.h>
#include <brl.mod/utf8stream.mod/.bmx/utf8stream.bmx.release.linux.x64.h>
#include <brl.mod/maxunit.mod/.bmx/maxunit.bmx.release.linux.x64.h>
#include <brl.mod/directsoundaudio.mod/.bmx/directsoundaudio.bmx.release.linux.x64.h>
#include <brl.mod/threadpool.mod/.bmx/threadpool.bmx.release.linux.x64.h>
#include <brl.mod/gnet.mod/.bmx/gnet.bmx.release.linux.x64.h>
#include <brl.mod/timerdefault.mod/.bmx/timerdefault.bmx.release.linux.x64.h>
#include <brl.mod/eventqueue.mod/.bmx/eventqueue.bmx.release.linux.x64.h>
#include <brl.mod/dxgraphics.mod/.bmx/dxgraphics.bmx.release.linux.x64.h>
#include <pub.mod/nx.mod/.bmx/nx.bmx.release.linux.x64.h>
#include <pub.mod/opengles3.mod/.bmx/opengles3.bmx.release.linux.x64.h>
#include <pub.mod/win32.mod/.bmx/win32.bmx.release.linux.x64.h>
#include <pub.mod/nfd.mod/.bmx/nfd.bmx.release.linux.x64.h>
#include <pub.mod/xmmintrin.mod/.bmx/xmmintrin.bmx.release.linux.x64.h>
#include <pub.mod/glad.mod/.bmx/glad.bmx.release.linux.x64.h>
#include <pub.mod/freeprocess.mod/.bmx/freeprocess.bmx.release.linux.x64.h>
#include <pub.mod/vulkan.mod/.bmx/vulkan.bmx.release.linux.x64.h>
#include <pub.mod/opengles.mod/.bmx/opengles.bmx.release.linux.x64.h>
#include <pub.mod/freejoy.mod/.bmx/freejoy.bmx.release.linux.x64.h>
int _bb_main();
extern BBINT _m_main_SCREEN_WIDTH;
extern BBINT _m_main_SCREEN_HEIGHT;
extern BBINT _m_main_scaleX;
extern BBINT _m_main_scaleY;
extern BBINT _m_main_Scale;
extern BBINT _m_main_offsetX;
extern BBINT _m_main_offsetY;
extern struct brl_max2d_renderimage_TRenderImage_obj* _m_main_framebuffer;
BBINT _m_main_DrawRectOutline(BBINT bbt_x,BBINT bbt_y,BBINT bbt_width,BBINT bbt_height);
BBINT _m_main_main();

#endif
