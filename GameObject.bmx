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

Enum operatorName
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

Function operatorNameToString:String(n:operatorName)
	Select n
		Case operatorName.NOP Return "NOP"
		Case operatorName.SET_INSTRUCTIONPTR Return "SET_INSTRUCTIONPTR"
		Case operatorName.SET_SLEEPTICKS Return "SET_SLEEPTICKS"
		Case operatorName.SET_NUMBULLETS Return "SET_NUMBULLETS"
		Case operatorName.SET_SUBANGLE Return "SET_SUBANGLE"
		Case operatorName.SET_AIMDIRECTION Return "SET_AIMDIRECTION"
		Case operatorName.SET_BULLETSPEED Return "SET_BULLETSPEED"
		Case operatorName.SET_BULLETSIZE Return "SET_BULLETSIZE"
		Case operatorName.FIRE Return "FIRE"
		Default Return "operator name NOT in print function."
	End Select
End Function

Enum operandName
	UNKNOWN
	VALUE
	MEMORY	
End Enum

Function operandNameToString:String(n:operandName)
	Select n
		Case operandName.UNKNOWN Return "UNKNOWN"
		Case operandName.VALUE Return "VALUE"
		Case operandName.MEMORY Return "MEMORY"
		Default Return "operand name NOT in print function."
	End Select
End Function

Type Operand ' these are the "parameters" for the operators	
	Method ToString:String() Abstract ' New operands MUST print
End Type

Type OperandValue Extends operand
	Field value:Float
	Field operandType:operandName = operandName.VALUE
	Method New(value:Float)
		Self.value = value
	End Method
	
	Method ToString:String()
		Return "OperandValue(" + operandNameToString(operandType) + ", " + value + ")"
	End Method
End Type

Type OperandAddress Extends operand
	Field value:Int
	Field operandType:operandName = operandName.MEMORY
	Method New(value:Int)
		Self.value = value

	End Method
	
	Method ToString:String()
		Return "OperandAddress(" + operandNameToString(operandType) + ", " + value + ")"
	End Method
End Type

Type BPUOperator
	Field action:operatorName = operatorName.NOP
	Field operands:Operand[]

	Method New(action:operatorName, operands:Operand[])
		Self.action = action
		Self.operands = operands
	End Method
	
	Method ToString:String()
		Local temp:String = "BPUOperator["
		temp = temp + operatorNameToString(action) + ", " 
		Local countdown:Int = operands.Length -1
		For Local p:Operand = EachIn(operands)
			temp = temp + p.ToString()
			countdown :- 1
			If countdown > 0 Then temp = temp + ", "
		Next
		temp = temp + "]" 

		Return temp
	End Method
End Type

Type Tester
	Type innertype
	End Type
End Type

' Encoding direct opcodes to do the specific math you need, like "ANGLE Fdst, SVsrc0, SVsrc2" which computes the angle between two vectors and stores it in the F register is probably needed, etc, etc.
' Dealing with memory shows up with "move instructions" like MOV dstreg, srcmem, or MOV dstmem, srcreg
Rem
<psilord> so basically, adding in a small set of IADD, IADC, ISUB, IMUL, IDIV, IROL, IROR, ISHL, ISHR, IAND, IOR, INOT instructions for integer registers, then FADD, FUB, FMUL, FDIV, maybe even FZERO Fsrc, tol-constant, etc, etc, etc.
<psilord> You'll prolly have to tinker with status flags, like Z for "did the last integer operation result in a zero", you can look at the status flags for the C64 to see most of what you need.
<psilord> Keep a list of all of these instructions too. :)
<psilord> list as in in a buffer, so you remember what they are.
<psilord> So what I mean by status flags, is that most or all of each bit in the 'status' field can be assigned a meaning. Pick one of them to be Z for "zero". Then in the IADD emulation, after doign the iadd, check to see if the destination register is zero, if so, turn Z on in the status register, othereise, turn it off.
<psilord> http://www.6502.org/users/obelisk/6502/instructions.html
End Rem

' 6502 opcode lookup https://www.masswerk.at/6502/6502_instruction_set.html

Enum MemValueType
  MV_DOUBLE
  MV_UINT
  MV_UNINIT
End Enum


