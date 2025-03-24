#ifndef BLITZSHMUP_GAMEOBJECT_BMX_DEBUG_LINUX_X64_H
#define BLITZSHMUP_GAMEOBJECT_BMX_DEBUG_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.debug.linux.x64.h>
#include <brl.mod/filesystem.mod/.bmx/filesystem.bmx.debug.linux.x64.h>
#include <brl.mod/platform.mod/.bmx/platform.bmx.debug.linux.x64.h>
#include <brl.mod/maxlua.mod/.bmx/maxlua.bmx.debug.linux.x64.h>
#include <brl.mod/graphics.mod/.bmx/graphics.bmx.debug.linux.x64.h>
#include <brl.mod/d3d7max2d.mod/.bmx/d3d7max2d.bmx.debug.linux.x64.h>
#include <brl.mod/pixmap.mod/.bmx/pixmap.bmx.debug.linux.x64.h>
#include <brl.mod/openalaudio.mod/.bmx/openalaudio.bmx.debug.linux.x64.h>
#include <brl.mod/standardio.mod/.bmx/standardio.bmx.debug.linux.x64.h>
#include <brl.mod/clipboard.mod/.bmx/clipboard.bmx.debug.linux.x64.h>
#include <brl.mod/appstub.mod/.bmx/appstub.bmx.debug.linux.x64.h>
#include <brl.mod/uuid.mod/.bmx/uuid.bmx.debug.linux.x64.h>
#include <brl.mod/jpgloader.mod/.bmx/jpgloader.bmx.debug.linux.x64.h>
#include <brl.mod/volumes.mod/.bmx/volumes.bmx.debug.linux.x64.h>
#include <brl.mod/freetypefont.mod/.bmx/freetypefont.bmx.debug.linux.x64.h>
#include <brl.mod/socket.mod/.bmx/socket.bmx.debug.linux.x64.h>
#include <brl.mod/max2d.mod/.bmx/max2d.bmx.debug.linux.x64.h>
#include <brl.mod/d3d9max2d.mod/.bmx/d3d9max2d.bmx.debug.linux.x64.h>
#include <brl.mod/bytebuffer.mod/.bmx/bytebuffer.bmx.debug.linux.x64.h>
#include <brl.mod/timer.mod/.bmx/timer.bmx.debug.linux.x64.h>
#include <brl.mod/retro.mod/.bmx/retro.bmx.debug.linux.x64.h>
#include <brl.mod/tgaloader.mod/.bmx/tgaloader.bmx.debug.linux.x64.h>
#include <brl.mod/objectlist.mod/.bmx/objectlist.bmx.debug.linux.x64.h>
#include <brl.mod/systemdefault.mod/.bmx/systemdefault.bmx.debug.linux.x64.h>
#include <brl.mod/maxutil.mod/.bmx/maxutil.bmx.debug.linux.x64.h>
#include <brl.mod/pngloader.mod/.bmx/pngloader.bmx.debug.linux.x64.h>
#include <brl.mod/glgraphics.mod/.bmx/glgraphics.bmx.debug.linux.x64.h>
#include <brl.mod/bmploader.mod/.bmx/bmploader.bmx.debug.linux.x64.h>
#include <brl.mod/freeaudioaudio.mod/.bmx/freeaudioaudio.bmx.debug.linux.x64.h>
#include <brl.mod/base64.mod/.bmx/base64.bmx.debug.linux.x64.h>
#include <brl.mod/collections.mod/.bmx/collections.bmx.debug.linux.x64.h>
#include <brl.mod/oggloader.mod/.bmx/oggloader.bmx.debug.linux.x64.h>
#include <brl.mod/glmax2d.mod/.bmx/glmax2d.bmx.debug.linux.x64.h>
#include <brl.mod/wavloader.mod/.bmx/wavloader.bmx.debug.linux.x64.h>
#include <brl.mod/utf8stream.mod/.bmx/utf8stream.bmx.debug.linux.x64.h>
#include <brl.mod/maxunit.mod/.bmx/maxunit.bmx.debug.linux.x64.h>
#include <brl.mod/directsoundaudio.mod/.bmx/directsoundaudio.bmx.debug.linux.x64.h>
#include <brl.mod/threadpool.mod/.bmx/threadpool.bmx.debug.linux.x64.h>
#include <brl.mod/gnet.mod/.bmx/gnet.bmx.debug.linux.x64.h>
#include <brl.mod/timerdefault.mod/.bmx/timerdefault.bmx.debug.linux.x64.h>
#include <brl.mod/eventqueue.mod/.bmx/eventqueue.bmx.debug.linux.x64.h>
#include <brl.mod/dxgraphics.mod/.bmx/dxgraphics.bmx.debug.linux.x64.h>
#include <pub.mod/nx.mod/.bmx/nx.bmx.debug.linux.x64.h>
#include <pub.mod/opengles3.mod/.bmx/opengles3.bmx.debug.linux.x64.h>
#include <pub.mod/win32.mod/.bmx/win32.bmx.debug.linux.x64.h>
#include <pub.mod/nfd.mod/.bmx/nfd.bmx.debug.linux.x64.h>
#include <pub.mod/xmmintrin.mod/.bmx/xmmintrin.bmx.debug.linux.x64.h>
#include <pub.mod/glad.mod/.bmx/glad.bmx.debug.linux.x64.h>
#include <pub.mod/freeprocess.mod/.bmx/freeprocess.bmx.debug.linux.x64.h>
#include <pub.mod/vulkan.mod/.bmx/vulkan.bmx.debug.linux.x64.h>
#include <pub.mod/opengles.mod/.bmx/opengles.bmx.debug.linux.x64.h>
#include <pub.mod/freejoy.mod/.bmx/freejoy.bmx.debug.linux.x64.h>
#include <sdl.mod/sdlrendermax2d.mod/.bmx/sdlrendermax2d.bmx.debug.linux.x64.h>
int _bb_blitzshmup_gameobject();
struct _m_GameObject_Mover_obj;
struct _m_GameObject_LinearMover_obj;
struct _m_GameObject_WayPointMover_obj;
struct _m_GameObject_GameObject_obj;
void __m_GameObject_Mover_New(struct _m_GameObject_Mover_obj* o);
typedef struct math_vector_SVec2F (*_m_GameObject_Mover_move_m)(struct _m_GameObject_Mover_obj*);
struct math_vector_SVec2F __m_GameObject_Mover_move(struct _m_GameObject_Mover_obj*);
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
};

