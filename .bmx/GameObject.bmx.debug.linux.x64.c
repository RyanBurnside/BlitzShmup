#include "GameObject.bmx.debug.linux.x64.h"
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
struct BBDebugScope_4{int kind; const char *name; BBDebugDecl decls[5]; };
struct BBDebugScope_7{int kind; const char *name; BBDebugDecl decls[8]; };
void __m_GameObject_Mover_New(struct _m_GameObject_Mover_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_GameObject_Mover;
	((struct _m_GameObject_Mover_obj*)bbNullObjectTest((BBObject*)o))->__m_gameobject_mover_position = math_vector_SVec2F_New_ObjectNew();
	((struct _m_GameObject_Mover_obj*)bbNullObjectTest((BBObject*)o))->__m_gameobject_mover_direction = math_vector_SVec2F_New_ObjectNew();
}
struct math_vector_SVec2F __m_GameObject_Mover_move(struct _m_GameObject_Mover_obj* o){
	brl_blitz_NullMethodError();
	struct math_vector_SVec2F bbt_=((struct math_vector_SVec2F){0,0});
	return bbt_;
}
struct BBDebugScope_3 _m_GameObject_Mover_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"Mover",
	{
		{
			BBDEBUGDECL_FIELD,
			"position",
			"@SVec2F",
			.field_offset=offsetof(struct _m_GameObject_Mover_obj,__m_gameobject_mover_position)
		},
		{
			BBDEBUGDECL_FIELD,
			"direction",
			"@SVec2F",
			.field_offset=offsetof(struct _m_GameObject_Mover_obj,__m_gameobject_mover_direction)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.func_ptr=(BBFuncPtr)&__m_GameObject_Mover_New
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
	offsetof(struct _m_GameObject_Mover_obj,__m_gameobject_mover_direction) - offsetof(struct _m_GameObject_Mover_obj,__m_gameobject_mover_position) + sizeof(struct math_vector_SVec2F)
	,0
	,offsetof(struct _m_GameObject_Mover_obj,__m_gameobject_mover_position)
	,__m_GameObject_Mover_move
};

void __m_GameObject_LinearMover_New_TSVec2FTSVec2F(struct _m_GameObject_LinearMover_obj* o,struct math_vector_SVec2F bbt_position,struct math_vector_SVec2F bbt_direction) {
	__m_GameObject_Mover_New((struct _m_GameObject_Mover_obj*)o);
	o->clas = &_m_GameObject_LinearMover;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"New",
		{
			{
				BBDEBUGDECL_LOCAL,
				"position",
				"@SVec2F",
				.var_address=&bbt_position
			},
			{
				BBDEBUGDECL_LOCAL,
				"direction",
				"@SVec2F",
				.var_address=&bbt_direction
			},
			{
				BBDEBUGDECL_END
			}
		}
	};
	bbOnDebugEnterScope((BBDebugScope *)&__scope);
	struct BBDebugStm __stmt_0 = {0xaa1a2a2ad933a5a1, 18, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_GameObject_Mover_obj*)bbNullObjectTest((BBObject*)o))->__m_gameobject_mover_position =bbt_position;
	struct BBDebugStm __stmt_1 = {0xaa1a2a2ad933a5a1, 19, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_GameObject_Mover_obj*)bbNullObjectTest((BBObject*)o))->__m_gameobject_mover_direction =bbt_direction;
	bbOnDebugLeaveScope();
}
struct _m_GameObject_LinearMover_obj* __m_GameObject_LinearMover_New_TSVec2FTSVec2F_ObjectNew(BBClass * clas,struct math_vector_SVec2F bbt_position,struct math_vector_SVec2F bbt_direction) {
	struct _m_GameObject_LinearMover_obj* o = (struct _m_GameObject_LinearMover_obj*)bbObjectAtomicNewNC(clas);
	__m_GameObject_LinearMover_New_TSVec2FTSVec2F(o, bbt_position, bbt_direction);
	return o;
}
void __m_GameObject_LinearMover_New(struct _m_GameObject_LinearMover_obj* o) {
	__m_GameObject_Mover_New((struct _m_GameObject_Mover_obj*)o);
	o->clas = &_m_GameObject_LinearMover;
}
struct math_vector_SVec2F __m_GameObject_LinearMover_move(struct _m_GameObject_LinearMover_obj* o){
	((struct _m_GameObject_LinearMover_obj*)bbNullObjectTest((BBObject*)o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"move",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":LinearMover",
				.var_address=&o
			},
			{
				BBDEBUGDECL_END
			}
		}
	};
	bbOnDebugEnterScope((BBDebugScope *)&__scope);
	struct BBDebugStm __stmt_0 = {0xaa1a2a2ad933a5a1, 14, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_GameObject_Mover_obj*)bbNullObjectTest((BBObject*)o))->__m_gameobject_mover_position =_math_vector_SVec2F__add_TSVec2F_TSVec2F((struct math_vector_SVec2F*)&((struct _m_GameObject_Mover_obj*)bbNullObjectTest((BBObject*)o))->__m_gameobject_mover_position ,((struct _m_GameObject_Mover_obj*)bbNullObjectTest((BBObject*)o))->__m_gameobject_mover_direction );
	struct BBDebugStm __stmt_1 = {0xaa1a2a2ad933a5a1, 15, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbOnDebugLeaveScope();
	return ((struct _m_GameObject_Mover_obj*)bbNullObjectTest((BBObject*)o))->__m_gameobject_mover_position ;
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
			"()@SVec2F",
			.func_ptr=(BBFuncPtr)&__m_GameObject_LinearMover_move
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"New",
			"(@SVec2F,@SVec2F):LinearMover",
			.func_ptr=(BBFuncPtr)&__m_GameObject_LinearMover_New_TSVec2FTSVec2F
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
};

