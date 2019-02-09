[![EN](https://user-images.githubusercontent.com/9499881/33184537-7be87e86-d096-11e7-89bb-f3286f752bc6.png)](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/HMD/HMD.md) 
[![RU](https://user-images.githubusercontent.com/9499881/27683795-5b0fbac6-5cd8-11e7-929c-057833e01fb1.png)](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/HMD/HMD.RU.md) 
# VR HMD
The VR HMD is made from an HDMI display, tracker rotation, tracker positioning and VR headsets for Android smartphones.
## HDMI display
![](https://user-images.githubusercontent.com/9499881/44113330-c2cd0b12-a018-11e8-87e9-68803760ea6b.png)

HDMI display can be found on [AliExpress](http://ali.pub/2oy6xl) or Ebay. The best choice will be a 5.5 inch display, as it fits most VR headsets.

Also on sale are 6 inch displays and divided displays, I do not recommend buying them. At the moment, you can find displays with a resolution of 1920 to 1080 (Full HD), 2560 to 1440 (2K) and 3840 to 2160 (4K).

Optimal options will be buying a 2K display, the difference in price is small. The refresh rate of the displays is 60 Hz. Some displays have 50 Hz or no backlight, carefully read the description.

The display connects via HDMI 1.4 or 2.0 (see that your video card supports the correct version) and USB. Only power is supplied via USB.
## Rotation tracker
The tracker rotation is the only thing to do based on Arduino. Can buy [Arduino Nano ](http://ali.pub/2oy73f). To Arduino connect a board of sensors of rotation, for example, [MPU 6050 GY-521](http://ali.pub/2oy76c) , MPU 9250 or MPU 3200 GY-85.

Ready Arduino firmware there for [MPU 6050 GY-521](http://ali.pub/2oy76c). It is necessary to solder according to the scheme, [load libraries](https://github.com/r57zone/X360Advance-Arduino/releases/download/1.0/MPU6050-X360Advance.zip), unpack them into the "libraries" folder of the Arduino IDE. Put the tracker on a flat surface, flash the sketch "MPU6050_calibration.ino" and get the data for calibration. Next, you need to flash the sketch ["HMD_MPU6050_DMP6.ino"](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/HMD/Arduino/HMD_MPU6050_DMP6.ino), writing in it the already received calibration data.

![](https://user-images.githubusercontent.com/9499881/52521728-e200dc80-2c94-11e9-9628-68ea3ef3dacd.png)


Ready Arduino firmware there for MPU 3200 GY-85, it is named [Razor AHRS](https://github.com/Razor-AHRS/razor-9dof-ahrs/tree/master/Arduino). Together with her there is a program for calibration and demonstration. After calibration, replace the file "Output.ino", in the folder with the firmware, with this [one](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/HMD/Arduino/Razor_AHRS/Output.ino).
Here it is important to note that there are new revisions of GY-85, which are incompatible with this firmware. The following sensors are supported by firmware: accelerometer ADXL345, gyroscope ITG-3200 and magnetometers HMC5843, HMC5883L. The calibration instructions can be found on the [youtube](https://www.youtube.com/watch?v=J7K_TnzQBZk).

![](https://user-images.githubusercontent.com/9499881/52521767-bd593480-2c95-11e9-923a-648a3018d131.png)


For other rotation boards, [compatible firmware](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/HMD/Arduino/Arduino.Output.Bin.ino) is also needed.

Here are a couple [examples of output](https://github.com/TrueOpenVR/TrueOpenVR-DIY/tree/master/HMD/Arduino) for the sketches of Arduino, so that the firmware was compatible with the tracker "RazorIMU" TrueOpenVR.
## Position tracker
For good positioning need from 1 to 4 [Sony Playstation 3 Eye](https://www.ebay.com/sch/i.html?_nkw=Sony+Plastation+Eye) cameras. One camera is enough for positioning near, two for 180 tracking, three for 360 tracking and four will be ideally tracked in 360 tracking.

![](https://user-images.githubusercontent.com/9499881/44270886-c074ea00-a249-11e8-9542-196e9e5650ba.png)

To build a tracker need to buy a ping pong ball, [LED (yellow, red, green or blue)](http://ali.pub/2oy7dj) и [resistor 150-220 Ohm](http://ali.pub/2oy7iz). Setting up "PSMoveService" and demonstrating such a tracker in the beginning [video](https://www.youtube.com/watch?v=IunGVk89-TY). 
The LED is best wrapped in a white piece of plastic packaging to make the light from the LED lights in all directions.

![](https://user-images.githubusercontent.com/9499881/44270911-d4b8e700-a249-11e8-816a-5a6df6b6fbda.png) ![](https://user-images.githubusercontent.com/9499881/44270935-df737c00-a249-11e8-9731-a238f24ce4c6.png)

For "PSMoveService" and virtual trackers, a simple setup is needed, more details [here](https://github.com/TrueOpenVR/TrueOpenVR-Drivers/tree/master/C%2B%2B/PSMoveService).
## VR headset
Can be used:
1. [Baofeng S1](http://ali.pub/2papmt), using it you have to somehow fix everything in front;
2. [Bobovr Z4](http://ali.pub/2papt1), can put everything in it, but it's heavier and the viewing angle is smaller;

## Union
Can use only one USB power cable if you solder the wire that will split the power into the display, the tracker and the ping pong ball with the LED. On the display, a ping pong ball (through a resistor of 150-200 ohms) and Arduino power 5V is applied in parallel, that is, 5V and GND wires go to them, and data wires (Data + and Data -) go only to the Arduino tracker.

![](https://user-images.githubusercontent.com/9499881/44270352-5445b680-a248-11e8-90c4-e84a6f4f0299.png)