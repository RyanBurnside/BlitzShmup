#include "GameObject.bmx.release.linux.x64.h"
struct BBDebugScope_15{int kind; const char *name; BBDebugDecl decls[16]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
struct BBDebugScope_5{int kind; const char *name; BBDebugDecl decls[6]; };
struct BBDebugScope_7{int kind; const char *name; BBDebugDecl decls[8]; };
void __m_GameObject_Mover_New(struct _m_GameObject_Mover_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_GameObject_Mover;
	o->__m_gameobject_mover_position = math_vector_SVec2D_New_ObjectNew();
	o->__m_gameobject_mover_direction = math_vector_SVec2D_New_ObjectNew();
}
struct math_vector_SVec2D __m_GameObject_Mover_move(struct _m_GameObject_Mover_obj* o){
	brl_blitz_NullMethodError();
	struct math_vector_SVec2D bbt_=((struct math_vector_SVec2D){0,0});
	return bbt_;
}
BBFLOAT __m_GameObject_Mover_getX(struct _m_GameObject_Mover_obj* o){
	return ((BBFLOAT)_math_vector_SVec2D__iget_d_i((struct math_vector_SVec2D*)&o->__m_gameobject_mover_position ,0));
}
BBFLOAT __m_GameObject_Mover_getY(struct _m_GameObject_Mover_obj* o){
	return ((BBFLOAT)_math_vector_SVec2D__iget_d_i((struct math_vector_SVec2D*)&o->__m_gameobject_mover_position ,1));
}
struct BBDebugScope_5 _m_GameObject_Mover_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"Mover",
	{
		{
			BBDEBUGDECL_FIELD,
			"position",
			"@SVec2D",
			.field_offset=offsetof(struct _m_GameObject_Mover_obj,__m_gameobject_mover_position)
		},
		{
			BBDEBUGDECL_FIELD,
			"direction",
			"@SVec2D",
			.field_offset=offsetof(struct _m_GameObject_Mover_obj,__m_gameobject_mover_direction)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.func_ptr=(BBFuncPtr)&__m_GameObject_Mover_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"getX",
			"()f",
			.func_ptr=(BBFuncPtr)&__m_GameObject_Mover_getX
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"getY",
			"()f",
			.func_ptr=(BBFuncPtr)&__m_GameObject_Mover_getY
		},
		{
			BBDEBUGDECL_END
		}
	}
};
struct BBClass__m_GameObject_Mover _m_GameObject_Mover={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_GameObject_Mover_scope,
	sizeof(struct _m_GameObject_Mover_obj),
	(void (*)(BBOBJECT))__m_GameObject_Mover_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_GameObject_Mover_obj,__m_gameobject_mover_direction) - offsetof(struct _m_GameObject_Mover_obj,__m_gameobject_mover_position) + sizeof(struct math_vector_SVec2D)
	,0
	,offsetof(struct _m_GameObject_Mover_obj,__m_gameobject_mover_position)
	,__m_GameObject_Mover_move
	,__m_GameObject_Mover_getX
	,__m_GameObject_Mover_getY
};

