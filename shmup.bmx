SuperStrict

Import BRL.random

Import "classes/BPU.bmx"
Import "classes/GameObject.bmx"
Import "classes/Ship.bmx"
Import "classes/Player.bmx"
Import "misc.bmx"

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
    ' something is buggy in how DrawLine is implemented...
    Local rightEdge:Int = x + width - 2
    Local bottomEdge:Int = y + height - 2

    DrawLine x, y, rightEdge, y, 0  ' Top
    DrawLine x, y, x, bottomEdge, 0' Left
    DrawLine x, bottomEdge, rightEdge, bottomEdge, 0 ' Bottom
    DrawLine rightEdge, y, rightEdge, bottomEdge, 0 ' Right
End Function

Function randomColor()
    SetColor Rand(0, 255), Rand(0, 255), Rand(0, 255)
End Function

Function makeSimpleBPU:BPU(bullets:TObjectList, spread:Float, numShots:Float)
    Local ops:BPUOperator[] = [ ..
    New BPUOperator(operatorName.SET_NUMBULLETS, [New OperandValue(numShots)]),
    New BPUOperator(operatorName.SET_BULLETSPEED, [New OperandValue(5)]),
    New BPUOperator(operatorName.SET_SUBANGLE, [New OperandValue(spread)]),
    New BPUOperator(operatorName.FIRE, []),
    New BPUOperator(operatorName.SET_SLEEPTICKS, [New OperandValue(30)]),
    New BPUOperator(operatorName.SET_INSTRUCTIONPTR, [New OperandValue(0)])]
    Local b:BPU = New BPU(ops)
    b.bulletList = bullets
    Return b
End Function

Function makeRandomMover:WayPointMover(wMax:Int = 240, hMax:Int = 320, numPts:Int = 8)
    Local w:WayPointMover = New WayPointMover()
    w.returnStart = True
    Local pts:SVec2D[numPts]
    Local i:Int = 0
    w.wayPoints = pts
    Local border:Int = 32
    For Local s:SVec2D = EachIn w.wayPoints
        pts[i] = New SVec2D(border, border) + ..
    New SVec2D(Rand(wMax - border), Rand(hMax - border))
    i :+ 1
    Next
    w.position = w.waypoints[0]
    Return w
End Function

Function main:Int()
    ' Very important to set it to 0 so it doesn't blur pixels
    Local ship:TImage = LoadImage("resources/player.png", 0) 
    MidHandleImage(ship)
    
    Local bulletImage:TImage = LoadImage("resources/shotTiny.png", 0)
    MidHandleImage(bulletImage)

    Local screen:Hitbox = New Hitbox(0, 0, VIRTUAL_WIDTH, VIRTUAL_HEIGHT)
    Local bullets:TObjectList = New TObjectList

    Local enemies:TObjectList = New TObjectList
    For Local i:Int = 0 Until 3
        Local wpm:WayPointMover = makeRandomMover()
        Local enemyShip:Ship = New Ship()
        enemyShip.BPUs.AddLast(makeSimpleBPU(bullets, 5 + Rand(15), 1 + Rand(3)))
        enemyShip.mover = wpm
        enemies.AddLast(enemyShip)
    Next

    Local players:TObjectList = New TObjectList

    Function upFn:Int()
        Return KeyDown(KEY_UP)
    End Function
    Function downFn:Int()
        Return KeyDown(KEY_DOWN)
    End Function
    Function rightFn:Int()
        Return KeyDown(KEY_RIGHT)
    End Function
    Function leftFn:Int()
        Return KeyDown(KEY_LEFT)
    End Function

    Local p:Player = New Player(New SVec2D(VIRTUAL_WIDTH / 2.0, VIRTUAL_HEIGHT / 2.0))
    p.upFn = upFn
    p.downFn = downFn
    p.rightFn = rightFn
    p.leftFn = leftFn
    p.speed = 3
    players.addlast(p)

    Function updatePlayers(players:TObjectList)
    For Local p:Player = EachIn players
        p.update()
    Next
    End Function
    
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

    Function updateEnemies(enemies:TObjectList)
    For Local e:Ship = EachIn enemies
        e.Update()
    Next
    End Function

    Function drawEnemies(enemies:TObjectList, ship:TImage)
    For Local e:Ship = EachIn enemies
        ' drawWayPointMover(WayPointMover(e.mover))
        SetRotation ATan2(e.mover.velocity.y,e.mover.velocity.x)
        DrawImage ship, e.getX(), e.getY()
        SetRotation 0
        SetColor 255,255,255
    Next
    End Function

    Function drawPlayers(players:TObjectList, ship:TImage)
    For Local p:Player = EachIn players
        SetRotation 270
        DrawImage ship, p.getX(), p.getY()
        SetRotation 0
    Next
    End Function

    While Not KeyHit(KEY_ESCAPE)
        updateBullets(bullets, screen)
        updateEnemies(enemies)
        updatePlayers(players)
        ' 1. Render to the virtual resolution framebuffer
        SetRenderImage framebuffer
        Cls
        DrawRectOutline 1, 1, 240, 320 ' Very strange BlitzMax line bug won't draw top and left 0,0
        drawBullets(bullets, bulletImage)
        drawEnemies enemies, ship
        drawPlayers players, ship
        SetAlpha 1.0
        ' Reset rendering to screen
        SetRenderImage Null
        SetBlend alphablend
        SetColor 255, 255, 255
        ' Draw the framebuffer scaled to native resolution
        DrawImageRect framebuffer, offsetX, offsetY, VIRTUAL_WIDTH * Scale, VIRTUAL_HEIGHT * Scale
        Flip
    Wend
End Function

main()
