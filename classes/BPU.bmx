SuperStrict
Import Math.Vector
Import "GameObject.bmx"

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
	' Int specific
	IADD
	IADC
	ISUB
	IMUL
	IDIV
	IROL
	IROR
	ISHL
	ISHR
	IAND
	IOR
	INOT
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
			Case operatorName.IADD
			Case operatorName.IADC
			Case operatorName.ISUB
			Case operatorName.IMUL
			Case operatorName.IDIV
			Case operatorName.IROL
			Case operatorName.IROR
			Case operatorName.ISHL
			Case operatorName.ISHR
			Case operatorName.IAND
			Case operatorName.IOR
			Case operatorName.INOT
		End Select
	End Method
	
	Method update()
		If instructionPtr >= actions.Length Then Return
		
		If sleepTicks = 0 
			While sleepTicks = 0 And instructionPtr < actions.Length
				' Keep in mind we ONLY iterate on non GOTOs
				' Keep thees in IF ExecuteOp has side effects
				If actions[instructionPtr].action = operatorName.SET_INSTRUCTIONPTR
					ExecuteOp actions[instructionPtr]
				Else
					ExecuteOp actions[instructionPtr]
					instructionPtr :+ 1
				End If
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
