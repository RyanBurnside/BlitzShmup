SuperStrict

Import "Ship.bmx"

Type Player Extends Ship
    ' These fields are bound To respective Input checking fns
    Field upFn:Int()
    Field downFn:Int()
    Field leftFn:Int()
    Field rightFn:Int()
    Field actionFn:Int(o:Ship)
    Field speed:Int = 0

    Method New()
	' Dummy that allows 0 arguments
    End Method

    Method New(position:SVec2D)
	Self.mover.position = position
    End Method
    
    Method update()
	Local u:Int = upFn()
	Local d:Int = downFn()
	Local l:Int = leftFn()
	Local r:Int = rightfn()

	If u Or d Or l Or r
	    mover.velocity = New SVec2D(r - l, d - u) * speed
	    mover.move()
	    mover.velocity = New SVec2D(0.0, 0.0)
	End IF
    End Method
    
End Type
