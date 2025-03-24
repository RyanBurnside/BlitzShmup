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
Mover^Object{
.position:SVec2F&
.direction:SVec2F&
-New()="__m_GameObject_Mover_New"
-move:SVec2F()A="_m_GameObject_Mover_move"
}A="_m_GameObject_Mover"
LinearMover^Mover{
-New()="__m_GameObject_LinearMover_New"
-move:SVec2F()="_m_GameObject_LinearMover_move"
-New(position:SVec2F,direction:SVec2F)="_m_GameObject_LinearMover_New_TSVec2FTSVec2F"
}="_m_GameObject_LinearMover"
WayPointMover^Mover{
.wayPoints:SVec2F&[]&
.toleranceRadius#&
.turningAngle#&
.nextWayPoint%&
.returnStart%&
-New()="__m_GameObject_WayPointMover_New"
-move:SVec2F()="_m_GameObject_WayPointMover_move"
}="_m_GameObject_WayPointMover"
GameObject^Object{
.mover:Mover&
.dead%&
-New()="__m_GameObject_GameObject_New"
-move:SVec2F()="_m_GameObject_GameObject_move"
}="_m_GameObject_GameObject"