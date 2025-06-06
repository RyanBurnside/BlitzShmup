SuperStrict
Import Math.Vector

' base class For LinearMovers, SplineMovers, And WayPoint movers
Type Mover
    Field position:SVec2D
    Field velocity:SVec2D

    Method New(pos:SVec2D)
        Self.position = pos
    End Method

    Method New(pos:SVec2D, vel:SVec2D)
        Self.position = pos
    End Method

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
        position = position + velocity
        Return position
    End Method
    
    Method New(position:SVec2D, velocity:SVec2D)
        Self.position = position
        Self.velocity = velocity
    End Method
End Type

Type WayPointMover Extends Mover
    Field wayPoints:SVec2D[]
    ' this tracks the next target, -1 means keep current heading    
    Field nextWayPoint:Int = 0
    Field returnStart:Int = False

    ' How close does the mover have to be to a waypoint
    Field toleranceRadius:Double = 8

    Field acceleration:SVec2D = New SVec2D
    Field maxSpeed:Double = 3.0
    Field maxForce:Double = 0.1

    Method New(maxspeed:Double = 8.0, maxforce:Double = 0.1, toleranceRadius:Double = 8)
	Self.maxSpeed = maxSpeed
	Self.MaxForce = maxforce
	Self.toleranceRadius = toleranceRadius
    End Method
    
    Method update()
	velocity = velocity + acceleration
	' disallow anything larger than maxSpeed
	If velocity.Length() > maxSpeed
	   velocity = velocity.Normal() * maxSpeed
	End If
	position = position + velocity
	acceleration = acceleration * 0.0
    End Method

    Method applyForce(force:SVec2D)
	acceleration = acceleration + force
    End Method

    Method updateTarget()
	' We Exit early If the point hasn't been "hit" yet
	If position.DistanceTo(wayPoints[nextWaypoint]) > toleranceRadius
	    return
	End If

	nextWayPoint :+ 1
	
	' Still here? Make a choice To set back To 0 (start) Or keep index
	If nextWayPoint > wayPoints.Length - 1
	    If returnStart = True
		nextWayPoint = 0
		return
	    Else
		nextWayPoint = wayPoints.Length - 1
		return
	    End if
	End If	
    End Method
    
    Method seek(target:SVec2d)
	Local desired:SVec2D = target - position
	desired = desired.Normal() * maxSpeed 
	Local steer:SVec2D = desired - velocity
	If steer.Length() > maxForce
	    steer = steer.Normal() * maxForce
	End If
	applyForce(steer)
    End Method
    
    Method move:SVec2D()
        ' if array is 0 bail
        If wayPoints.Length < 1
            Return position
        End If
	
	updateTarget()
	seek(wayPoints[nextWayPoint])
	update()
	Return position
    End Method
End Type

Function drawWayPointMover(w:WayPointMover)
    Local index:Int = 0
    For Local s:SVec2d = EachIn w.wayPoints
	DrawText index, s.x, s.y
	If index > 0
	    Local prior:SVec2D = w.wayPoints[index - 1]
	    DrawLine s.x, s.y, prior.x, prior.y
	End If
	index :+ 1
    Next
    ' Now connect Last To First If closed...
    If w.returnStart
	Local lastIndex:Int = w.wayPoints.Length - 1
	Local s:SVec2D = w.wayPoints[0]
	Local e:SVec2D = w.wayPoints[lastIndex]
	DrawLine s.x, s.y, e.x, e.y
    End IF

    DrawOval w.position.x - 4, w.position.y - 4, 8, 8
End Function
