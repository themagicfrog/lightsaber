# MAGIC FROG'S LIGHTSABER

This is a PCB lightsaber with a gyroscope and accelerometer! It was the first PCB I ever created and it was originally for [The Trail](https://github.com/hackclub/the-trail), an event by [Hack Club](https://github.com/hackclub). Although this project turned out to be a lot harder than I thought it would be, I finished it in the end! Wahoo! :D

## Features

- Ardunio Nano microcontroller
- MPU-6050 gyroscope and accelerometer
- strip of Neopixel lights
  * More LEDs light up as you accelerate faster.
  * Each axis (x, y, z) on the gyroscope control a different color: red, blue, or green.

![](https://github.com/themagicfrog/lightsaber/blob/main/pcbphotos/pcbphoto2.JPG )

## Design Journey
- Initial Design
  * I originally designed the entire board with an ATmega32U4 chip with a lighthouse theme because I was planning to 3D print a case and make a lighthouse desk lamp. The schematic and PCB design are in the main branch if you want to take a look.
- Challenges
  * There were a lot of different problems (though I did get to use an oscilloscope while trying to debug the bootloader issue that I encountered which was a ton of fun).
- Final Decision
  * I decided to switch it up and switch to using an Ardunio Nano instead which made everything so much smooter!
 
## Acknowledgements
Special thanks to [Thomas](https://github.com/serenityUX) and Kevin Yang for helping and encouraging me on the way!


## Photos!!
Here are some really cool long-exposure light photos I took with the lightsaber in action!

![](https://github.com/themagicfrog/lightsaber/blob/main/demophotos/demophoto1.JPG)
![](https://github.com/themagicfrog/lightsaber/blob/main/demophotos/demophoto2.JPG)
![](https://github.com/themagicfrog/lightsaber/blob/main/demophotos/demophoto3.JPG)
![](https://github.com/themagicfrog/lightsaber/blob/main/demophotos/demophoto4.JPG)
![](https://github.com/themagicfrog/lightsaber/blob/main/demophotos/demophoto5.JPG)
