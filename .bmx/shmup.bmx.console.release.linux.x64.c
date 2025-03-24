#include "shmup.bmx.console.release.linux.x64.h"
struct BBString_5{BBClass_String* clas;BBULONG hash;int length;BBChar buf[5];};
struct BBString_46{BBClass_String* clas;BBULONG hash;int length;BBChar buf[46];};
struct BBString_10{BBClass_String* clas;BBULONG hash;int length;BBChar buf[10];};
struct BBString_12{BBClass_String* clas;BBULONG hash;int length;BBChar buf[12];};
static struct BBString_5 _s13={
	&bbStringClass,
	0x884ed6b72f90cde4,
	5,
	{49,50,54,48,48}
};
static struct BBString_46 _s14={
	&bbStringClass,
	0x5932e4f13edc1821,
	46,
	{84,104,105,115,32,105,115,32,97,32,49,48,50,52,120,55,54
	,56,32,119,105,110,100,111,119,32,45,32,110,97,116,105,118
	,101,32,114,101,115,111,108,117,116,105,111,110,46}
};
static struct BBString_10 _s11={
	&bbStringClass,
	0xccdd0174ceeea3c2,
	10,
	{112,108,97,121,101,114,46,112,110,103}
};
static struct BBString_12 _s12={
	&bbStringClass,
	0xdbb9de8b52354bda,
	12,
	{115,104,111,116,84,105,110,121,46,112,110,103}
};
BBINT _m_shmup_SCREEN_WIDTH=0;
BBINT _m_shmup_SCREEN_HEIGHT=0;
BBINT _m_shmup_scaleX=0;
BBINT _m_shmup_scaleY=0;
BBINT _m_shmup_Scale=0;
BBINT _m_shmup_offsetX=0;
BBINT _m_shmup_offsetY=0;
struct brl_max2d_renderimage_TRenderImage_obj* _m_shmup_framebuffer=(struct brl_max2d_renderimage_TRenderImage_obj*)((struct brl_max2d_renderimage_TRenderImage_obj*)&bbNullObject);
BBINT _m_shmup_DrawRectOutline(BBINT bbt_x,BBINT bbt_y,BBINT bbt_width,BBINT bbt_height){
	BBINT bbt_rightEdge=((bbt_x+bbt_width)-1);
	BBINT bbt_bottomEdge=((bbt_y+bbt_height)-1);
	brl_max2d_DrawLine(((BBFLOAT)bbt_x),((BBFLOAT)bbt_y),((BBFLOAT)bbt_rightEdge),((BBFLOAT)bbt_y),0);
	brl_max2d_DrawLine(((BBFLOAT)bbt_x),((BBFLOAT)bbt_y),((BBFLOAT)bbt_x),((BBFLOAT)bbt_bottomEdge),0);
	brl_max2d_DrawLine(((BBFLOAT)bbt_x),((BBFLOAT)bbt_bottomEdge),((BBFLOAT)bbt_rightEdge),((BBFLOAT)bbt_bottomEdge),0);
	brl_max2d_DrawLine(((BBFLOAT)bbt_rightEdge),((BBFLOAT)bbt_y),((BBFLOAT)bbt_rightEdge),((BBFLOAT)bbt_bottomEdge),0);
	return 0;
}
void _m_shmup_main_updateBullets(struct brl_objectlist_TObjectList_obj* bbt_bullets,struct _m_GameObject_Hitbox_obj* bbt_screen);
void _m_shmup_main_drawBullets(struct brl_objectlist_TObjectList_obj* bbt_bullets,struct brl_max2d_image_TImage_obj* bbt_bulletImage);
void _m_shmup_main_updateBullets(struct brl_objectlist_TObjectList_obj* bbt_bullets,struct _m_GameObject_Hitbox_obj* bbt_screen){
	struct brl_objectlist_TObjectListEnumerator_obj* bbt_=(struct brl_objectlist_TObjectListEnumerator_obj*)(bbt_bullets)->clas->m_ObjectEnumerator((struct brl_objectlist_TObjectList_obj*)bbt_bullets);
	while((bbt_)->clas->m_HasNext((struct brl_objectlist_TObjectListEnumerator_obj*)bbt_)!=0){
		struct _m_GameObject_Bullet_obj* bbt_b=(struct _m_GameObject_Bullet_obj*)((struct _m_GameObject_Bullet_obj*)bbObjectDowncast((BBOBJECT)(bbt_)->clas->m_NextObject((struct brl_objectlist_TObjectListEnumerator_obj*)bbt_),(BBClass*)&_m_GameObject_Bullet));
		if(((BBOBJECT)bbt_b)==&bbNullObject){
			continue;
		}
		(bbt_b)->clas->m_move((struct _m_GameObject_GameObject_obj*)bbt_b);
		struct _m_GameObject_Hitbox_obj* bbt_2;
		if(!((((struct _m_GameObject_Hitbox_obj*)(bbt_2 = bbt_b->__m_gameobject_gameobject_hitbox ))->clas)->m_collides_THitbox((struct _m_GameObject_Hitbox_obj*)bbt_2,(struct _m_GameObject_Hitbox_obj*)bbt_screen)!=0)){
			bbt_b->__m_gameobject_gameobject_dead =1;
			(bbt_bullets)->clas->m_Remove_TObjectii((struct brl_objectlist_TObjectList_obj*)bbt_bullets,(BBOBJECT)bbt_b,0,0);
		}
	}
	(bbt_bullets)->clas->m_Compact((struct brl_objectlist_TObjectList_obj*)bbt_bullets);
}
void _m_shmup_main_drawBullets(struct brl_objectlist_TObjectList_obj* bbt_bullets,struct brl_max2d_image_TImage_obj* bbt_bulletImage){
	struct brl_objectlist_TObjectListEnumerator_obj* bbt_=(struct brl_objectlist_TObjectListEnumerator_obj*)(bbt_bullets)->clas->m_ObjectEnumerator((struct brl_objectlist_TObjectList_obj*)bbt_bullets);
	while((bbt_)->clas->m_HasNext((struct brl_objectlist_TObjectListEnumerator_obj*)bbt_)!=0){
		struct _m_GameObject_Bullet_obj* bbt_b=(struct _m_GameObject_Bullet_obj*)((struct _m_GameObject_Bullet_obj*)bbObjectDowncast((BBOBJECT)(bbt_)->clas->m_NextObject((struct brl_objectlist_TObjectListEnumerator_obj*)bbt_),(BBClass*)&_m_GameObject_Bullet));
		if(((BBOBJECT)bbt_b)==&bbNullObject){
			continue;
		}
		brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)bbt_bulletImage,(bbt_b)->clas->m_getX((struct _m_GameObject_GameObject_obj*)bbt_b),(bbt_b)->clas->m_getY((struct _m_GameObject_GameObject_obj*)bbt_b),0);
	}
}
BBINT _m_shmup_main(){
	struct brl_max2d_image_TImage_obj* bbt_ship=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)((BBString*)&_s11),0);
	brl_max2d_MidHandleImage((struct brl_max2d_image_TImage_obj*)bbt_ship);
	struct brl_max2d_image_TImage_obj* bbt_bulletImage=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)((BBString*)&_s12),0);
	brl_max2d_MidHandleImage((struct brl_max2d_image_TImage_obj*)bbt_bulletImage);
	struct _m_GameObject_Hitbox_obj* bbt_screen=(struct _m_GameObject_Hitbox_obj*)__m_GameObject_Hitbox_New_ffff_ObjectNew((struct _m_GameObject_Hitbox_obj*)&_m_GameObject_Hitbox,0.00000000f,0.00000000f,240.000000f,320.000000f);
	struct brl_objectlist_TObjectList_obj* bbt_bullets=(struct brl_objectlist_TObjectList_obj*)(struct brl_objectlist_TObjectList_obj*)bbObjectNew((BBClass *)&brl_objectlist_TObjectList);
	while(!(brl_polledinput_KeyHit(27)!=0)){
		{
			BBINT bbt_i=0;
			for(;(bbt_i<=4);bbt_i=(bbt_i+1)){
				struct _m_GameObject_Bullet_obj* bbt_temp=(struct _m_GameObject_Bullet_obj*)__m_GameObject_Bullet_New_TSVec2Dfff_ObjectNew((struct _m_GameObject_Bullet_obj*)&_m_GameObject_Bullet,math_vector_SVec2D_New_dd_ObjectNew(120.00000000000000,160.00000000000000),((BBFLOAT)random_core_Rand(0,360)),6.0f,8.00000000f);
				(bbt_bullets)->clas->m_AddLast_TObject((struct brl_objectlist_TObjectList_obj*)bbt_bullets,(BBOBJECT)bbt_temp);
			}
		}
		_m_shmup_main_updateBullets((struct brl_objectlist_TObjectList_obj*)bbt_bullets,(struct _m_GameObject_Hitbox_obj*)bbt_screen);
		brl_max2d_SetRenderImage((struct brl_max2d_renderimage_TRenderImage_obj*)_m_shmup_framebuffer);
		brl_max2d_Cls();
		brl_max2d_DrawText(((BBString*)&_s13),4.00000000f,4.00000000f);
		brl_max2d_DrawText(bbStringFromInt((bbt_bullets)->clas->m_Count((struct brl_objectlist_TObjectList_obj*)bbt_bullets)),16.0000000f,16.0000000f);
		_m_shmup_DrawRectOutline(1,1,240,320);
		_m_shmup_main_drawBullets((struct brl_objectlist_TObjectList_obj*)bbt_bullets,(struct brl_max2d_image_TImage_obj*)bbt_bulletImage);
		brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)bbt_ship,120.000000f,160.000000f,0);
		brl_max2d_SetAlpha(1.0f);
		brl_graphics_Flip(-1);
		brl_max2d_SetRenderImage((struct brl_max2d_renderimage_TRenderImage_obj*)&bbNullObject);
		brl_max2d_Cls();
		brl_max2d_SetBlend(3);
		brl_max2d_SetColor(255,255,255);
		brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)bbt_bulletImage,120.000000f,160.000000f,0);
		brl_max2d_DrawImageRect((struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj*)bbObjectDowncast((BBOBJECT)_m_shmup_framebuffer,(BBClass*)&brl_max2d_image_TImage)),((BBFLOAT)_m_shmup_offsetX),((BBFLOAT)_m_shmup_offsetY),((BBFLOAT)(240*_m_shmup_Scale)),((BBFLOAT)(320*_m_shmup_Scale)),0);
		brl_max2d_DrawText(((BBString*)&_s14),32.0000000f,32.0000000f);
		brl_graphics_Flip(-1);
	}
	return 0;
}
void _m_shmup_rand_color(){
	brl_max2d_SetColor(random_core_Rand(0,255),random_core_Rand(0,255),random_core_Rand(0,255));
}
static int _bb_main_inited = 0;
int _bb_main(){
	if (!_bb_main_inited) {
		_bb_main_inited = 1;
		GC_add_roots(&_m_shmup_SCREEN_WIDTH, &_m_shmup_framebuffer + 1);
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
		_bb_blitzshmup_gameobject();
		brl_graphics_Graphics(1024,768,0,60,0LL,-1,-1);
		_m_shmup_SCREEN_WIDTH=brl_graphics_GraphicsWidth();
		_m_shmup_SCREEN_HEIGHT=brl_graphics_GraphicsHeight();
		_m_shmup_scaleX=(_m_shmup_SCREEN_WIDTH/240);
		_m_shmup_scaleY=(_m_shmup_SCREEN_HEIGHT/320);
		_m_shmup_Scale=brl_blitz_Min(_m_shmup_scaleX,_m_shmup_scaleY);
		_m_shmup_offsetX=((_m_shmup_SCREEN_WIDTH-(240*_m_shmup_Scale))/2);
		_m_shmup_offsetY=((_m_shmup_SCREEN_HEIGHT-(320*_m_shmup_Scale))/2);
		_m_shmup_framebuffer=(struct brl_max2d_renderimage_TRenderImage_obj*)brl_max2d_CreateRenderImage(240,320,0,(struct brl_max2d_TMax2DGraphics_obj*)&bbNullObject);
		_m_shmup_main();
		return 0;
	}
	return 0;
}