void __m_GameObject_GameObject_New(struct _m_GameObject_GameObject_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_GameObject_GameObject;
	o->__m_gameobject_gameobject_mover = (struct _m_GameObject_Mover_obj*)((struct _m_GameObject_Mover_obj*)bbObjectDowncast((BBOBJECT)(struct _m_GameObject_LinearMover_obj*)bbObjectAtomicNew((BBClass *)&_m_GameObject_LinearMover),(BBClass*)&_m_GameObject_Mover));
	o->__m_gameobject_gameobject_dead = 0;
	o->__m_gameobject_gameobject_hitbox = (struct _m_GameObject_Hitbox_obj*)__m_GameObject_Hitbox_New_ffff_ObjectNew((struct _m_GameObject_Hitbox_obj*)&_m_GameObject_Hitbox,0.00000000f,0.00000000f,1.0f,1.0f);
}
struct math_vector_SVec2D __m_GameObject_GameObject_move(struct _m_GameObject_GameObject_obj* o){
	(o->__m_gameobject_gameobject_mover )->clas->m_move((struct _m_GameObject_Mover_obj*)o->__m_gameobject_gameobject_mover );
	o->__m_gameobject_gameobject_hitbox ->__m_gameobject_hitbox_center =o->__m_gameobject_gameobject_mover ->__m_gameobject_mover_position ;
	return o->__m_gameobject_gameobject_mover ->__m_gameobject_mover_position ;
}
BBFLOAT __m_GameObject_GameObject_getX(struct _m_GameObject_GameObject_obj* o){
	return (o->__m_gameobject_gameobject_mover )->clas->m_getX((struct _m_GameObject_Mover_obj*)o->__m_gameobject_gameobject_mover );
}
BBFLOAT __m_GameObject_GameObject_getY(struct _m_GameObject_GameObject_obj* o){
	return (o->__m_gameobject_gameobject_mover )->clas->m_getY((struct _m_GameObject_Mover_obj*)o->__m_gameobject_gameobject_mover );
}
struct BBDebugScope_7 _m_GameObject_GameObject_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"GameObject",
	{
		{
			BBDEBUGDECL_FIELD,
			"mover",
			":Mover",
			.field_offset=offsetof(struct _m_GameObject_GameObject_obj,__m_gameobject_gameobject_mover)
		},
		{
			BBDEBUGDECL_FIELD,
			"dead",
			"i",
			.field_offset=offsetof(struct _m_GameObject_GameObject_obj,__m_gameobject_gameobject_dead)
		},
		{
			BBDEBUGDECL_FIELD,
			"hitbox",
			":Hitbox",
			.field_offset=offsetof(struct _m_GameObject_GameObject_obj,__m_gameobject_gameobject_hitbox)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.func_ptr=(BBFuncPtr)&__m_GameObject_GameObject_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"move",
			"()@SVec2D",
			.func_ptr=(BBFuncPtr)&__m_GameObject_GameObject_move
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"getX",
			"()f",
			.func_ptr=(BBFuncPtr)&__m_GameObject_GameObject_getX
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"getY",
			"()f",
			.func_ptr=(BBFuncPtr)&__m_GameObject_GameObject_getY
		},
		{
			BBDEBUGDECL_END
		}
	}
};
struct BBClass__m_GameObject_GameObject _m_GameObject_GameObject={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_GameObject_GameObject_scope,
	sizeof(struct _m_GameObject_GameObject_obj),
	(void (*)(BBOBJECT))__m_GameObject_GameObject_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_GameObject_GameObject_obj,__m_gameobject_gameobject_hitbox) - offsetof(struct _m_GameObject_GameObject_obj,__m_gameobject_gameobject_mover) + sizeof(struct _m_GameObject_Hitbox_obj*)
	,0
	,offsetof(struct _m_GameObject_GameObject_obj,__m_gameobject_gameobject_mover)
	,__m_GameObject_GameObject_move
	,__m_GameObject_GameObject_getX
	,__m_GameObject_GameObject_getY
};

