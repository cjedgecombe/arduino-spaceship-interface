# Spaceship Interface

Spaceship Interface will lead us through the process of creating a programmable LED light show at the touch of a button!

## Wiring
First thing's first, we need to wire up our Arduino and breadboard.

In the picture you can that we're using the standard 5v power supply of the Arduino, connecting it and ground at the top
of the breadboard so both power and ground are available all the way down. There are also 3 LED's that are connected to
control pins on the board (that will let us programatically determine when they get power), before being fed to ground through a
220Ω resistor.

There is also a switch wired up, which is what we'll be using to send a signal to out program. The green wire is connected to
input pin 2 on the Arduino, and that 10kΩ is functioning as a **pull-down** resistor.

> The pull-down resistor holds the logic signal near to zero volts (0V) when no other active device is connected.
It pulls the input voltage down to the ground to prevent an undefined state at the input.

So as long as our circuit remains open and the switch is un-pressed, that resistor connects pin 2 to ground so that it won't accidentaly send a false-input state back to the board.
