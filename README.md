pad
===
Level experience calculator for Puzzles and Dragons.  Currently all it does is calculate the amount of Exp needed to get
from level X to level Y given an experience curve.

Immediate goals:
Find parseable data mapping creature number/name => curve type
==> This will allow me to give input in the form of (name/num, curLev, tarLev) rather than (curveType, curLev, tarLev)
Find parseable data mapping creature number/name => fodder value
==> This, in conjunction with the above data, will allow me to calculate the ideal level for fusing for any monster

Long term goals:
Given a box of (X, Y, ..., Z) fodder monsters and target monster A, what is the ideal way to fuse (X, Y, ..., Z) to:
  a.) Maximize exp gain
  b.) Minimize coin usage
  c.) Maximize the exp gain : coin usage ratio
Make a front end GUI and/or web applet for this program

===
Possibly useable data: http://pastebin.com/s4vDCJ2g
https://docs.google.com/spreadsheet/ccc?key=0Ah1NjACTDodGdHo2V0lQUHQ1SDZ5QWRnU1hzYVBLaFE#gid=0
http://puzzleanddragonsforum.com/archive/index.php/thread-7789.html
