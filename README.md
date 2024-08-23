# MAGIC FROG'S LIGHTSABER

This is a PCB lightsaber controlled by a gyroscope and accelerometer that I designed. I created it originally for [The Trail](https://github.com/hackclub/the-trail), an event organized by [Hack Club](https://github.com/hackclub). I initially designed the entire board with a ATmeag32U4 chip. The schematic and PCB design are available in the main branch if you want to take a look. I encountered a lot of problems along way and decided to use an Ardunio Nano instead, which made everything so much smoother! I used my PCB board as a base and connected the Ardunio Nano with external wires. 

## Features
- LEDs controlled by gyroscope and accelerometer
  * More LEDs light up as you accelerate faster.
  * Each axis (x, y, z) on the gyroscope control a different color: red, blue, or green.

## Components
- Ardunio Nano Microcontroller
- MPU-6050 Gyroscope and Accelerometer
- Neopixel LED Strip
- 6V battery

![](https://github.com/themagicfrog/lightsaber/blob/main/pcbphotos/pcbphoto2.JPG )

## Acknowledgements
Special thanks to [Thomas](https://github.com/serenityUX) and Kevin Yang for helping and encouraging me on the way!


## Photos!!
Here are some really cool long-exposure light photos I took with the lightsaber in action!

![](https://github.com/themagicfrog/lightsaber/blob/main/demophotos/demophoto1.JPG)
![](https://github.com/themagicfrog/lightsaber/blob/main/demophotos/demophoto2.JPG)
![](https://github.com/themagicfrog/lightsaber/blob/main/demophotos/demophoto3.JPG)
![](https://github.com/themagicfrog/lightsaber/blob/main/demophotos/demophoto4.JPG)
![](https://github.com/themagicfrog/lightsaber/blob/main/demophotos/demophoto5.JPG)
