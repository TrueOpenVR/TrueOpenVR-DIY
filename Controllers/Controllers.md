[![EN](https://user-images.githubusercontent.com/9499881/33184537-7be87e86-d096-11e7-89bb-f3286f752bc6.png)](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/Controllers/Controllers.md) 
[![RU](https://user-images.githubusercontent.com/9499881/27683795-5b0fbac6-5cd8-11e7-929c-057833e01fb1.png)](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/Controllers/Controllers.RU.md) 
# VR controllers
VR controllers can be made on the basis of Arduino, DayDream controller (the driver is not available yet) or use ready-made ones such as Sony Playstation Move (for PS Move there is no full driver yet, only for virtual position trackers - ping pong balls, with LED).

## Arduino controllers
Arduino controller requires a rotation sensor and buttons. More information from the tracker rotation can be read in the [instructions for the VR HMD](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/HMD/HMD.md) (rotation tracker).

The stick and triggers can be emulated with conventional buttons, instead of analog buttons. Here is the test [firmware](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/Controllers/Arduino/Controller.ino), compatible with the driver "ArduinoControllers". The buttons are soldered to the digital pins and ground.

For positioning the controller, attach a ping pong ball to it, solder the LED through the resistor. More about this positioning tracker read [instructions for the VR HMD](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/HMD/HMD.md) (position tracker).


## DayDream контроллеры
The Daydream controller allows you to get rotation data and buttons. To position the controller, you need to stick a ping pong ball to it, make a switch so as not to consume the battery and get soldered to the battery. More about this positioning tracker read [instructions for the VR HMD](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/HMD/HMD.md) (position tracker).

[![youtube](https://user-images.githubusercontent.com/9499881/44265935-ae8b4b00-a239-11e8-85fa-006f29f58c82.gif)](https://youtu.be/jtABXvqChHU)

You can buy them on the website [AliExpress](http://ali.pub/2ph4hr). 

The driver can be developed on the basis of [this code](https://github.com/gb2111/Access-GearVR-Controller-from-PC).

## Android smartphones
[![youtube](https://user-images.githubusercontent.com/9499881/44266133-7b958700-a23a-11e8-98bb-af64a35c7ecb.gif)](https://youtu.be/4V1yee-_5PA)

Android smartphone allows to get rotational data and buttons, more details [here](https://github.com/TrueOpenVR/TrueOpenVR-Drivers/tree/master/C%2B%2B/AndroidControllers). More about this positioning tracker read [instructions for the VR HMD](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/HMD/HMD.md) (position tracker).

## PS Move
Good ready and not expensive option. A full-featured driver "PSMoveService" is required, which will allow not only to receive the position data of ping pong balls, but also to receive rotation data and buttons.