SuperStrict
Import Math.Vector

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
