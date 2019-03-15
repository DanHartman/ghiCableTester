# GHI 10-pin ribbon cable tester
Do you think these cables should be tested?  Yes.  Yes you do.

## Now You Can!!
![](static/demo_animated.gif)

### Usage
* Connect the Arduino to power via a USB cable
* Connect a 10-pin cable to both connectors on board
* Press the push button labelled `S1` to iterate through the pins
* Wiggle, manhandle, stress, and slap the cable on each pin to ensure no opens or shorts are present

### Development
* Install the [PlatformIO core](http://docs.platformio.org/en/latest/installation.html)
* Compile: `platformio run`
* Plug your arduino board into an available USB port. This should be auto-detected during the burn process
* Upload to Arduino: `platformio run --target upload`
