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
import math.vector
Mover^Object{
.position:SVec2D&
.direction:SVec2D&
-New()="__m_GameObject_Mover_New"
-move:SVec2D()A="_m_GameObject_Mover_move"
-getX#()="_m_GameObject_Mover_getX"
-getY#()="_m_GameObject_Mover_getY"
}A="_m_GameObject_Mover"
GameObject^Object{
.mover:Mover&
.dead%&
.hitbox:Hitbox&
-New()="__m_GameObject_GameObject_New"
-move:SVec2D()="_m_GameObject_GameObject_move"
-getX#()="_m_GameObject_GameObject_getX"
-getY#()="_m_GameObject_GameObject_getY"
}="_m_GameObject_GameObject"
Bullet^GameObject{
-New()="__m_GameObject_Bullet_New"
-New(position:SVec2D,direction#,speed#,width#)="_m_GameObject_Bullet_New_TSVec2Dfff"
}="_m_GameObject_Bullet"
LinearMover^Mover{
-New()="__m_GameObject_LinearMover_New"
-move:SVec2D()="_m_GameObject_LinearMover_move"
-New(position:SVec2D,direction:SVec2D)="_m_GameObject_LinearMover_New_TSVec2DTSVec2D"
}="_m_GameObject_LinearMover"
WayPointMover^Mover{
.wayPoints:SVec2D&[]&
.toleranceRadius#&
.turningAngle#&
.nextWayPoint%&
.returnStart%&
-New()="__m_GameObject_WayPointMover_New"
-move:SVec2D()="_m_GameObject_WayPointMover_move"
}="_m_GameObject_WayPointMover"
Hitbox^Object{
.center:SVec2D&
.dimensions:SVec2D&
-New()="__m_GameObject_Hitbox_New"
-New(x#=0.00000000#,y#=0.00000000#,x2#=1.0#,y2#=1.0#)="_m_GameObject_Hitbox_New_ffff"
-New(center:SVec2D,width#=1.00000000#,height#=1.00000000#)="_m_GameObject_Hitbox_New_TSVec2Dff"
-New(center:SVec2D,dimensions:SVec2D)="_m_GameObject_Hitbox_New_TSVec2DTSVec2D"
-getWidth#()="_m_GameObject_Hitbox_getWidth"
-getHeight#()="_m_GameObject_Hitbox_getHeight"
-getX#()="_m_GameObject_Hitbox_getX"
-getY#()="_m_GameObject_Hitbox_getY"
-getLeft#()="_m_GameObject_Hitbox_getLeft"
-getRight#()="_m_GameObject_Hitbox_getRight"
-getTop#()="_m_GameObject_Hitbox_getTop"
-getBottom#()="_m_GameObject_Hitbox_getBottom"
-collides%(h:Hitbox)="_m_GameObject_Hitbox_collides_THitbox"
}="_m_GameObject_Hitbox"