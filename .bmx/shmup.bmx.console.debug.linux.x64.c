#include "shmup.bmx.console.debug.linux.x64.h"
struct BBString_5{BBClass_String* clas;BBULONG hash;int length;BBChar buf[5];};
struct BBString_46{BBClass_String* clas;BBULONG hash;int length;BBChar buf[46];};
struct BBString_10{BBClass_String* clas;BBULONG hash;int length;BBChar buf[10];};
struct BBString_11{BBClass_String* clas;BBULONG hash;int length;BBChar buf[11];};
struct BBString_15{BBClass_String* clas;BBULONG hash;int length;BBChar buf[15];};
struct BBString_17{BBClass_String* clas;BBULONG hash;int length;BBChar buf[17];};
struct BBString_18{BBClass_String* clas;BBULONG hash;int length;BBChar buf[18];};
struct BBString_14{BBClass_String* clas;BBULONG hash;int length;BBChar buf[14];};
static struct BBString_5 _s7={
	&bbStringClass,
	0x884ed6b72f90cde4,
	5,
	{49,50,54,48,48}
};
static struct BBString_46 _s8={
	&bbStringClass,
	0x5932e4f13edc1821,
	46,
	{84,104,105,115,32,105,115,32,97,32,49,48,50,52,120,55,54
	,56,32,119,105,110,100,111,119,32,45,32,110,97,116,105,118
	,101,32,114,101,115,111,108,117,116,105,111,110,46}
};
static struct BBString_10 _s1={
	&bbStringClass,
	0xccdd0174ceeea3c2,
	10,
	{112,108,97,121,101,114,46,112,110,103}
};
static struct BBString_11 _s2={
	&bbStringClass,
	0x55f2da3f751a7013,
	11,
	{119,97,114,110,105,110,103,46,112,110,103}
};
static struct BBString_15 _s3={
	&bbStringClass,
	0xa8e9edb8f8a24348,
	15,
	{119,97,114,110,105,110,103,66,97,99,107,46,112,110,103}
};
static struct BBString_17 _s5={
	&bbStringClass,
	0xe6338d693256ad1d,
	17,
	{119,97,114,110,105,110,103,66,111,116,116,111,109,46,112,110,103
}
};
static struct BBString_18 _s6={
	&bbStringClass,
	0x9be2fbf497c5b06e,
	18,
	{119,97,114,110,105,110,103,84,101,120,116,117,114,101,46,112,110
	,103}
};
static struct BBString_14 _s4={
	&bbStringClass,
	0x792eec8a5a31f8f8,
	14,
	{119,97,114,110,105,110,103,84,111,112,46,112,110,103}
};
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_13{int kind; const char *name; BBDebugDecl decls[14]; };
struct BBDebugScope_6{int kind; const char *name; BBDebugDecl decls[7]; };
struct BBDebugScope_8{int kind; const char *name; BBDebugDecl decls[9]; };
BBINT _m_shmup_SCREEN_WIDTH=0;
BBINT _m_shmup_SCREEN_HEIGHT=0;
BBINT _m_shmup_scaleX=0;
BBINT _m_shmup_scaleY=0;
BBINT _m_shmup_Scale=0;
BBINT _m_shmup_offsetX=0;
BBINT _m_shmup_offsetY=0;
struct brl_max2d_renderimage_TRenderImage_obj* _m_shmup_framebuffer=(struct brl_max2d_renderimage_TRenderImage_obj*)((struct brl_max2d_renderimage_TRenderImage_obj*)&bbNullObject);
BBINT _m_shmup_DrawRectOutline(BBINT bbt_x,BBINT bbt_y,BBINT bbt_width,BBINT bbt_height){
	BBINT bbt_rightEdge=0;
	BBINT bbt_bottomEdge=0;
	struct BBDebugScope_6 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"DrawRectOutline",
		{
			{
				BBDEBUGDECL_LOCAL,
				"x",
				"i",
				.var_address=&bbt_x
			},
			{
				BBDEBUGDECL_LOCAL,
				"y",
				"i",
				.var_address=&bbt_y
			},
			{
				BBDEBUGDECL_LOCAL,
				"width",
				"i",
				.var_address=&bbt_width
			},
			{
				BBDEBUGDECL_LOCAL,
				"height",
				"i",
				.var_address=&bbt_height
			},
			{
				BBDEBUGDECL_LOCAL,
				"rightEdge",
				"i",
				.var_address=&bbt_rightEdge
			},
			{
				BBDEBUGDECL_LOCAL,
				"bottomEdge",
				"i",
				.var_address=&bbt_bottomEdge
			},
			{
				BBDEBUGDECL_END
			}
		}
	};
	bbOnDebugEnterScope((BBDebugScope *)&__scope);
	struct BBDebugStm __stmt_0 = {0xc65f7c85bb208625, 32, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_rightEdge=((bbt_x+bbt_width)-1);
	struct BBDebugStm __stmt_1 = {0xc65f7c85bb208625, 33, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_bottomEdge=((bbt_y+bbt_height)-1);
	struct BBDebugStm __stmt_2 = {0xc65f7c85bb208625, 35, 0};
	bbOnDebugEnterStm(&__stmt_2);
	brl_max2d_DrawLine(((BBFLOAT)bbt_x),((BBFLOAT)bbt_y),((BBFLOAT)bbt_rightEdge),((BBFLOAT)bbt_y),0);
	struct BBDebugStm __stmt_3 = {0xc65f7c85bb208625, 36, 0};
	bbOnDebugEnterStm(&__stmt_3);
	brl_max2d_DrawLine(((BBFLOAT)bbt_x),((BBFLOAT)bbt_y),((BBFLOAT)bbt_x),((BBFLOAT)bbt_bottomEdge),0);
	struct BBDebugStm __stmt_4 = {0xc65f7c85bb208625, 37, 0};
	bbOnDebugEnterStm(&__stmt_4);
	brl_max2d_DrawLine(((BBFLOAT)bbt_x),((BBFLOAT)bbt_bottomEdge),((BBFLOAT)bbt_rightEdge),((BBFLOAT)bbt_bottomEdge),0);
	struct BBDebugStm __stmt_5 = {0xc65f7c85bb208625, 38, 0};
	bbOnDebugEnterStm(&__stmt_5);
	brl_max2d_DrawLine(((BBFLOAT)bbt_rightEdge),((BBFLOAT)bbt_y),((BBFLOAT)bbt_rightEdge),((BBFLOAT)bbt_bottomEdge),0);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _m_shmup_main(){
	struct brl_max2d_image_TImage_obj* bbt_ship=(struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj*)&bbNullObject);
	struct brl_max2d_image_TImage_obj* bbt_base=(struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj*)&bbNullObject);
	struct brl_max2d_image_TImage_obj* bbt_warning=(struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj*)&bbNullObject);
	struct brl_max2d_image_TImage_obj* bbt_warningTop=(struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj*)&bbNullObject);
	struct brl_max2d_image_TImage_obj* bbt_warningBottom=(struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj*)&bbNullObject);
	struct brl_max2d_image_TImage_obj* bbt_warningTexture=(struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj*)&bbNullObject);
	BBLONG bbt_stepper=0;
	BBDOUBLE bbt_s=0;
	BBINT bbt_imageX=0;
	BBINT bbt_imageY=0;
	struct math_vector_SVec2F bbt_loc=((struct math_vector_SVec2F){0,0});
	struct math_vector_SVec2F bbt_dir=((struct math_vector_SVec2F){0,0});
	struct _m_GameObject_LinearMover_obj* bbt_m=(struct _m_GameObject_LinearMover_obj*)((struct _m_GameObject_LinearMover_obj*)&bbNullObject);
	struct BBDebugScope_13 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"main",
		{
			{
				BBDEBUGDECL_LOCAL,
				"ship",
				":TImage",
				.var_address=&bbt_ship
			},
			{
				BBDEBUGDECL_LOCAL,
				"base",
				":TImage",
				.var_address=&bbt_base
			},
			{
				BBDEBUGDECL_LOCAL,
				"warning",
				":TImage",
				.var_address=&bbt_warning
			},
			{
				BBDEBUGDECL_LOCAL,
				"warningTop",
				":TImage",
				.var_address=&bbt_warningTop
			},
			{
				BBDEBUGDECL_LOCAL,
				"warningBottom",
				":TImage",
				.var_address=&bbt_warningBottom
			},
			{
				BBDEBUGDECL_LOCAL,
				"warningTexture",
				":TImage",
				.var_address=&bbt_warningTexture
			},
			{
				BBDEBUGDECL_LOCAL,
				"stepper",
				"l",
				.var_address=&bbt_stepper
			},
			{
				BBDEBUGDECL_LOCAL,
				"s",
				"d",
				.var_address=&bbt_s
			},
			{
				BBDEBUGDECL_LOCAL,
				"imageX",
				"i",
				.var_address=&bbt_imageX
			},
			{
				BBDEBUGDECL_LOCAL,
				"imageY",
				"i",
				.var_address=&bbt_imageY
			},
			{
				BBDEBUGDECL_LOCAL,
				"loc",
				"@SVec2F",
				.var_address=&bbt_loc
			},
			{
				BBDEBUGDECL_LOCAL,
				"dir",
				"@SVec2F",
				.var_address=&bbt_dir
			},
			{
				BBDEBUGDECL_LOCAL,
				"m",
				":LinearMover",
				.var_address=&bbt_m
			},
			{
				BBDEBUGDECL_END
			}
		}
	};
	bbOnDebugEnterScope((BBDebugScope *)&__scope);
	struct BBDebugStm __stmt_0 = {0xc65f7c85bb208625, 46, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_ship=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)((BBString*)&_s1),0);
	struct BBDebugStm __stmt_1 = {0xc65f7c85bb208625, 47, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_base=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)((BBString*)&_s2),0);
	struct BBDebugStm __stmt_2 = {0xc65f7c85bb208625, 48, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_warning=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)((BBString*)&_s3),0);
	struct BBDebugStm __stmt_3 = {0xc65f7c85bb208625, 49, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_warningTop=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)((BBString*)&_s4),0);
	struct BBDebugStm __stmt_4 = {0xc65f7c85bb208625, 50, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_warningBottom=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)((BBString*)&_s5),0);
	struct BBDebugStm __stmt_5 = {0xc65f7c85bb208625, 51, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbt_warningTexture=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)((BBString*)&_s6),0);
	struct BBDebugStm __stmt_6 = {0xc65f7c85bb208625, 52, 0};
	bbOnDebugEnterStm(&__stmt_6);
	bbt_stepper=0LL;
	struct BBDebugStm __stmt_7 = {0xc65f7c85bb208625, 53, 0};
	bbOnDebugEnterStm(&__stmt_7);
	bbt_s=0.0;
	struct BBDebugStm __stmt_8 = {0xc65f7c85bb208625, 54, 0};
	bbOnDebugEnterStm(&__stmt_8);
	bbt_imageX=0;
	struct BBDebugStm __stmt_9 = {0xc65f7c85bb208625, 55, 0};
	bbOnDebugEnterStm(&__stmt_9);
	bbt_imageY=40;
	struct BBDebugStm __stmt_10 = {0xc65f7c85bb208625, 57, 0};
	bbOnDebugEnterStm(&__stmt_10);
	bbt_loc=math_vector_SVec2F_New_ff_ObjectNew(160.000000f,200.000000f);
	struct BBDebugStm __stmt_11 = {0xc65f7c85bb208625, 58, 0};
	bbOnDebugEnterStm(&__stmt_11);
	bbt_dir=math_vector_SVec2F_New_ff_ObjectNew(0.0f,1.0f);
	struct BBDebugStm __stmt_12 = {0xc65f7c85bb208625, 59, 0};
	bbOnDebugEnterStm(&__stmt_12);
	bbt_m=(struct _m_GameObject_LinearMover_obj*)__m_GameObject_LinearMover_New_TSVec2FTSVec2F_ObjectNew((struct _m_GameObject_LinearMover_obj*)&_m_GameObject_LinearMover,bbt_loc,bbt_dir);
	struct BBDebugStm __stmt_13 = {0xc65f7c85bb208625, 60, 0};
	bbOnDebugEnterStm(&__stmt_13);
	while(!(brl_polledinput_KeyHit(27)!=0)){
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
		struct BBDebugStm __stmt_0 = {0xc65f7c85bb208625, 63, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_max2d_SetRenderImage((struct brl_max2d_renderimage_TRenderImage_obj*)_m_shmup_framebuffer);
		struct BBDebugStm __stmt_1 = {0xc65f7c85bb208625, 64, 0};
		bbOnDebugEnterStm(&__stmt_1);
		brl_max2d_Cls();
		struct BBDebugStm __stmt_2 = {0xc65f7c85bb208625, 65, 0};
		bbOnDebugEnterStm(&__stmt_2);
		brl_max2d_DrawText(((BBString*)&_s7),4.00000000f,4.00000000f);
		struct BBDebugStm __stmt_3 = {0xc65f7c85bb208625, 67, 0};
		bbOnDebugEnterStm(&__stmt_3);
		_m_shmup_DrawRectOutline(1,1,240,320);
		struct BBDebugStm __stmt_4 = {0xc65f7c85bb208625, 68, 0};
		bbOnDebugEnterStm(&__stmt_4);
		((struct _m_GameObject_LinearMover_obj*)bbNullObjectTest((BBObject*)bbt_m))->clas->m_move((struct _m_GameObject_LinearMover_obj*)bbt_m);
		struct BBDebugStm __stmt_5 = {0xc65f7c85bb208625, 70, 0};
		bbOnDebugEnterStm(&__stmt_5);
		bbt_s=(bbt_s+4.0000000000000000);
		struct BBDebugStm __stmt_6 = {0xc65f7c85bb208625, 72, 0};
		bbOnDebugEnterStm(&__stmt_6);
		brl_max2d_SetAlpha((BBFLOAT)brl_blitz_Abs3(bbCos((double)bbt_s)));
		struct BBDebugStm __stmt_7 = {0xc65f7c85bb208625, 74, 0};
		bbOnDebugEnterStm(&__stmt_7);
		brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)bbt_warning,0.00000000f,40.0000000f,0);
		struct BBDebugStm __stmt_8 = {0xc65f7c85bb208625, 75, 0};
		bbOnDebugEnterStm(&__stmt_8);
		bbt_stepper=(bbt_stepper+1LL);
		struct BBDebugStm __stmt_9 = {0xc65f7c85bb208625, 77, 0};
		bbOnDebugEnterStm(&__stmt_9);
		{
			BBINT bbt_y=0;
			for(;(bbt_y<=2);bbt_y=(bbt_y+1)){
				struct BBDebugScope_1 __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						{
							BBDEBUGDECL_LOCAL,
							"y",
							"i",
							.var_address=&bbt_y
						},
						{
							BBDEBUGDECL_END
						}
					}
				};
				bbOnDebugEnterScope((BBDebugScope *)&__scope);
				struct BBDebugStm __stmt_0 = {0xc65f7c85bb208625, 78, 0};
				bbOnDebugEnterStm(&__stmt_0);
				{
					BBINT bbt_x=0;
					for(;(bbt_x<=7);bbt_x=(bbt_x+1)){
						struct BBDebugScope_1 __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								{
									BBDEBUGDECL_LOCAL,
									"x",
									"i",
									.var_address=&bbt_x
								},
								{
									BBDEBUGDECL_END
								}
							}
						};
						bbOnDebugEnterScope((BBDebugScope *)&__scope);
						struct BBDebugStm __stmt_0 = {0xc65f7c85bb208625, 82, 0};
						bbOnDebugEnterStm(&__stmt_0);
						brl_max2d_DrawSubImageRect((struct brl_max2d_image_TImage_obj*)bbt_base,((BBFLOAT)(bbt_x*32)),((BBFLOAT)((bbt_imageY+80)+(bbt_y*32))),32.0000000f,32.0000000f,((BBFLOAT)(0LL+(bbt_stepper % 32LL))),((BBFLOAT)(80LL+(bbt_stepper % 32LL))),32.0000000f,32.0000000f,0.00000000f,0.00000000f,0);
						bbOnDebugLeaveScope();
					}
				}
				bbOnDebugLeaveScope();
			}
		}
		struct BBDebugStm __stmt_10 = {0xc65f7c85bb208625, 87, 0};
		bbOnDebugEnterStm(&__stmt_10);
		brl_max2d_SetAlpha(1.0f);
		struct BBDebugStm __stmt_11 = {0xc65f7c85bb208625, 88, 0};
		bbOnDebugEnterStm(&__stmt_11);
		brl_graphics_Flip(-1);
		struct BBDebugStm __stmt_12 = {0xc65f7c85bb208625, 91, 0};
		bbOnDebugEnterStm(&__stmt_12);
		brl_max2d_SetRenderImage((struct brl_max2d_renderimage_TRenderImage_obj*)&bbNullObject);
		struct BBDebugStm __stmt_13 = {0xc65f7c85bb208625, 92, 0};
		bbOnDebugEnterStm(&__stmt_13);
		brl_max2d_Cls();
		struct BBDebugStm __stmt_14 = {0xc65f7c85bb208625, 93, 0};
		bbOnDebugEnterStm(&__stmt_14);
		brl_max2d_SetBlend(3);
		struct BBDebugStm __stmt_15 = {0xc65f7c85bb208625, 94, 0};
		bbOnDebugEnterStm(&__stmt_15);
		brl_max2d_SetColor(255,255,255);
		struct BBDebugStm __stmt_16 = {0xc65f7c85bb208625, 96, 0};
		bbOnDebugEnterStm(&__stmt_16);
		brl_max2d_DrawImageRect((struct brl_max2d_image_TImage_obj*)((struct brl_max2d_image_TImage_obj*)bbObjectDowncast((BBOBJECT)_m_shmup_framebuffer,(BBClass*)&brl_max2d_image_TImage)),((BBFLOAT)_m_shmup_offsetX),((BBFLOAT)_m_shmup_offsetY),((BBFLOAT)(240*_m_shmup_Scale)),((BBFLOAT)(320*_m_shmup_Scale)),0);
		struct BBDebugStm __stmt_17 = {0xc65f7c85bb208625, 97, 0};
		bbOnDebugEnterStm(&__stmt_17);
		brl_max2d_DrawText(((BBString*)&_s8),32.0000000f,32.0000000f);
		struct BBDebugStm __stmt_18 = {0xc65f7c85bb208625, 98, 0};
		bbOnDebugEnterStm(&__stmt_18);
		brl_graphics_Flip(-1);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
