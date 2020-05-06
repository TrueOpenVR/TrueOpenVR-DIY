[![EN](https://user-images.githubusercontent.com/9499881/33184537-7be87e86-d096-11e7-89bb-f3286f752bc6.png)](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/Controllers/Controllers.md) 
[![RU](https://user-images.githubusercontent.com/9499881/27683795-5b0fbac6-5cd8-11e7-929c-057833e01fb1.png)](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/Controllers/Controllers.RU.md) 
# VR controllers
VR controllers can be made on the basis of Arduino, DayDream controller (no driver available yet) or use ready-made ones, such as Razer Hydra or Sony Playstation Move.

## Razer Hydra
Good ready and not expensive option. Need to finalize the driver. For use with SteamVR the driver is [already](https://github.com/r57zone/Razer-Hydra-SteamVR-driver).

## Arduino controllers
Arduino controller requires a [Arduino Nano](http://ali.pub/2oy73f), rotation sensor [MPU 6050 GY-521](http://ali.pub/2oy76c) and [buttons](http://ali.pub/33lzue).

Stick and triggers can be made with the buttons or [joystick with button](http://ali.pub/2zbur8). The buttons are soldered to the digital outputs and ground, the numbers of the digital outputs are in the firmware.

You can get ready firmware for MPU 6050 GY-521 [here](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/Controllers/Arduino/Controller_MPU6050_DMP6.ino). You need to download the library and do the calibration, more details can be found in the [instructions for the VR HMD](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/HMD/HMD.md) (rotation tracker).

Also have the [test firmware](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/Controllers/Arduino/Controller.ino) skeleton for other sensors. Firmware compatible with the tracker "ArduinoControllers" TrueOpenVR.

For positioning the controller, attach a ping pong ball to it, solder the LED through the resistor to VCC (5V) and GND. More about this positioning tracker read [instructions for the VR HMD](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/HMD/HMD.md) (position tracker).



For this type of positioning, you need to add reading from the second IMU sensor to the firmware. By default, when the second sensor is not used, the fixed values are from the "Arduino Controllers.ini" configuration file. In order for the driver to read the values from Arduino, change the parameters "ShoulderYaw" and " ShoulderPitch "to"0".
![](https://user-images.githubusercontent.com/9499881/79615275-72e20c00-8113-11ea-8467-514d9fe730a6.gif)

![](https://user-images.githubusercontent.com/9499881/80840516-8e1e4280-8c0e-11ea-9a5f-96a890f12d29.gif)

For this type of positioning, you need to add reading from the second IMU sensor to the firmware. By default, fixed values from the "Arduino Controllers.ini" configuration file are used. In order for the driver to read the values from Arduino, change the parameters "ShoulderYaw" and " ShoulderPitch "to"0".

## PS Move
Good ready and not expensive option. The driver is written, but testing is needed. Stick emulated with buttons.

## DayDream controllers
The Daydream controller allows you to get rotation data and buttons. To position the controller, you need to stick a ping pong ball to it, make a switch so as not to consume the battery and get soldered to the battery. 

More about this positioning tracker read [instructions for the VR HMD](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/HMD/HMD.md) (position tracker).

[![youtube](https://user-images.githubusercontent.com/9499881/44265935-ae8b4b00-a239-11e8-85fa-006f29f58c82.gif)](https://youtu.be/jtABXvqChHU)

You can buy them on the website [AliExpress](http://ali.pub/2ph4hr). 

The driver can be developed on the basis of [this code](https://github.com/gb2111/Access-GearVR-Controller-from-PC).

## Android smartphones
[![youtube](https://user-images.githubusercontent.com/9499881/44266133-7b958700-a23a-11e8-98bb-af64a35c7ecb.gif)](https://youtu.be/4V1yee-_5PA)

Android smartphone allows to get rotational data and buttons, more details [here](https://github.com/TrueOpenVR/TrueOpenVR-Drivers/tree/master/C%2B%2B/AndroidControllers). You can use a ping-pong ball for positioning. By default, the positioning is based on the yaw and pitch axes, as well as on the fixed shoulder axes located in the "AndroidControllers.ini" configuration file.

More about this positioning tracker read [instructions for the VR HMD](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/HMD/HMD.md) (position tracker).