void __m_GameObject_Bullet_New_TSVec2Dfff(struct _m_GameObject_Bullet_obj* o,struct math_vector_SVec2D bbt_position,BBFLOAT bbt_direction,BBFLOAT bbt_speed,BBFLOAT bbt_width) {
	__m_GameObject_GameObject_New((struct _m_GameObject_GameObject_obj*)o);
	o->clas = &_m_GameObject_Bullet;
	struct math_vector_SVec2D bbt_tempDirection=math_vector_SVec2D_New_dd_ObjectNew((bbCos((double)((BBDOUBLE)bbt_direction))*((BBDOUBLE)bbt_speed)),(bbSin((double)((BBDOUBLE)bbt_direction))*((BBDOUBLE)bbt_speed)));
	o->__m_gameobject_gameobject_mover =(struct _m_GameObject_Mover_obj*)((struct _m_GameObject_Mover_obj*)bbObjectDowncast((BBOBJECT)__m_GameObject_LinearMover_New_TSVec2DTSVec2D_ObjectNew((struct _m_GameObject_LinearMover_obj*)&_m_GameObject_LinearMover,math_vector_SVec2D_New_dd_ObjectNew(_math_vector_SVec2D__iget_d_i((struct math_vector_SVec2D*)&bbt_position,0),_math_vector_SVec2D__iget_d_i((struct math_vector_SVec2D*)&bbt_position,1)),bbt_tempDirection),(BBClass*)&_m_GameObject_Mover));
	o->__m_gameobject_gameobject_hitbox =(struct _m_GameObject_Hitbox_obj*)__m_GameObject_Hitbox_New_TSVec2Dff_ObjectNew((struct _m_GameObject_Hitbox_obj*)&_m_GameObject_Hitbox,math_vector_SVec2D_New_dd_ObjectNew(_math_vector_SVec2D__iget_d_i((struct math_vector_SVec2D*)&bbt_position,0),_math_vector_SVec2D__iget_d_i((struct math_vector_SVec2D*)&bbt_position,1)),bbt_width,bbt_width);
}
struct _m_GameObject_Bullet_obj* __m_GameObject_Bullet_New_TSVec2Dfff_ObjectNew(BBClass * clas,struct math_vector_SVec2D bbt_position,BBFLOAT bbt_direction,BBFLOAT bbt_speed,BBFLOAT bbt_width) {
	struct _m_GameObject_Bullet_obj* o = (struct _m_GameObject_Bullet_obj*)bbObjectNewNC(clas);
	__m_GameObject_Bullet_New_TSVec2Dfff(o, bbt_position, bbt_direction, bbt_speed, bbt_width);
	return o;
}
void __m_GameObject_Bullet_New(struct _m_GameObject_Bullet_obj* o) {
	__m_GameObject_GameObject_New((struct _m_GameObject_GameObject_obj*)o);
	o->clas = &_m_GameObject_Bullet;
}
struct BBDebugScope_2 _m_GameObject_Bullet_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"Bullet",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.func_ptr=(BBFuncPtr)&__m_GameObject_Bullet_New
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"New",
			"(@SVec2D,f,f,f):Bullet",
			.func_ptr=(BBFuncPtr)&__m_GameObject_Bullet_New_TSVec2Dfff
		},
		{
			BBDEBUGDECL_END
		}
	}
};
struct BBClass__m_GameObject_Bullet _m_GameObject_Bullet={
	&_m_GameObject_GameObject,
	bbObjectFree,
	(BBDebugScope*)&_m_GameObject_Bullet_scope,
	sizeof(struct _m_GameObject_Bullet_obj),
	(void (*)(BBOBJECT))__m_GameObject_Bullet_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,sizeof(void*)
	,__m_GameObject_GameObject_move
	,__m_GameObject_GameObject_getX
	,__m_GameObject_GameObject_getY
};

void __m_GameObject_LinearMover_New_TSVec2DTSVec2D(struct _m_GameObject_LinearMover_obj* o,struct math_vector_SVec2D bbt_position2,struct math_vector_SVec2D bbt_direction2) {
	__m_GameObject_Mover_New((struct _m_GameObject_Mover_obj*)o);
	o->clas = &_m_GameObject_LinearMover;
	o->__m_gameobject_mover_position =bbt_position2;
	o->__m_gameobject_mover_direction =bbt_direction2;
}
struct _m_GameObject_LinearMover_obj* __m_GameObject_LinearMover_New_TSVec2DTSVec2D_ObjectNew(BBClass * clas,struct math_vector_SVec2D bbt_position2,struct math_vector_SVec2D bbt_direction2) {
	struct _m_GameObject_LinearMover_obj* o = (struct _m_GameObject_LinearMover_obj*)bbObjectAtomicNewNC(clas);
	__m_GameObject_LinearMover_New_TSVec2DTSVec2D(o, bbt_position2, bbt_direction2);
	return o;
}
void __m_GameObject_LinearMover_New(struct _m_GameObject_LinearMover_obj* o) {
	__m_GameObject_Mover_New((struct _m_GameObject_Mover_obj*)o);
	o->clas = &_m_GameObject_LinearMover;
}
struct math_vector_SVec2D __m_GameObject_LinearMover_move(struct _m_GameObject_LinearMover_obj* o){
	o->__m_gameobject_mover_position =_math_vector_SVec2D__add_TSVec2D_TSVec2D((struct math_vector_SVec2D*)&o->__m_gameobject_mover_position ,o->__m_gameobject_mover_direction );
	return o->__m_gameobject_mover_position ;
}
struct BBDebugScope_3 _m_GameObject_LinearMover_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"LinearMover",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.func_ptr=(BBFuncPtr)&__m_GameObject_LinearMover_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"move",
			"()@SVec2D",
			.func_ptr=(BBFuncPtr)&__m_GameObject_LinearMover_move
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"New",
			"(@SVec2D,@SVec2D):LinearMover",
			.func_ptr=(BBFuncPtr)&__m_GameObject_LinearMover_New_TSVec2DTSVec2D
		},
		{
			BBDEBUGDECL_END
		}
	}
};
struct BBClass__m_GameObject_LinearMover _m_GameObject_LinearMover={
	&_m_GameObject_Mover,
	bbObjectFree,
	(BBDebugScope*)&_m_GameObject_LinearMover_scope,
	sizeof(struct _m_GameObject_LinearMover_obj),
	(void (*)(BBOBJECT))__m_GameObject_LinearMover_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,sizeof(void*)
	,__m_GameObject_LinearMover_move
	,__m_GameObject_Mover_getX
	,__m_GameObject_Mover_getY
};

