SuperStrict

Import "GameObject.bmx"
Import "BPU.bmx"

Type Enemy Extends GameObject
    Field BPUs:TList = New TList

    Method UpdateBPUs()
	For Local b:BPU = EachIn BPUs
	    b.position = Self.mover.position
	    b.aimDirection = ATan2(mover.velocity.y, mover.velocity.x)
	    b.update()
	Next
    End method
    
    Method Update()
	Super.move()
	UpdateBPUs()
    End Method
End Type