void __m_GameObject_WayPointMover_New(struct _m_GameObject_WayPointMover_obj* o) {
	__m_GameObject_Mover_New((struct _m_GameObject_Mover_obj*)o);
	o->clas = &_m_GameObject_WayPointMover;
	((struct _m_GameObject_WayPointMover_obj*)bbNullObjectTest((BBObject*)o))->__m_gameobject_waypointmover_waypoints = bbArrayNew1DStruct("@SVec2F", 1, sizeof(struct math_vector_SVec2F), _math_vector_SVec2F_New);
	((struct _m_GameObject_WayPointMover_obj*)bbNullObjectTest((BBObject*)o))->__m_gameobject_waypointmover_toleranceradius = 10.0000000f;
	((struct _m_GameObject_WayPointMover_obj*)bbNullObjectTest((BBObject*)o))->__m_gameobject_waypointmover_turningangle = 22.5000000f;
	((struct _m_GameObject_WayPointMover_obj*)bbNullObjectTest((BBObject*)o))->__m_gameobject_waypointmover_nextwaypoint = 0;
	((struct _m_GameObject_WayPointMover_obj*)bbNullObjectTest((BBObject*)o))->__m_gameobject_waypointmover_returnstart = 0;
}
struct math_vector_SVec2F __m_GameObject_WayPointMover_move(struct _m_GameObject_WayPointMover_obj* o){
	((struct _m_GameObject_WayPointMover_obj*)bbNullObjectTest((BBObject*)o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"move",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":WayPointMover",
				.var_address=&o
			},
			{
				BBDEBUGDECL_END
			}
		}
	};
	bbOnDebugEnterScope((BBDebugScope *)&__scope);
	struct BBDebugStm __stmt_0 = {0xaa1a2a2ad933a5a1, 36, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if((((struct _m_GameObject_WayPointMover_obj*)bbNullObjectTest((BBObject*)o))->__m_gameobject_waypointmover_waypoints ->scales[0])<1){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_END
				}
			}
		};
		bbOnDebugEnterScope((BBDebugScope *)&__scope);
		struct BBDebugStm __stmt_0 = {0xaa1a2a2ad933a5a1, 37, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return ((struct _m_GameObject_Mover_obj*)bbNullObjectTest((BBObject*)o))->__m_gameobject_mover_position ;
	}
	struct BBDebugStm __stmt_1 = {0xaa1a2a2ad933a5a1, 42, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbOnDebugLeaveScope();
	return ((struct _m_GameObject_Mover_obj*)bbNullObjectTest((BBObject*)o))->__m_gameobject_mover_position ;
}
struct BBDebugScope_7 _m_GameObject_WayPointMover_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"WayPointMover",
	{
		{
			BBDEBUGDECL_FIELD,
			"wayPoints",
			"[]@SVec2F",
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
			"()@SVec2F",
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
};

void __m_GameObject_GameObject_New(struct _m_GameObject_GameObject_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_GameObject_GameObject;
	((struct _m_GameObject_GameObject_obj*)bbNullObjectTest((BBObject*)o))->__m_gameobject_gameobject_mover = (struct _m_GameObject_Mover_obj*)((struct _m_GameObject_Mover_obj*)&bbNullObject);
	((struct _m_GameObject_GameObject_obj*)bbNullObjectTest((BBObject*)o))->__m_gameobject_gameobject_dead = 0;
}
struct math_vector_SVec2F __m_GameObject_GameObject_move(struct _m_GameObject_GameObject_obj* o){
	((struct _m_GameObject_GameObject_obj*)bbNullObjectTest((BBObject*)o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"move",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":GameObject",
				.var_address=&o
			},
			{
				BBDEBUGDECL_END
			}
		}
	};
	bbOnDebugEnterScope((BBDebugScope *)&__scope);
	struct BBDebugStm __stmt_0 = {0xaa1a2a2ad933a5a1, 53, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return ((struct _m_GameObject_Mover_obj*)bbNullObjectTest((BBObject*)((struct _m_GameObject_GameObject_obj*)bbNullObjectTest((BBObject*)o))->__m_gameobject_gameobject_mover ))->clas->m_move((struct _m_GameObject_Mover_obj*)((struct _m_GameObject_GameObject_obj*)bbNullObjectTest((BBObject*)o))->__m_gameobject_gameobject_mover );
}
struct BBDebugScope_4 _m_GameObject_GameObject_scope ={
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
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.func_ptr=(BBFuncPtr)&__m_GameObject_GameObject_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"move",
			"()@SVec2F",
			.func_ptr=(BBFuncPtr)&__m_GameObject_GameObject_move
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
	offsetof(struct _m_GameObject_GameObject_obj,__m_gameobject_gameobject_dead) - offsetof(struct _m_GameObject_GameObject_obj,__m_gameobject_gameobject_mover) + sizeof(BBINT)
	,0
	,offsetof(struct _m_GameObject_GameObject_obj,__m_gameobject_gameobject_mover)
	,__m_GameObject_GameObject_move
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
		__bb_sdl_sdlrendermax2d_sdlrendermax2d();
		bbObjectRegisterType((BBCLASS)&_m_GameObject_Mover);
		bbObjectRegisterType((BBCLASS)&_m_GameObject_LinearMover);
		bbObjectRegisterType((BBCLASS)&_m_GameObject_WayPointMover);
		bbObjectRegisterType((BBCLASS)&_m_GameObject_GameObject);
		bbRegisterSource(0xaa1a2a2ad933a5a1, "/home/ryan/Desktop/BlitzShmup/GameObject.bmx");
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"GameObject",
			{
				{
					BBDEBUGDECL_END
				}
			}
		};
		bbOnDebugEnterScope((BBDebugScope *)&__scope);
		bbOnDebugLeaveScope();
		return 0;
	}
	return 0;
}