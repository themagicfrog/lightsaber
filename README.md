# LIGHTSABER

A PCB lightsaber with a gyroscope and accelerometer! This was the first PCB I ever made and it was originally for [The Trail](https://github.com/hackclub/the-trail), an event by [Hack Club](https://github.com/hackclub). This project was A LOT harder than I expected but I finished it in the end!

The faster you move it, the more LEDs light up. Each of the x, y, and z are assigned to red, blue or green. It has an Arundio Nano microcontroller, NeoPixel lights, and a MPU-6050 gyroscope and accelerometer.

![](https://github.com/themagicfrog/lightsaber/blob/main/pcbphotos/pcbphoto2.JPG )

I first designed the entire board separately with a ATMEGA32u4 chip (and I designed it lighthouse themed as you can probably tell from the silkscreen), so the design and schematic are there if you want to take a look. There were a lot of problems though getting it working (though I did get to use an oscilloscope while trying to debug the bootloader issue that I encountered which was a ton of fun) so I decided to switch it up and switch to using an Ardunio Nano instead.

And lots of thanks to [Thomas](https://github.com/serenityUX) and Kevin Yang for helping and encouraging me!

Here are some really cool long-exposure light photos I took with it!

![](https://github.com/themagicfrog/lightsaber/blob/main/demophotos/demophoto1.JPG)
![](https://github.com/themagicfrog/lightsaber/blob/main/demophotos/demophoto2.JPG)
![](https://github.com/themagicfrog/lightsaber/blob/main/demophotos/demophoto3.JPG)
![](https://github.com/themagicfrog/lightsaber/blob/main/demophotos/demophoto4.JPG)
![](https://github.com/themagicfrog/lightsaber/blob/main/demophotos/demophoto5.JPG)
