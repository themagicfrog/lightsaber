# MAGIC FROG'S LIGHTSABER

This is a PCB lightsaber controlled by a gyroscope and accelerometer that I designed. I created it originally for [The Trail](https://github.com/hackclub/the-trail), an event organized by [Hack Club](https://github.com/hackclub). 

## Project Overview
I initially designed the entire board with a ATmeag32U4 chip, and you can find the schematic and PCB design in the main branch. I also added some lighthouse-themed silkscreens as my original idea was to make it a desk lamp. I encountered a lot of problems along way and decided to use an Ardunio Nano instead. I used my PCB board as a base and connected the Ardunio Nano. 

## Features
Dynamic LED Control: LEDs light up based on movement detected by the gyroscope and acceleromenter.
- The faster you accelerate, the more LEDs illuminate.
- Each axis (x, y, z) on the gyroscope control a different LED color: red, blue, or green.

## Components
- Ardunio Nano Microcontroller
- MPU-6050 Gyroscope and Accelerometer
- NeoPixel LED Strip
- 6V Battery

![](https://github.com/themagicfrog/lightsaber/blob/main/pcbphotos/pcbphoto2.JPG )

## Photos!!
Here are some really cool long-exposure light photos I took with the lightsaber in action!

![](https://github.com/themagicfrog/lightsaber/blob/main/demophotos/demophoto1.JPG)
![](https://github.com/themagicfrog/lightsaber/blob/main/demophotos/demophoto2.JPG)
![](https://github.com/themagicfrog/lightsaber/blob/main/demophotos/demophoto3.JPG)
![](https://github.com/themagicfrog/lightsaber/blob/main/demophotos/demophoto4.JPG)
![](https://github.com/themagicfrog/lightsaber/blob/main/demophotos/demophoto5.JPG)

## Video
[Demo](https://youtu.be/aVmNQV3bQB4)[      Making](https://youtu.be/FEkJ6_g3jb8)

## Acknowledgements
Special thanks to [Thomas Stubblefield](https://github.com/serenityUX), Kevin Yang, and [Isaac Davenport](https://isaacdavenport.com/) for helping and encouraging me on the way!

## License
Magic Frog's Lightsaber is licensed under the MIT License. See the full license text in [License](https://github.com/themagicfrog/lightsaber/blob/main/LICENSE).
