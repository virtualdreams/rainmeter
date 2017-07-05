[Variables]
# location
Location=GMXX0025:1:GM
# m or f
Unit=m

Days="Monday":"Montag","Tuesday":"Dienstag","Wednesday":"Mittwoch","Thursday":"Donnerstag","Friday":"Freitag","Saturday":"Sonnabend","Sunday":"Sonntag"

# regular expresions
UsedUnits=(?siU)<head>.*<locale>(.*)</locale>.*<form>(.*)</form>.*<ut>(.*)</ut>.*<ud>(.*)</ud>.*<us>(.*)</us>.*<up>(.*)</up>.*<ur>(.*)</ur>.*</head>
CurrentLocation=(?siU)<loc id="(.*)".*<dnam>(.*)</dnam>.*<tm>(.*)</tm>.*<lat>(.*)</lat>.*<lon>(.*)</lon>.*<sunr>(.*)</sunr>.*<suns>(.*)</suns>.*<zone>(.*)</zone>.*</loc>
CurrentConditions=(?siU)<cc>.*<lsup>(.*)</lsup>.*<obst>(.*)</obst>.*<tmp>(.*)</tmp>.*<flik>(.*)</flik>.*<t>(.*)</t>.*<icon>(.*)</icon>
Day1General=(?siU)<day d="1".*t="(.*)".*dt="(.*)".*<hi>(.*)</hi>.*<low>(.*)</low>.*<sunr>(.*)</sunr>.*<suns>(.*)</suns>
Day1Conditions=(?siU)<day d="1".*<part p="d">.*<icon>(.*)</icon>.*<t>(.*)</t>
Day2General=(?siU)<day d="2".*t="(.*)".*dt="(.*)".*<hi>(.*)</hi>.*<low>(.*)</low>.*<sunr>(.*)</sunr>.*<suns>(.*)</suns>
Day2Conditions=(?siU)<day d="2".*<part p="d">.*<icon>(.*)</icon>.*<t>(.*)</t>

# Styles
[StyleWeather]
;FontEffectColor=0,0,0,50
;StringEffect=Shadow
FontFace=#FontName#
AntiAlias=1
FontColor=#TextColor#