' consider making this a virtual class and saving the memory ...
Type MemValue
  Field dval:Double
  Field uival:UInt
  Field Flag:MemValueType = MemValueType.MV_UNINIT

 
  Method read_uival:UInt()
    If Flag = MemValueType.MV_UINT Or Flag = MemValueType.MV_UNINIT
      Return uival
    EndIf
 
    Throw "Type Mismatch: read_uival() but cell was double or unknown!"
  End Method
 
  Method write_uival(val:UInt)
    uival = val
    Flag = MemValueType.MV_UINT
  End Method
 
  Method read_dval:Double()
    If Flag = MemValueType.MV_DOUBLE Or Flag = MemValueType.MV_UNINIT
      Return dval
    EndIf
 
    Throw "Type Mismatch: read_dval() but cell was uint or unknown!"
  End Method
 
  Method write_dval(val:Double)
    dval = val
    Flag = MemValueType.MV_DOUBLE
  End Method
 
  Method New(Flag:MemValueType = MemValueType.MV_UNINIT)
    Flag = MemValueType.MV_UNINIT
  End Method
 
End Type
 
' Then make an array of MemValue 128K long and that's how much memory a
''BPU has for now.

' Bullet Processing Unit
Type BPU 
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
	
	Field actions:BPUOperator[]
	
	' Status register (full of bitflags like carry, negative, etc)
	Field status:UInt = 0;
 
	' *** General purpose registers ***
	
	' Integer registers
	Field StaticArray IntRegister:Int[32]
 
	' Floating point registers
	Field StaticArray FloatRegister:Float[32]
 
	' Vector2D registers
	Field StaticArray SVec2DRegister:SVec2D[32]
	
	' Our "memory" is 128k of Memvals
	Field StaticArray memory:MemValue[128 * 1024]
	
	
	Method New(actions:BPUOperator[])
		Self.actions = actions[..]
	End Method
	
	Method fire()
		Local startAngle:Float = aimDirection - (subAngle * (numBullets - 1) / 2.0)
		For Local i:Int = 0 Until numBullets 
			Local thisAngle:Float = startAngle + i * subAngle
			Local pos:SVec2D = New SVec2D(position.x, position.y)
			bulletList.AddLast(New Bullet(pos, thisAngle, bulletSpeed, bulletSize))
		Next
	End Method
	
	Method ExecuteOp(op:BPUOperator)
		Select op.action
			Case operatorName.NOP
			Case operatorName.SET_INSTRUCTIONPTR ' allows jumping
				instructionPtr = OperandValue(op.operands[0]).value
			Case operatorName.SET_SLEEPTICKS
				sleepTicks = OperandValue(op.operands[0]).value
			Case operatorName.SET_NUMBULLETS
				numBullets = OperandValue(op.operands[0]).value
			Case operatorName.SET_SUBANGLE
				subAngle = OperandValue(op.operands[0]).value
			Case operatorName.SET_AIMDIRECTION
				aimDirection = OperandValue(op.operands[0]).value
			Case operatorName.SET_BULLETSPEED
				bulletSpeed = OperandValue(op.operands[0]).value
			Case operatorName.SET_BULLETSIZE
				bulletSize = OperandValue(op.operands[0]).value
			Case operatorName.FIRE
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
	
	Method dump()
		Print "*registers*"
		Print "instructionPtr: " + instructionPtr
		Print "sleepTicks: " + sleepTicks

		Print "numBullets: " + numBullets
		Print "subAngle: " + subAngle
		Print "aimDirection: " + aimDirection
		Print "bulletSpeed: " + bulletSpeed
		Print "bulletSize: " + bulletSize

		Print "position (" + position.x + ", " + position.y + ")"
	
		' Status register (full of bitflags like carry, negative, etc)
		'Print "status" + status
 
		' *** General purpose registers ***
	
		' Integer registers
		'Print "IntRegister" + IntRegister
 
		' Floating point registers
		'Print "FloatRegister" + FloatRegister
 
		' Vector2D registers
		'Print "SVec2DRegister" + SVec2DRegister
		Print "*Operations Array*"
		Local counter:Int = 0
		For Local a:BPUOperator = EachIn actions
			Print "index: " + counter + " " + a.ToString()
			counter :+ 1
		Next
	End Method
	
End Type

' some testing with debugging output
Local ops:BPUOperator[5]

ops[0] = New BPUOperator(operatorName.SET_NUMBULLETS, [New OperandValue(3)])
ops[1] = New BPUOperator(operatorName.SET_SUBANGLE, [New OperandValue(45)])
ops[2] = New BPUOperator(operatorName.SET_AIMDIRECTION, [New OperandValue(90)])
ops[3] = New BPUOperator(operatorName.SET_SLEEPTICKS, [New OperandValue(10)])
ops[4] = New BPUOperator(operatorName.FIRE, [New OperandValue(0)])

Print "Size of Ops: " + ops.Length
Local B:BPU = New BPU(ops)
B.Update()
B.dump()