void __m_GameObject_WayPointMover_New(struct _m_GameObject_WayPointMover_obj* o) {
	__m_GameObject_Mover_New((struct _m_GameObject_Mover_obj*)o);
	o->clas = &_m_GameObject_WayPointMover;
	o->__m_gameobject_waypointmover_waypoints = bbArrayNew1DStruct("@SVec2D", 1, sizeof(struct math_vector_SVec2D), _math_vector_SVec2D_New);
	o->__m_gameobject_waypointmover_toleranceradius = 10.0000000f;
	o->__m_gameobject_waypointmover_turningangle = 22.5000000f;
	o->__m_gameobject_waypointmover_nextwaypoint = 0;
	o->__m_gameobject_waypointmover_returnstart = 0;
}
struct math_vector_SVec2D __m_GameObject_WayPointMover_move(struct _m_GameObject_WayPointMover_obj* o){
	if((o->__m_gameobject_waypointmover_waypoints ->scales[0])<1){
		return o->__m_gameobject_mover_position ;
	}
	return o->__m_gameobject_mover_position ;
}
struct BBDebugScope_7 _m_GameObject_WayPointMover_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"WayPointMover",
	{
		{
			BBDEBUGDECL_FIELD,
			"wayPoints",
			"[]@SVec2D",
			.field_offset=offsetof(struct _m_GameObject_WayPointMover_obj,__m_gameobject_waypointmover_waypoints)
		},
		{
			BBDEBUGDECL_FIELD,
			"toleranceRadius",
			"f",
			.field_offset=offsetof(struct _m_GameObject_WayPointMover_obj,__m_gameobject_waypointmover_toleranceradius)
		},
		{
			BBDEBUGDECL_FIELD,
			"turningAngle",
			"f",
			.field_offset=offsetof(struct _m_GameObject_WayPointMover_obj,__m_gameobject_waypointmover_turningangle)
		},
		{
			BBDEBUGDECL_FIELD,
			"nextWayPoint",
			"i",
			.field_offset=offsetof(struct _m_GameObject_WayPointMover_obj,__m_gameobject_waypointmover_nextwaypoint)
		},
		{
			BBDEBUGDECL_FIELD,
			"returnStart",
			"i",
			.field_offset=offsetof(struct _m_GameObject_WayPointMover_obj,__m_gameobject_waypointmover_returnstart)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.func_ptr=(BBFuncPtr)&__m_GameObject_WayPointMover_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"move",
			"()@SVec2D",
			.func_ptr=(BBFuncPtr)&__m_GameObject_WayPointMover_move
		},
		{
			BBDEBUGDECL_END
		}
	}
};
struct BBClass__m_GameObject_WayPointMover _m_GameObject_WayPointMover={
	&_m_GameObject_Mover,
	bbObjectFree,
	(BBDebugScope*)&_m_GameObject_WayPointMover_scope,
	sizeof(struct _m_GameObject_WayPointMover_obj),
	(void (*)(BBOBJECT))__m_GameObject_WayPointMover_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_GameObject_WayPointMover_obj,__m_gameobject_waypointmover_returnstart) - offsetof(struct _m_GameObject_WayPointMover_obj,__m_gameobject_waypointmover_waypoints) + sizeof(BBINT)
	,0
	,offsetof(struct _m_GameObject_WayPointMover_obj,__m_gameobject_waypointmover_waypoints)
	,__m_GameObject_WayPointMover_move
	,__m_GameObject_Mover_getX
	,__m_GameObject_Mover_getY
};

