SuperStrict



Import BRL.random
Import "GameObject.bmx"

' Virtual resolution
Const VIRTUAL_WIDTH:Int = 240
Const VIRTUAL_HEIGHT:Int = 320

' Initialize Graphics FIRST
Graphics 1024, 768, 0 ' Example resolution; adjust as needed

' Native resolution
Global SCREEN_WIDTH:Int = GraphicsWidth()
Global SCREEN_HEIGHT:Int = GraphicsHeight()

' Scaling factors (maintain aspect ratio)
Global scaleX:Int = SCREEN_WIDTH / VIRTUAL_WIDTH
Global scaleY:Int = SCREEN_HEIGHT / VIRTUAL_HEIGHT
Global Scale:Int = Min(scaleX, scaleY)

' Centering offset
Global offsetX:Int = (SCREEN_WIDTH - (VIRTUAL_WIDTH * Scale)) / 2
Global offsetY:Int = (SCREEN_HEIGHT - (VIRTUAL_HEIGHT * Scale)) / 2

' Create an off-screen render target AFTER Graphics is initialized
Global framebuffer:TRenderImage = CreateRenderImage(VIRTUAL_WIDTH, VIRTUAL_HEIGHT, 0)

Function DrawRectOutline:Int(x:Int, y:Int, width:Int, height:Int)
    Local rightEdge:Int = x + width - 1
    Local bottomEdge:Int = y + height - 1

    DrawLine x, y, rightEdge, y, 0  ' Top
    DrawLine x, y, x, bottomEdge, 0' Left
    DrawLine x, bottomEdge, rightEdge, bottomEdge, 0 ' Bottom
    DrawLine rightEdge, y, rightEdge, bottomEdge, 0 ' Right
End Function

Function rand_color()
	SetColor Rand(0, 255), Rand(0, 255), Rand(0, 255)
End Function


Function main:Int()
	Local ship:TImage = LoadImage("player.png", 0) ' Very important to set it to 0 so it doesn't blur pixels
	MidHandleImage(ship)
	Local bulletImage:TImage = LoadImage("shotTiny.png", 0)
	MidHandleImage(bulletImage)
	Local screen:Hitbox = New Hitbox(0, 0, VIRTUAL_WIDTH, VIRTUAL_HEIGHT)
	Local bullets:TObjectList = New TObjectList
	
	Function updateBullets(bullets:TObjectList, screen:Hitbox)
		For Local b:bullet = EachIn bullets
			b.move()
			If Not b.hitbox.collides(screen)
				b.dead = True
				bullets.Remove(b, False, False)
			End If
		Next
		bullets.compact() ' delete instances marked for death
	End Function
	
	Function drawBullets(bullets:TObjectList, bulletImage:TImage)
		For Local b:bullet = EachIn bullets
			DrawImage bulletImage, b.getX(), b.getY()
		Next
	End Function
	
	While Not KeyHit(KEY_ESCAPE)
		For Local i:Int = 0 To 4
			Local temp:Bullet = New Bullet(New SVec2d(120, 160), Rand(0, 360), 6.0, 8)
			bullets.Addlast(temp)
		Next
		
		updateBullets(bullets, screen)

		' 1. Render to the virtual resolution framebuffer
		SetRenderImage framebuffer
		Cls
		DrawText "12600", 4, 4
		DrawText bullets.Count(), 16, 16
		DrawRectOutline 1, 1, 240, 320 ' Very strange BlitzMax line bug won't draw top and left 0,0
		drawBullets(bullets, bulletImage)
		DrawImage ship, VIRTUAL_WIDTH * 0.5, VIRTUAL_HEIGHT * 0.5

        SetAlpha 1.0
		Flip
		
		' Reset rendering to screen
		SetRenderImage Null
		Cls
		        
		SetBlend alphablend
		SetColor 255, 255, 255
		
		DrawImage bulletImage, 120, 160
		' 2. Draw the framebuffer scaled to native resolution
		DrawImageRect framebuffer, offsetX, offsetY, VIRTUAL_WIDTH * Scale, VIRTUAL_HEIGHT * Scale
		DrawText "This is a 1024x768 window - native resolution.", 32, 32
		Flip
	Wend
End Function

main()
