#ifndef BLITZSHMUP_GAMEOBJECT_BMX_CONSOLE_RELEASE_LINUX_X64_H
#define BLITZSHMUP_GAMEOBJECT_BMX_CONSOLE_RELEASE_LINUX_X64_H

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
#include <math.mod/vector.mod/.bmx/vector.bmx.release.linux.x64.h>
int _bb_main();
struct _m_GameObject_Mover_obj;
struct _m_GameObject_GameObject_obj;
struct _m_GameObject_Bullet_obj;
struct _m_GameObject_LinearMover_obj;
struct _m_GameObject_WayPointMover_obj;
struct _m_GameObject_Hitbox_obj;
void __m_GameObject_Mover_New(struct _m_GameObject_Mover_obj* o);
typedef struct math_vector_SVec2D (*_m_GameObject_Mover_move_m)(struct _m_GameObject_Mover_obj*);
struct math_vector_SVec2D __m_GameObject_Mover_move(struct _m_GameObject_Mover_obj*);
typedef BBFLOAT (*_m_GameObject_Mover_getX_m)(struct _m_GameObject_Mover_obj*);
BBFLOAT __m_GameObject_Mover_getX(struct _m_GameObject_Mover_obj*);
typedef BBFLOAT (*_m_GameObject_Mover_getY_m)(struct _m_GameObject_Mover_obj*);
BBFLOAT __m_GameObject_Mover_getY(struct _m_GameObject_Mover_obj*);
struct BBClass__m_GameObject_Mover {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	unsigned int fields_offset;
	_m_GameObject_Mover_move_m m_move;
	_m_GameObject_Mover_getX_m m_getX;
	_m_GameObject_Mover_getY_m m_getY;
};

struct _m_GameObject_Mover_obj {
	struct BBClass__m_GameObject_Mover* clas;
	struct math_vector_SVec2D __m_gameobject_mover_position;
	struct math_vector_SVec2D __m_gameobject_mover_direction;
};
extern struct BBClass__m_GameObject_Mover _m_GameObject_Mover;
void __m_GameObject_GameObject_New(struct _m_GameObject_GameObject_obj* o);
typedef struct math_vector_SVec2D (*_m_GameObject_GameObject_move_m)(struct _m_GameObject_GameObject_obj*);
struct math_vector_SVec2D __m_GameObject_GameObject_move(struct _m_GameObject_GameObject_obj*);
typedef BBFLOAT (*_m_GameObject_GameObject_getX_m)(struct _m_GameObject_GameObject_obj*);
BBFLOAT __m_GameObject_GameObject_getX(struct _m_GameObject_GameObject_obj*);
typedef BBFLOAT (*_m_GameObject_GameObject_getY_m)(struct _m_GameObject_GameObject_obj*);
BBFLOAT __m_GameObject_GameObject_getY(struct _m_GameObject_GameObject_obj*);
struct BBClass__m_GameObject_GameObject {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	unsigned int fields_offset;
	_m_GameObject_GameObject_move_m m_move;
	_m_GameObject_GameObject_getX_m m_getX;
	_m_GameObject_GameObject_getY_m m_getY;
};

struct _m_GameObject_GameObject_obj {
	struct BBClass__m_GameObject_GameObject* clas;
	struct _m_GameObject_Mover_obj* __m_gameobject_gameobject_mover;
	BBINT __m_gameobject_gameobject_dead;
	struct _m_GameObject_Hitbox_obj* __m_gameobject_gameobject_hitbox;
};
extern struct BBClass__m_GameObject_GameObject _m_GameObject_GameObject;
void __m_GameObject_Bullet_New_TSVec2Dfff(struct _m_GameObject_Bullet_obj* o,struct math_vector_SVec2D bbt_position,BBFLOAT bbt_direction,BBFLOAT bbt_speed,BBFLOAT bbt_width);
struct _m_GameObject_Bullet_obj* __m_GameObject_Bullet_New_TSVec2Dfff_ObjectNew(BBClass * clas,struct math_vector_SVec2D bbt_position,BBFLOAT bbt_direction,BBFLOAT bbt_speed,BBFLOAT bbt_width);
void __m_GameObject_Bullet_New(struct _m_GameObject_Bullet_obj* o);
struct BBClass__m_GameObject_Bullet {
	struct BBClass__m_GameObject_GameObject*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	unsigned int fields_offset;
	_m_GameObject_GameObject_move_m m_move;
	_m_GameObject_GameObject_getX_m m_getX;
	_m_GameObject_GameObject_getY_m m_getY;
};