void __m_GameObject_Hitbox_New_ffff(struct _m_GameObject_Hitbox_obj* o,BBFLOAT bbt_x,BBFLOAT bbt_y,BBFLOAT bbt_x2,BBFLOAT bbt_y2) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_GameObject_Hitbox;
	o->__m_gameobject_hitbox_center = math_vector_SVec2D_New_ObjectNew();
	o->__m_gameobject_hitbox_dimensions = math_vector_SVec2D_New_ObjectNew();
	o->__m_gameobject_hitbox_center =math_vector_SVec2D_New_dd_ObjectNew(((BBDOUBLE)((bbt_x+bbt_x2)*0.5f)),((BBDOUBLE)((bbt_y+bbt_y2)*0.5f)));
	o->__m_gameobject_hitbox_dimensions =math_vector_SVec2D_New_dd_ObjectNew(((BBDOUBLE)brl_blitz_Abs2(bbt_x2-bbt_x)),((BBDOUBLE)brl_blitz_Abs2(bbt_y2-bbt_y)));
}
struct _m_GameObject_Hitbox_obj* __m_GameObject_Hitbox_New_ffff_ObjectNew(BBClass * clas,BBFLOAT bbt_x,BBFLOAT bbt_y,BBFLOAT bbt_x2,BBFLOAT bbt_y2) {
	struct _m_GameObject_Hitbox_obj* o = (struct _m_GameObject_Hitbox_obj*)bbObjectAtomicNewNC(clas);
	__m_GameObject_Hitbox_New_ffff(o, bbt_x, bbt_y, bbt_x2, bbt_y2);
	return o;
}
void __m_GameObject_Hitbox_New_TSVec2Dff(struct _m_GameObject_Hitbox_obj* o,struct math_vector_SVec2D bbt_center,BBFLOAT bbt_width2,BBFLOAT bbt_height) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_GameObject_Hitbox;
	o->__m_gameobject_hitbox_center = math_vector_SVec2D_New_ObjectNew();
	o->__m_gameobject_hitbox_dimensions = math_vector_SVec2D_New_ObjectNew();
	o->__m_gameobject_hitbox_center =bbt_center;
	o->__m_gameobject_hitbox_dimensions =math_vector_SVec2D_New_dd_ObjectNew(((BBDOUBLE)bbt_width2),((BBDOUBLE)bbt_height));
}
struct _m_GameObject_Hitbox_obj* __m_GameObject_Hitbox_New_TSVec2Dff_ObjectNew(BBClass * clas,struct math_vector_SVec2D bbt_center,BBFLOAT bbt_width2,BBFLOAT bbt_height) {
	struct _m_GameObject_Hitbox_obj* o = (struct _m_GameObject_Hitbox_obj*)bbObjectAtomicNewNC(clas);
	__m_GameObject_Hitbox_New_TSVec2Dff(o, bbt_center, bbt_width2, bbt_height);
	return o;
}
void __m_GameObject_Hitbox_New_TSVec2DTSVec2D(struct _m_GameObject_Hitbox_obj* o,struct math_vector_SVec2D bbt_center2,struct math_vector_SVec2D bbt_dimensions) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_GameObject_Hitbox;
	o->__m_gameobject_hitbox_center = math_vector_SVec2D_New_ObjectNew();
	o->__m_gameobject_hitbox_dimensions = math_vector_SVec2D_New_ObjectNew();
	o->__m_gameobject_hitbox_center =bbt_center2;
	o->__m_gameobject_hitbox_dimensions =bbt_dimensions;
}
struct _m_GameObject_Hitbox_obj* __m_GameObject_Hitbox_New_TSVec2DTSVec2D_ObjectNew(BBClass * clas,struct math_vector_SVec2D bbt_center2,struct math_vector_SVec2D bbt_dimensions) {
	struct _m_GameObject_Hitbox_obj* o = (struct _m_GameObject_Hitbox_obj*)bbObjectAtomicNewNC(clas);
	__m_GameObject_Hitbox_New_TSVec2DTSVec2D(o, bbt_center2, bbt_dimensions);
	return o;
}
void __m_GameObject_Hitbox_New(struct _m_GameObject_Hitbox_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_GameObject_Hitbox;
	o->__m_gameobject_hitbox_center = math_vector_SVec2D_New_ObjectNew();
	o->__m_gameobject_hitbox_dimensions = math_vector_SVec2D_New_ObjectNew();
}
BBFLOAT __m_GameObject_Hitbox_getWidth(struct _m_GameObject_Hitbox_obj* o){
	return ((BBFLOAT)_math_vector_SVec2D__iget_d_i((struct math_vector_SVec2D*)&o->__m_gameobject_hitbox_dimensions ,0));
}
BBFLOAT __m_GameObject_Hitbox_getHeight(struct _m_GameObject_Hitbox_obj* o){
	return ((BBFLOAT)_math_vector_SVec2D__iget_d_i((struct math_vector_SVec2D*)&o->__m_gameobject_hitbox_dimensions ,1));
}
BBFLOAT __m_GameObject_Hitbox_getX(struct _m_GameObject_Hitbox_obj* o){
	return ((BBFLOAT)_math_vector_SVec2D__iget_d_i((struct math_vector_SVec2D*)&o->__m_gameobject_hitbox_center ,0));
}
BBFLOAT __m_GameObject_Hitbox_getY(struct _m_GameObject_Hitbox_obj* o){
	return ((BBFLOAT)_math_vector_SVec2D__iget_d_i((struct math_vector_SVec2D*)&o->__m_gameobject_hitbox_center ,1));
}
BBFLOAT __m_GameObject_Hitbox_getLeft(struct _m_GameObject_Hitbox_obj* o){
	return ((BBFLOAT)(_math_vector_SVec2D__iget_d_i((struct math_vector_SVec2D*)&o->__m_gameobject_hitbox_center ,0)-((BBDOUBLE)(((struct _m_GameObject_Hitbox_obj*)o)->clas->m_getWidth((struct _m_GameObject_Hitbox_obj*)o)*0.5f))));
}
BBFLOAT __m_GameObject_Hitbox_getRight(struct _m_GameObject_Hitbox_obj* o){
	return ((BBFLOAT)(_math_vector_SVec2D__iget_d_i((struct math_vector_SVec2D*)&o->__m_gameobject_hitbox_center ,0)+((BBDOUBLE)(((struct _m_GameObject_Hitbox_obj*)o)->clas->m_getWidth((struct _m_GameObject_Hitbox_obj*)o)*0.5f))));
}
BBFLOAT __m_GameObject_Hitbox_getTop(struct _m_GameObject_Hitbox_obj* o){
	return ((BBFLOAT)(_math_vector_SVec2D__iget_d_i((struct math_vector_SVec2D*)&o->__m_gameobject_hitbox_center ,1)-((BBDOUBLE)(((struct _m_GameObject_Hitbox_obj*)o)->clas->m_getHeight((struct _m_GameObject_Hitbox_obj*)o)*0.5f))));
}
BBFLOAT __m_GameObject_Hitbox_getBottom(struct _m_GameObject_Hitbox_obj* o){
	return ((BBFLOAT)(_math_vector_SVec2D__iget_d_i((struct math_vector_SVec2D*)&o->__m_gameobject_hitbox_center ,1)+((BBDOUBLE)(((struct _m_GameObject_Hitbox_obj*)o)->clas->m_getHeight((struct _m_GameObject_Hitbox_obj*)o)*0.5f))));
}
BBINT __m_GameObject_Hitbox_collides_THitbox(struct _m_GameObject_Hitbox_obj* o,struct _m_GameObject_Hitbox_obj* bbt_h){
	if((bbt_h)->clas->m_getBottom((struct _m_GameObject_Hitbox_obj*)bbt_h)<((struct _m_GameObject_Hitbox_obj*)o)->clas->m_getTop((struct _m_GameObject_Hitbox_obj*)o)){
		return 0;
	}
	if((bbt_h)->clas->m_getTop((struct _m_GameObject_Hitbox_obj*)bbt_h)>((struct _m_GameObject_Hitbox_obj*)o)->clas->m_getBottom((struct _m_GameObject_Hitbox_obj*)o)){
		return 0;
	}
	if((bbt_h)->clas->m_getRight((struct _m_GameObject_Hitbox_obj*)bbt_h)<((struct _m_GameObject_Hitbox_obj*)o)->clas->m_getLeft((struct _m_GameObject_Hitbox_obj*)o)){
		return 0;
	}
	if((bbt_h)->clas->m_getLeft((struct _m_GameObject_Hitbox_obj*)bbt_h)>((struct _m_GameObject_Hitbox_obj*)o)->clas->m_getRight((struct _m_GameObject_Hitbox_obj*)o)){
		return 0;
	}
	return 1;
}
struct BBDebugScope_15 _m_GameObject_Hitbox_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"Hitbox",
	{
		{
			BBDEBUGDECL_FIELD,
			"center",
			"@SVec2D",
			.field_offset=offsetof(struct _m_GameObject_Hitbox_obj,__m_gameobject_hitbox_center)
		},
		{
			BBDEBUGDECL_FIELD,
			"dimensions",
			"@SVec2D",
			.field_offset=offsetof(struct _m_GameObject_Hitbox_obj,__m_gameobject_hitbox_dimensions)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.func_ptr=(BBFuncPtr)&__m_GameObject_Hitbox_New
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"New",
			"(f,f,f,f):Hitbox",
			.func_ptr=(BBFuncPtr)&__m_GameObject_Hitbox_New_ffff
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"New",
			"(@SVec2D,f,f):Hitbox",
			.func_ptr=(BBFuncPtr)&__m_GameObject_Hitbox_New_TSVec2Dff
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"New",
			"(@SVec2D,@SVec2D):Hitbox",
			.func_ptr=(BBFuncPtr)&__m_GameObject_Hitbox_New_TSVec2DTSVec2D
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"getWidth",
			"()f",
			.func_ptr=(BBFuncPtr)&__m_GameObject_Hitbox_getWidth
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"getHeight",
			"()f",
			.func_ptr=(BBFuncPtr)&__m_GameObject_Hitbox_getHeight
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"getX",
			"()f",
			.func_ptr=(BBFuncPtr)&__m_GameObject_Hitbox_getX
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"getY",
			"()f",
			.func_ptr=(BBFuncPtr)&__m_GameObject_Hitbox_getY
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"getLeft",
			"()f",
			.func_ptr=(BBFuncPtr)&__m_GameObject_Hitbox_getLeft
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"getRight",
			"()f",
			.func_ptr=(BBFuncPtr)&__m_GameObject_Hitbox_getRight
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"getTop",
			"()f",
			.func_ptr=(BBFuncPtr)&__m_GameObject_Hitbox_getTop
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"getBottom",
			"()f",
			.func_ptr=(BBFuncPtr)&__m_GameObject_Hitbox_getBottom
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"collides",
			"(:Hitbox)i",
			.func_ptr=(BBFuncPtr)&__m_GameObject_Hitbox_collides_THitbox
		},
		{
			BBDEBUGDECL_END
		}
	}
};
struct BBClass__m_GameObject_Hitbox _m_GameObject_Hitbox={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_GameObject_Hitbox_scope,
	sizeof(struct _m_GameObject_Hitbox_obj),
	(void (*)(BBOBJECT))__m_GameObject_Hitbox_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_GameObject_Hitbox_obj,__m_gameobject_hitbox_dimensions) - offsetof(struct _m_GameObject_Hitbox_obj,__m_gameobject_hitbox_center) + sizeof(struct math_vector_SVec2D)
	,0
	,offsetof(struct _m_GameObject_Hitbox_obj,__m_gameobject_hitbox_center)
	,__m_GameObject_Hitbox_getWidth
	,__m_GameObject_Hitbox_getHeight
	,__m_GameObject_Hitbox_getX
	,__m_GameObject_Hitbox_getY
	,__m_GameObject_Hitbox_getLeft
	,__m_GameObject_Hitbox_getRight
	,__m_GameObject_Hitbox_getTop
	,__m_GameObject_Hitbox_getBottom
	,__m_GameObject_Hitbox_collides_THitbox
};

