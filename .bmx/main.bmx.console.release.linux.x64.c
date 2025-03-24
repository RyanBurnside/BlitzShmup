#include "main.bmx.console.release.linux.x64.h"
struct BBString_26{BBClass_String* clas;BBULONG hash;int length;BBChar buf[26];};
struct BBString_24{BBClass_String* clas;BBULONG hash;int length;BBChar buf[24];};
struct BBString_46{BBClass_String* clas;BBULONG hash;int length;BBChar buf[46];};
struct BBString_8{BBClass_String* clas;BBULONG hash;int length;BBChar buf[8];};
static struct BBString_26 _s12={
	&bbStringClass,
	0x64b723cdb88fb245,
	26,
	{77,82,46,32,67,76,79,87,78,39,83,32,80,65,82,84,89
	,32,80,65,78,84,83,33,33,33}
};
static struct BBString_24 _s13={
	&bbStringClass,
	0xbbfb800ba1d900e9,
	24,
	{84,72,73,83,32,73,83,32,65,32,50,52,48,88,51,50,48
	,32,66,85,70,70,69,82}
};
static struct BBString_46 _s14={
	&bbStringClass,
	0x5932e4f13edc1821,
	46,
	{84,104,105,115,32,105,115,32,97,32,49,48,50,52,120,55,54
	,56,32,119,105,110,100,111,119,32,45,32,110,97,116,105,118
	,101,32,114,101,115,111,108,117,116,105,111,110,46}
};
static struct BBString_8 _s11={
	&bbStringClass,
	0xaf846ada6a95589a,
	8,
	{115,104,105,112,46,112,110,103}
};
BBINT _m_main_SCREEN_WIDTH=0;
BBINT _m_main_SCREEN_HEIGHT=0;
BBINT _m_main_scaleX=0;
BBINT _m_main_scaleY=0;
BBINT _m_main_Scale=0;
BBINT _m_main_offsetX=0;
BBINT _m_main_offsetY=0;
struct brl_max2d_renderimage_TRenderImage_obj* _m_main_framebuffer=(struct brl_max2d_renderimage_TRenderImage_obj*)((struct brl_max2d_renderimage_TRenderImage_obj*)&bbNullObject);
BBINT _m_main_DrawRectOutline(BBINT bbt_x,BBINT bbt_y,BBINT bbt_width,BBINT bbt_height){
	BBINT bbt_rightEdge=((bbt_x+bbt_width)-1);
	BBINT bbt_bottomEdge=((bbt_y+bbt_height)-1);
	brl_max2d_DrawLine(((BBFLOAT)bbt_x),((BBFLOAT)bbt_y),((BBFLOAT)bbt_rightEdge),((BBFLOAT)bbt_y),0);
	brl_max2d_DrawLine(((BBFLOAT)bbt_x),((BBFLOAT)bbt_y),((BBFLOAT)bbt_x),((BBFLOAT)bbt_bottomEdge),0);
	brl_max2d_DrawLine(((BBFLOAT)bbt_x),((BBFLOAT)bbt_bottomEdge),((BBFLOAT)bbt_rightEdge),((BBFLOAT)bbt_bottomEdge),0);
	brl_max2d_DrawLine(((BBFLOAT)bbt_rightEdge),((BBFLOAT)bbt_y),((BBFLOAT)bbt_rightEdge),((BBFLOAT)bbt_bottomEdge),0);
	return 0;
}
BBINT _m_main_main(){
	struct brl_max2d_image_TImage_obj* bbt_ship=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)((BBString*)&_s11),0);
	while(!(brl_polledinput_KeyHit(27)!=0)){
		brl_max2d_SetRenderImage((struct brl_max2d_renderimage_TRenderImage_obj*)_m_main_framebuffer);
		brl_max2d_Cls();
		brl_max2d_DrawText(((BBString*)&_s12),16.0000000f,16.0000000f);
		brl_max2d_DrawText(((BBString*)&_s13),16.0000000f,32.0000000f);
		_m_main_DrawRectOutline(1,1,240,320);
		brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)bbt_ship,64.0000000f,256.000000f,0);
		brl_graphics_Flip(-1);
		brl_max2d_SetRenderImage((struct brl_max2d_renderimage_TRenderImage_obj*)&bbNullObject);
		brl_max2d_Cls();
		brl_max2d_DrawImageRect((struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj*)bbObjectDowncast((BBOBJECT)_m_main_framebuffer,(BBClass*)&brl_max2d_image_TImage)),((BBFLOAT)_m_main_offsetX),((BBFLOAT)_m_main_offsetY),((BBFLOAT)(240*_m_main_Scale)),((BBFLOAT)(320*_m_main_Scale)),0);
		brl_max2d_DrawText(((BBString*)&_s14),32.0000000f,32.0000000f);
		brl_graphics_Flip(-1);
	}
	return 0;
}
static int _bb_main_inited = 0;
int _bb_main(){
	if (!_bb_main_inited) {
		_bb_main_inited = 1;
		GC_add_roots(&_m_main_SCREEN_WIDTH, &_m_main_framebuffer + 1);
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
		brl_graphics_Graphics(1024,768,0,60,0LL,-1,-1);
		_m_main_SCREEN_WIDTH=brl_graphics_GraphicsWidth();
		_m_main_SCREEN_HEIGHT=brl_graphics_GraphicsHeight();
		_m_main_scaleX=(_m_main_SCREEN_WIDTH/240);
		_m_main_scaleY=(_m_main_SCREEN_HEIGHT/320);
		_m_main_Scale=brl_blitz_Min(_m_main_scaleX,_m_main_scaleY);
		_m_main_offsetX=((_m_main_SCREEN_WIDTH-(240*_m_main_Scale))/2);
		_m_main_offsetY=((_m_main_SCREEN_HEIGHT-(320*_m_main_Scale))/2);
		_m_main_framebuffer=(struct brl_max2d_renderimage_TRenderImage_obj*)brl_max2d_CreateRenderImage(240,320,0,(struct brl_max2d_TMax2DGraphics_obj*)&bbNullObject);
		_m_main_main();
		return 0;
	}
	return 0;
}