struct _m_GameObject_Bullet_obj {
	struct BBClass__m_GameObject_Bullet* clas;
	struct _m_GameObject_Mover_obj* __m_gameobject_gameobject_mover;
	BBINT __m_gameobject_gameobject_dead;
	struct _m_GameObject_Hitbox_obj* __m_gameobject_gameobject_hitbox;
};
extern struct BBClass__m_GameObject_Bullet _m_GameObject_Bullet;
void __m_GameObject_LinearMover_New_TSVec2DTSVec2D(struct _m_GameObject_LinearMover_obj* o,struct math_vector_SVec2D bbt_position2,struct math_vector_SVec2D bbt_direction2);
struct _m_GameObject_LinearMover_obj* __m_GameObject_LinearMover_New_TSVec2DTSVec2D_ObjectNew(BBClass * clas,struct math_vector_SVec2D bbt_position2,struct math_vector_SVec2D bbt_direction2);
void __m_GameObject_LinearMover_New(struct _m_GameObject_LinearMover_obj* o);
typedef struct math_vector_SVec2D (*_m_GameObject_LinearMover_move_m)(struct _m_GameObject_LinearMover_obj*);
struct math_vector_SVec2D __m_GameObject_LinearMover_move(struct _m_GameObject_LinearMover_obj*);
struct BBClass__m_GameObject_LinearMover {
	struct BBClass__m_GameObject_Mover*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	unsigned int fields_offset;
	_m_GameObject_LinearMover_move_m m_move;
	_m_GameObject_Mover_getX_m m_getX;
	_m_GameObject_Mover_getY_m m_getY;
};

struct _m_GameObject_LinearMover_obj {
	struct BBClass__m_GameObject_LinearMover* clas;
	struct math_vector_SVec2D __m_gameobject_mover_position;
	struct math_vector_SVec2D __m_gameobject_mover_direction;
};
extern struct BBClass__m_GameObject_LinearMover _m_GameObject_LinearMover;
void __m_GameObject_WayPointMover_New(struct _m_GameObject_WayPointMover_obj* o);
typedef struct math_vector_SVec2D (*_m_GameObject_WayPointMover_move_m)(struct _m_GameObject_WayPointMover_obj*);
struct math_vector_SVec2D __m_GameObject_WayPointMover_move(struct _m_GameObject_WayPointMover_obj*);
struct BBClass__m_GameObject_WayPointMover {
	struct BBClass__m_GameObject_Mover*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	unsigned int fields_offset;
	_m_GameObject_WayPointMover_move_m m_move;
	_m_GameObject_Mover_getX_m m_getX;
	_m_GameObject_Mover_getY_m m_getY;
};