struct _m_GameObject_Mover_obj {
	struct BBClass__m_GameObject_Mover* clas;
	struct math_vector_SVec2F __m_gameobject_mover_position;
	struct math_vector_SVec2F __m_gameobject_mover_direction;
};
extern struct BBClass__m_GameObject_Mover _m_GameObject_Mover;
void __m_GameObject_LinearMover_New_TSVec2FTSVec2F(struct _m_GameObject_LinearMover_obj* o,struct math_vector_SVec2F bbt_position,struct math_vector_SVec2F bbt_direction);
struct _m_GameObject_LinearMover_obj* __m_GameObject_LinearMover_New_TSVec2FTSVec2F_ObjectNew(BBClass * clas,struct math_vector_SVec2F bbt_position,struct math_vector_SVec2F bbt_direction);
void __m_GameObject_LinearMover_New(struct _m_GameObject_LinearMover_obj* o);
typedef struct math_vector_SVec2F (*_m_GameObject_LinearMover_move_m)(struct _m_GameObject_LinearMover_obj*);
struct math_vector_SVec2F __m_GameObject_LinearMover_move(struct _m_GameObject_LinearMover_obj*);
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
};

struct _m_GameObject_LinearMover_obj {
	struct BBClass__m_GameObject_LinearMover* clas;
	struct math_vector_SVec2F __m_gameobject_mover_position;
	struct math_vector_SVec2F __m_gameobject_mover_direction;
};
extern struct BBClass__m_GameObject_LinearMover _m_GameObject_LinearMover;
void __m_GameObject_WayPointMover_New(struct _m_GameObject_WayPointMover_obj* o);
typedef struct math_vector_SVec2F (*_m_GameObject_WayPointMover_move_m)(struct _m_GameObject_WayPointMover_obj*);
struct math_vector_SVec2F __m_GameObject_WayPointMover_move(struct _m_GameObject_WayPointMover_obj*);
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
};

struct _m_GameObject_WayPointMover_obj {
	struct BBClass__m_GameObject_WayPointMover* clas;
	struct math_vector_SVec2F __m_gameobject_mover_position;
	struct math_vector_SVec2F __m_gameobject_mover_direction;
	BBARRAY __m_gameobject_waypointmover_waypoints;
	BBFLOAT __m_gameobject_waypointmover_toleranceradius;
	BBFLOAT __m_gameobject_waypointmover_turningangle;
	BBINT __m_gameobject_waypointmover_nextwaypoint;
	BBINT __m_gameobject_waypointmover_returnstart;
};
extern struct BBClass__m_GameObject_WayPointMover _m_GameObject_WayPointMover;
void __m_GameObject_GameObject_New(struct _m_GameObject_GameObject_obj* o);
typedef struct math_vector_SVec2F (*_m_GameObject_GameObject_move_m)(struct _m_GameObject_GameObject_obj*);
struct math_vector_SVec2F __m_GameObject_GameObject_move(struct _m_GameObject_GameObject_obj*);
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
};

struct _m_GameObject_GameObject_obj {
	struct BBClass__m_GameObject_GameObject* clas;
	struct _m_GameObject_Mover_obj* __m_gameobject_gameobject_mover;
	BBINT __m_gameobject_gameobject_dead;
};
extern struct BBClass__m_GameObject_GameObject _m_GameObject_GameObject;

#endif
