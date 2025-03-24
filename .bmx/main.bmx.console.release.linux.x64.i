superstrict
import brl.blitz
import brl.filesystem
import brl.platform
import brl.maxlua
import brl.graphics
import brl.d3d7max2d
import brl.pixmap
import brl.openalaudio
import brl.standardio
import brl.clipboard
import brl.appstub
import brl.uuid
import brl.jpgloader
import brl.volumes
import brl.freetypefont
import brl.socket
import brl.max2d
import brl.d3d9max2d
import brl.bytebuffer
import brl.timer
import brl.retro
import brl.tgaloader
import brl.objectlist
import brl.systemdefault
import brl.maxutil
import brl.pngloader
import brl.glgraphics
import brl.bmploader
import brl.freeaudioaudio
import brl.base64
import brl.collections
import brl.oggloader
import brl.glmax2d
import brl.wavloader
import brl.utf8stream
import brl.maxunit
import brl.directsoundaudio
import brl.threadpool
import brl.gnet
import brl.timerdefault
import brl.eventqueue
import brl.dxgraphics
import pub.nx
import pub.opengles3
import pub.win32
import pub.nfd
import pub.xmmintrin
import pub.glad
import pub.freeprocess
import pub.vulkan
import pub.opengles
import pub.freejoy
VIRTUAL_WIDTH%=240
VIRTUAL_HEIGHT%=320
DrawRectOutline%(x%,y%,width%,height%)="_m_main_DrawRectOutline"
main%()="_m_main_main"
SCREEN_WIDTH%&=mem:p("_m_main_SCREEN_WIDTH")
SCREEN_HEIGHT%&=mem:p("_m_main_SCREEN_HEIGHT")
scaleX%&=mem:p("_m_main_scaleX")
scaleY%&=mem:p("_m_main_scaleY")
Scale%&=mem:p("_m_main_Scale")
offsetX%&=mem:p("_m_main_offsetX")
offsetY%&=mem:p("_m_main_offsetY")
framebuffer:TRenderImage&=mem:p("_m_main_framebuffer")