static int _bb_blitzshmup_gameobject_inited = 0;
int _bb_blitzshmup_gameobject(){
	if (!_bb_blitzshmup_gameobject_inited) {
		_bb_blitzshmup_gameobject_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_brl_filesystem_filesystem();
		__bb_brl_platform_platform();
		__bb_brl_maxlua_maxlua();
		__bb_brl_graphics_graphics();
		__bb_brl_d3d7max2d_d3d7max2d();
		__bb_brl_pixmap_pixmap();
		__bb_brl_openalaudio_openalaudio();
		__bb_brl_standardio_standardio();
		__bb_brl_clipboard_clipboard();
		__bb_brl_appstub_appstub();
		__bb_brl_uuid_uuid();
		__bb_brl_jpgloader_jpgloader();
		__bb_brl_volumes_volumes();
		__bb_brl_freetypefont_freetypefont();
		__bb_brl_socket_socket();
		__bb_brl_max2d_max2d();
		__bb_brl_d3d9max2d_d3d9max2d();
		__bb_brl_bytebuffer_bytebuffer();
		__bb_brl_timer_timer();
		__bb_brl_retro_retro();
		__bb_brl_tgaloader_tgaloader();
		__bb_brl_objectlist_objectlist();
		__bb_brl_systemdefault_systemdefault();
		__bb_brl_maxutil_maxutil();
		__bb_brl_pngloader_pngloader();
		__bb_brl_glgraphics_glgraphics();
		__bb_brl_bmploader_bmploader();
		__bb_brl_freeaudioaudio_freeaudioaudio();
		__bb_brl_base64_base64();
		__bb_brl_collections_collections();
		__bb_brl_oggloader_oggloader();
		__bb_brl_glmax2d_glmax2d();
		__bb_brl_wavloader_wavloader();
		__bb_brl_utf8stream_utf8stream();
		__bb_brl_maxunit_maxunit();
		__bb_brl_directsoundaudio_directsoundaudio();
		__bb_brl_threadpool_threadpool();
		__bb_brl_gnet_gnet();
		__bb_brl_timerdefault_timerdefault();
		__bb_brl_eventqueue_eventqueue();
		__bb_brl_dxgraphics_dxgraphics();
		__bb_pub_nx_nx();
		__bb_pub_opengles3_opengles3();
		__bb_pub_win32_win32();
		__bb_pub_nfd_nfd();
		__bb_pub_xmmintrin_xmmintrin();
		__bb_pub_glad_glad();
		__bb_pub_freeprocess_freeprocess();
		__bb_pub_vulkan_vulkan();
		__bb_pub_opengles_opengles();
		__bb_pub_freejoy_freejoy();
		__bb_math_vector_vector();
		bbObjectRegisterType((BBCLASS)&_m_GameObject_Mover);
		bbObjectRegisterType((BBCLASS)&_m_GameObject_GameObject);
		bbObjectRegisterType((BBCLASS)&_m_GameObject_Bullet);
		bbObjectRegisterType((BBCLASS)&_m_GameObject_LinearMover);
		bbObjectRegisterType((BBCLASS)&_m_GameObject_WayPointMover);
		bbObjectRegisterType((BBCLASS)&_m_GameObject_Hitbox);
		return 0;
	}
	return 0;
}