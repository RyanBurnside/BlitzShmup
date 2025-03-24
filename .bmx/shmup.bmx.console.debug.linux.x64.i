superstrict
import brl.blitz
import sdl.sdlrendermax2d
import brl.random
import "GameObject.bmx"
VIRTUAL_WIDTH%=240
VIRTUAL_HEIGHT%=320
DrawRectOutline%(x%,y%,width%,height%)="_m_shmup_DrawRectOutline"
main%()="_m_shmup_main"
rand_color()="_m_shmup_rand_color"
SCREEN_WIDTH%&=mem:p("_m_shmup_SCREEN_WIDTH")
SCREEN_HEIGHT%&=mem:p("_m_shmup_SCREEN_HEIGHT")
scaleX%&=mem:p("_m_shmup_scaleX")
scaleY%&=mem:p("_m_shmup_scaleY")
Scale%&=mem:p("_m_shmup_Scale")
offsetX%&=mem:p("_m_shmup_offsetX")
offsetY%&=mem:p("_m_shmup_offsetY")
framebuffer:TRenderImage&=mem:p("_m_shmup_framebuffer")