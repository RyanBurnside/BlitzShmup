SuperStrict
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
		
		' TODO update position here https://natureofcode.com/autonomous-agents/
		
		Return position
	End Method
	
End Type