void _m_shmup_rand_color(){
	struct BBDebugScope __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"rand_color",
		{
			{
				BBDEBUGDECL_END
			}
		}
	};
	bbOnDebugEnterScope((BBDebugScope *)&__scope);
	struct BBDebugStm __stmt_0 = {0xc65f7c85bb208625, 42, 0};
	bbOnDebugEnterStm(&__stmt_0);
	brl_max2d_SetColor(random_core_Rand(0,255),random_core_Rand(0,255),random_core_Rand(0,255));
	bbOnDebugLeaveScope();
}
static int _bb_main_inited = 0;
int _bb_main(){
	if (!_bb_main_inited) {
		_bb_main_inited = 1;
		GC_add_roots(&_m_shmup_SCREEN_WIDTH, &_m_shmup_framebuffer + 1);
		__bb_brl_blitz_blitz();
		__bb_sdl_sdlrendermax2d_sdlrendermax2d();
		__bb_brl_random_random();
		_bb_blitzshmup_gameobject();
		bbRegisterSource(0xc65f7c85bb208625, "/home/ryan/Desktop/BlitzShmup/shmup.bmx");
		struct BBDebugScope_8 __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"shmup",
			{
				{
					BBDEBUGDECL_GLOBAL,
					"SCREEN_WIDTH",
					"i",
					.var_address=(void*)&_m_shmup_SCREEN_WIDTH
				},
				{
					BBDEBUGDECL_GLOBAL,
					"SCREEN_HEIGHT",
					"i",
					.var_address=(void*)&_m_shmup_SCREEN_HEIGHT
				},
				{
					BBDEBUGDECL_GLOBAL,
					"scaleX",
					"i",
					.var_address=(void*)&_m_shmup_scaleX
				},
				{
					BBDEBUGDECL_GLOBAL,
					"scaleY",
					"i",
					.var_address=(void*)&_m_shmup_scaleY
				},
				{
					BBDEBUGDECL_GLOBAL,
					"Scale",
					"i",
					.var_address=(void*)&_m_shmup_Scale
				},
				{
					BBDEBUGDECL_GLOBAL,
					"offsetX",
					"i",
					.var_address=(void*)&_m_shmup_offsetX
				},
				{
					BBDEBUGDECL_GLOBAL,
					"offsetY",
					"i",
					.var_address=(void*)&_m_shmup_offsetY
				},
				{
					BBDEBUGDECL_GLOBAL,
					"framebuffer",
					":TRenderImage",
					.var_address=(void*)&_m_shmup_framebuffer
				},
				{
					BBDEBUGDECL_END
				}
			}
		};
		bbOnDebugEnterScope((BBDebugScope *)&__scope);
		struct BBDebugStm __stmt_0 = {0xc65f7c85bb208625, 13, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_graphics_Graphics(1024,768,0,60,0LL,-1,-1);
		struct BBDebugStm __stmt_1 = {0xc65f7c85bb208625, 16, 0};
		bbOnDebugEnterStm(&__stmt_1);
		_m_shmup_SCREEN_WIDTH=brl_graphics_GraphicsWidth();
		struct BBDebugStm __stmt_2 = {0xc65f7c85bb208625, 17, 0};
		bbOnDebugEnterStm(&__stmt_2);
		_m_shmup_SCREEN_HEIGHT=brl_graphics_GraphicsHeight();
		struct BBDebugStm __stmt_3 = {0xc65f7c85bb208625, 20, 0};
		bbOnDebugEnterStm(&__stmt_3);
		_m_shmup_scaleX=(_m_shmup_SCREEN_WIDTH/240);
		struct BBDebugStm __stmt_4 = {0xc65f7c85bb208625, 21, 0};
		bbOnDebugEnterStm(&__stmt_4);
		_m_shmup_scaleY=(_m_shmup_SCREEN_HEIGHT/320);
		struct BBDebugStm __stmt_5 = {0xc65f7c85bb208625, 22, 0};
		bbOnDebugEnterStm(&__stmt_5);
		_m_shmup_Scale=brl_blitz_Min(_m_shmup_scaleX,_m_shmup_scaleY);
		struct BBDebugStm __stmt_6 = {0xc65f7c85bb208625, 25, 0};
		bbOnDebugEnterStm(&__stmt_6);
		_m_shmup_offsetX=((_m_shmup_SCREEN_WIDTH-(240*_m_shmup_Scale))/2);
		struct BBDebugStm __stmt_7 = {0xc65f7c85bb208625, 26, 0};
		bbOnDebugEnterStm(&__stmt_7);
		_m_shmup_offsetY=((_m_shmup_SCREEN_HEIGHT-(320*_m_shmup_Scale))/2);
		struct BBDebugStm __stmt_8 = {0xc65f7c85bb208625, 29, 0};
		bbOnDebugEnterStm(&__stmt_8);
		_m_shmup_framebuffer=(struct brl_max2d_renderimage_TRenderImage_obj*)brl_max2d_CreateRenderImage(240,320,0,(struct brl_max2d_TMax2DGraphics_obj*)&bbNullObject);
		struct BBDebugStm __stmt_9 = {0xc65f7c85bb208625, 102, 0};
		bbOnDebugEnterStm(&__stmt_9);
		_m_shmup_main();
		bbOnDebugLeaveScope();
		return 0;
	}
	return 0;
}