SuperStrict

Import BRL.StandardIO
Import Math.Vector
Import "Hitbox.bmx"
Import "Mover.bmx"

Type GameObject
    Field mover:Mover = New LinearMover
    Field dead:Int = False
    Field hitbox:Hitbox = New Hitbox
    Field HP:Float = 1

    Method move:SVec2D()
        mover.move()
        hitbox.center = mover.position
        Return mover.position
    End Method
    
    Method getX:Float()
        Return mover.getX()
    End Method
    
    Method getY:Float()
        Return mover.getY()
    End Method
End Type

Type Bullet Extends gameObject
    Method New(position:SVec2D, direction:Float, speed:Float, width:Float)
        Local tempDirection:SVec2D = New SVec2D(Cos(direction) * speed, Sin(direction) * speed)
        Self.mover = New LinearMover(New SVec2D(position[0], position[1]), tempDirection)
        Self.hitbox = New Hitbox(New SVec2D(position[0], position[1]), width, width)
    End Method
End Type