struct _m_GameObject_WayPointMover_obj {
	struct BBClass__m_GameObject_WayPointMover* clas;
	struct math_vector_SVec2D __m_gameobject_mover_position;
	struct math_vector_SVec2D __m_gameobject_mover_direction;
	BBARRAY __m_gameobject_waypointmover_waypoints;
	BBFLOAT __m_gameobject_waypointmover_toleranceradius;
	BBFLOAT __m_gameobject_waypointmover_turningangle;
	BBINT __m_gameobject_waypointmover_nextwaypoint;
	BBINT __m_gameobject_waypointmover_returnstart;
};
extern struct BBClass__m_GameObject_WayPointMover _m_GameObject_WayPointMover;
void __m_GameObject_Hitbox_New_ffff(struct _m_GameObject_Hitbox_obj* o,BBFLOAT bbt_x,BBFLOAT bbt_y,BBFLOAT bbt_x2,BBFLOAT bbt_y2);
struct _m_GameObject_Hitbox_obj* __m_GameObject_Hitbox_New_ffff_ObjectNew(BBClass * clas,BBFLOAT bbt_x,BBFLOAT bbt_y,BBFLOAT bbt_x2,BBFLOAT bbt_y2);
void __m_GameObject_Hitbox_New_TSVec2Dff(struct _m_GameObject_Hitbox_obj* o,struct math_vector_SVec2D bbt_center,BBFLOAT bbt_width2,BBFLOAT bbt_height);
struct _m_GameObject_Hitbox_obj* __m_GameObject_Hitbox_New_TSVec2Dff_ObjectNew(BBClass * clas,struct math_vector_SVec2D bbt_center,BBFLOAT bbt_width2,BBFLOAT bbt_height);
void __m_GameObject_Hitbox_New_TSVec2DTSVec2D(struct _m_GameObject_Hitbox_obj* o,struct math_vector_SVec2D bbt_center2,struct math_vector_SVec2D bbt_dimensions);
struct _m_GameObject_Hitbox_obj* __m_GameObject_Hitbox_New_TSVec2DTSVec2D_ObjectNew(BBClass * clas,struct math_vector_SVec2D bbt_center2,struct math_vector_SVec2D bbt_dimensions);
void __m_GameObject_Hitbox_New(struct _m_GameObject_Hitbox_obj* o);
typedef BBFLOAT (*_m_GameObject_Hitbox_getWidth_m)(struct _m_GameObject_Hitbox_obj*);
BBFLOAT __m_GameObject_Hitbox_getWidth(struct _m_GameObject_Hitbox_obj*);
typedef BBFLOAT (*_m_GameObject_Hitbox_getHeight_m)(struct _m_GameObject_Hitbox_obj*);
BBFLOAT __m_GameObject_Hitbox_getHeight(struct _m_GameObject_Hitbox_obj*);
typedef BBFLOAT (*_m_GameObject_Hitbox_getX_m)(struct _m_GameObject_Hitbox_obj*);
BBFLOAT __m_GameObject_Hitbox_getX(struct _m_GameObject_Hitbox_obj*);
typedef BBFLOAT (*_m_GameObject_Hitbox_getY_m)(struct _m_GameObject_Hitbox_obj*);
BBFLOAT __m_GameObject_Hitbox_getY(struct _m_GameObject_Hitbox_obj*);
typedef BBFLOAT (*_m_GameObject_Hitbox_getLeft_m)(struct _m_GameObject_Hitbox_obj*);
BBFLOAT __m_GameObject_Hitbox_getLeft(struct _m_GameObject_Hitbox_obj*);
typedef BBFLOAT (*_m_GameObject_Hitbox_getRight_m)(struct _m_GameObject_Hitbox_obj*);
BBFLOAT __m_GameObject_Hitbox_getRight(struct _m_GameObject_Hitbox_obj*);
typedef BBFLOAT (*_m_GameObject_Hitbox_getTop_m)(struct _m_GameObject_Hitbox_obj*);
BBFLOAT __m_GameObject_Hitbox_getTop(struct _m_GameObject_Hitbox_obj*);
typedef BBFLOAT (*_m_GameObject_Hitbox_getBottom_m)(struct _m_GameObject_Hitbox_obj*);
BBFLOAT __m_GameObject_Hitbox_getBottom(struct _m_GameObject_Hitbox_obj*);
typedef BBINT (*_m_GameObject_Hitbox_collides_THitbox_m)(struct _m_GameObject_Hitbox_obj*,struct _m_GameObject_Hitbox_obj*);
BBINT __m_GameObject_Hitbox_collides_THitbox(struct _m_GameObject_Hitbox_obj*,struct _m_GameObject_Hitbox_obj*);
struct BBClass__m_GameObject_Hitbox {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	unsigned int fields_offset;
	_m_GameObject_Hitbox_getWidth_m m_getWidth;
	_m_GameObject_Hitbox_getHeight_m m_getHeight;
	_m_GameObject_Hitbox_getX_m m_getX;
	_m_GameObject_Hitbox_getY_m m_getY;
	_m_GameObject_Hitbox_getLeft_m m_getLeft;
	_m_GameObject_Hitbox_getRight_m m_getRight;
	_m_GameObject_Hitbox_getTop_m m_getTop;
	_m_GameObject_Hitbox_getBottom_m m_getBottom;
	_m_GameObject_Hitbox_collides_THitbox_m m_collides_THitbox;
};

struct _m_GameObject_Hitbox_obj {
	struct BBClass__m_GameObject_Hitbox* clas;
	struct math_vector_SVec2D __m_gameobject_hitbox_center;
	struct math_vector_SVec2D __m_gameobject_hitbox_dimensions;
};
extern struct BBClass__m_GameObject_Hitbox _m_GameObject_Hitbox;

#endif
