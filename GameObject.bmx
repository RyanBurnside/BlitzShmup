SuperStrict

Import BRL.StandardIO
Import Math.Vector

' base class For LinearMovers, SplineMovers, And WayPoint movers
Type Mover
    Field position:SVec2D
	Field direction:SVec2D

	Method move:SVec2D() Abstract

	Method getX:Float()
		Return position[0]
	End Method
	
	Method getY:Float()
		Return position[1]
	End Method
End Type

Type Bullet Extends gameObject
	Method New(position:SVec2D, direction:Float, speed:Float, width:Float)
		Local tempDirection:SVec2D = New SVec2D(Cos(direction) * speed, Sin(direction) * speed)
		Self.mover = New LinearMover(New SVec2D(position[0], position[1]), tempDirection)
		Self.hitbox = New Hitbox(New SVec2D(position[0], position[1]), width, width)
	End Method
End Type

Type LinearMover Extends Mover
	Method move:SVec2D()
		position = position + direction
		Return position
	End Method
	
	Method New(position:SVec2D, direction:SVec2D)
		Self.position = position
		Self.direction = direction
	End Method
End Type


Type WayPointMover Extends Mover
	Field wayPoints:SVec2D[1]
	' How close does the mover have to be to a waypoint
	Field toleranceRadius:Float = 10
	' How sharp can it turn?
	Field turningAngle:Float = 360.0 / 16.0
	' this tracks the next target, -1 means keep current heading
	Field nextWayPoint:Int = 0
	Field returnStart:Int = False
	
	Method move:SVec2D()
		' if array is 0 bail
		If wayPoints.Length < 1
			Return position
		End If
		
		' TODO update position here
		
		Return position
	End Method
	
End Type


Type Hitbox
	Field center:SVec2D
	Field dimensions:SVec2D
	
	Method New(x:Float = 0, y:Float = 0, x2:Float = 1.0, y2:Float = 1.0)
		Self.center = New SVec2D((x + x2) * 0.5, (y + y2) * 0.5)
		Self.dimensions = New SVec2D(Abs(x2 - x), Abs(y2 - y))
	End Method
	
	Method New(center:SVec2D, width:Float = 1, height:Float = 1)
		Self.center = center
		Self.dimensions = New SVec2D(width, height)
	End Method
	
	Method New(center:SVec2D, dimensions:SVec2D)
		Self.center = center
		Self.dimensions = dimensions
	End Method
	
	Method getWidth:Float()
		Return dimensions[0]
	End Method
	
	Method getHeight:Float()
		Return dimensions[1]
	End Method
	
	Method getX:Float()
		Return center[0]
	End Method
	
	Method getY:Float()
		Return center[1]
	End Method
	
	Method getLeft:Float()
		Return center[0] - getWidth() * 0.5
	End Method
	
	Method getRight:Float()
		Return center[0] + getWidth() * 0.5
	End Method
	
	Method getTop:Float()
		Return center[1] - getHeight() * 0.5
	End Method
	
	Method getBottom:Float()
		Return center[1] + getHeight() * 0.5
	End Method
	
	Method collides:Int(h:Hitbox)
		If h.getBottom() < getTop() Then Return False
		If h.getTop() > getBottom() Then Return False
		If h.getRight() < getLeft() Then Return False
		If h.getLeft() > getRight() Then Return False
		Return True
	End Method
	
End Type

Type GameObject
	Field mover:Mover = New LinearMover
	Field dead:Int = False
	Field hitbox:Hitbox = New Hitbox
	
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

Enum EmitterOpFlags
	NOP ' Dummy flag, does nothing
	SET_INSTRUCTIONPTR ' allows jumping
	SET_SLEEPTICKS ' decrement with each update if > 0
	SET_NUMBULLETS
	SET_SUBANGLE
	SET_AIMDIRECTION
	SET_BULLETSPEED
	SET_BULLETSIZE
	FIRE
End Enum

Type EmitterOp
	Field action:EmitterOpFlags = EmitterOpFlags.NOP
	Field parameters:Float[] ' TODO extend parameters for variables :D

	Method New(action:EMitterOpFlags, parameters:Float[])
		Self.action = action
		Self.parameters = parameters
	End Method
End Type

Type Emitter
	' currently just works with literal values in parameters, easy to extend this with TObjects and eval parameters...
	Field instructionPtr:Int = 0
	
	' gets decremented if > 0 actions only resume on 0
	Field sleepTicks:Int = 0
	
	Field numBullets:Float = 1.0
	Field subAngle:Float = 0.0
	Field aimDirection:Float = 270
	Field bulletSpeed:Float = 1.0
	Field bulletSize:Float = 8
	Field bulletList:TObjectList = New TObjectList
	Field position:SVec2D = New SVec2D
	
	Field actions:EmitterOp[]
	
	Method fire()
		Local startAngle:Float = aimDirection - (subAngle * (numBullets - 1) / 2.0)
		For Local i:Int = 0 Until numBullets 
			Local thisAngle:Float = startAngle + i * subAngle
			Local pos:SVec2D = New SVec2D(position.x, position.y)
			bulletList.AddLast(New Bullet(pos, thisAngle, bulletSpeed, bulletSize))
		Next
	End Method
	
	Method ExecuteOp(e:EmitterOp)
		Select e.action
			Case EmitterOpFlags.NOP
			' Ideally sleep ticks come after each burst
			Case EmitterOpFlags.SET_INSTRUCTIONPTR ' allows jumping
				instructionPtr = Int(e.parameters[0])
			Case EmitterOpFlags.SET_SLEEPTICKS
				sleepTicks = e.parameters[0]
			Case EmitterOpFlags.SET_NUMBULLETS
				numBullets = e.parameters[0]
			Case EmitterOpFlags.SET_SUBANGLE
				subAngle = e.parameters[0]
			Case EmitterOpFlags.SET_AIMDIRECTION
				aimDirection = e.parameters[0]
			Case EmitterOpFlags.SET_BULLETSPEED
				bulletSpeed = e.parameters[0]
			Case EmitterOpFlags.SET_BULLETSIZE
				bulletSize = e.parameters[0]
			Case EmitterOpFlags.FIRE
				fire()
		End Select
	End Method
	
	Method update()
		If instructionPtr >= actions.Length Then Return
		
		If sleepTicks = 0 
			While sleepTicks = 0 And instructionPtr < actions.Length
				ExecuteOp actions[instructionPtr]
				instructionPtr :+ 1
			Wend
		Else
			sleepTicks :- 1
		End If
	End Method
	
End Type

