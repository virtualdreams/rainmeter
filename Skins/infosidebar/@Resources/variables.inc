[Variables]
SidebarWidth=200
StartY=43

BackColor=0,0,0,128
TextColor=255,255,255,255
TextColor2=255,255,255,160
BarColor=255,255,255
BarColorFadeStart=#BarColor#,108
BarColorFadeEnd=#BarColor#,25
BorderColor=192,192,192,64
;Color2=255,255,255,160
;Color3=255,255,255,108
;Color4=255,255,255,25
LightBlue=207,224,255,255
MediumBlue=92,135,209,255
FontName=Trebuchet MS
BarWidth=5
BClockLeft=((#SidebarWidth#-128)/2)

# --- drives
Drive1=C:
Drive2=D:
Drive3=E:
Drive4=F:
Drive5=I:
;Drive6=X:

# --- styles
[StyleText]
StringCase=Upper
FontColor=#TextColor#
FontFace=#FontName#
AntiAlias=1
FontSize=8
ClipString=1

[StyleTitle]
StringAlign=Left
FontColor=#ForeColor#
FontFace=#FontName#
FontSize=10
AntiAlias=1
;ClipString=1

[StyleHBar]
BarOrientation=Horizontal
BarColor=#BarColor#
SolidColor=#BarColorFadeStart#
SolidColor2=#BarColorFadeEnd#
X=10
Y=0R
W=(#SidebarWidth#-20)
H=#BarWidth#