SuperStrict

' hsl hue 0.0 - 1.0 saturation 0.0 to 1.0 luminescence 0.0 to 1.0
' assigns byte references rBack, gBack, bBack 0 to 255
Function HSLtoRGB(h:Double, sl:Double, l:Double, rBack:Byte Var, gBack:Byte Var, bBack:Byte Var)
	Local v:Double
	Local r:Double, g:Double, b:Double
	
	If l <= 0.5
		v = l * (1.0 + sl)
	Else
		v = l + sl - l * sl
	EndIf
	
	If v <= 0
		r = 0; g = 0; b = 0
	Else
		Local m:Double
		Local sv:Double
		Local sextant:Int
		Local fract:Double, vsf:Double, mid1:Double, mid2:Double
		
		m = l + l - v
		sv = (v - m) / v
		h = h * 6.0
		sextant = Int(h)
		fract = h - sextant
		vsf = v * sv * fract
		mid1 = m + vsf
		mid2 = v - vsf
		Select sextant
			Case 0 r = v; g = mid1; b = m
			Case 1 r = mid2; g = v; b = m
			Case 2 r = m; g = v; b = mid1
			Case 3 r = m; g = mid2; b = v
			Case 4 r = mid1; g = m; b = v
			Case 5 r = v; g = m; b = mid2
		End Select
	End If
	
		' finally turn these doubles back into bytes
		rBack = r * 255
		gBack = g * 255
		bBack = b * 255
End Function
