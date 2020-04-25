[![EN](https://user-images.githubusercontent.com/9499881/33184537-7be87e86-d096-11e7-89bb-f3286f752bc6.png)](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/Controllers/Controllers.md) 
[![RU](https://user-images.githubusercontent.com/9499881/27683795-5b0fbac6-5cd8-11e7-929c-057833e01fb1.png)](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/Controllers/Controllers.RU.md) 
# VR контроллеры
VR контроллеры можно сделать на основе Arduino, DayDream контроллера (драйвер пока отсуствует) или использовать готовые, такие как Razer Hydra или Sony Playstation Move.

## Arduino контроллеры
Для Arduino контроллера необходим [Arduino Nano](http://ali.pub/2oy73f), датчик вращения [MPU 6050 GY-521](http://ali.pub/2oy76c) и [кнопки](http://ali.pub/33lzue). 

Стик и триггеры можно сделать обычными кнопкми или нажимающимся [джойстиком](http://ali.pub/2zbur8). Кнопки припаиваются к цифровым выводам и земле, номера цифровых выводов есть в прошивке.

Взять готовую прошивку для MPU 6050 GY-521 можно [здесь](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/Controllers/Arduino/Controller_MPU6050_DMP6.ino). Необходимо загрузить библиотеки и сделать калибровку, подробнее можно прочитать в [инструкциии для VR шлема](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/HMD/HMD.RU.md) (трекер вращения).

Также есть тестовая [прошивка](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/Controllers/Arduino/Controller.ino), каркас для других датчиков. 

Для позионирования контроллера нужно прикрепить к нему пинг понг шарик, подпаять светодиод через резистор к VCC (5V) и GND (земле). Подробне о таком трекере позиционирования читайте в [инструкциии для VR шлема](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/HMD/HMD.RU.md) (трекер позиционирования).

Также для позиционирования можно использовать дополнительный датчик вращения, закрепленный на плече. Таким образом можно получить позиционирование из двух осей yaw и двух осей pitch, применив к ним сферическую система координат (аналогично скелетной анимации в играх). Данный метод используется на Nintendo Switch. 

![](https://user-images.githubusercontent.com/9499881/79615275-72e20c00-8113-11ea-8467-514d9fe730a6.gif)

![](https://user-images.githubusercontent.com/9499881/79614778-52658200-8112-11ea-9c83-ef131954b697.gif)

Прошивки совместимы с трекером "ArduinoControllers" TrueOpenVR.

## Razer Hydra
Хороший готовый и не дорогой вариант. Необходима доработка драйвера. Для использования со SteamVR драйвер уже [есть](https://github.com/r57zone/Razer-Hydra-SteamVR-driver).

## PS Move
Хороший готовый и не дорогой вариант. Драйвер написан, но необходимо тестирование. Стик эмулируется кнопками.

## DayDream контроллеры
Контроллер Daydream позволяет получить данные вращения и кнопки. Для позионирования контроллера нужно приклеить к нему пинг понг шарик, сделать выключатель, чтобы не расходовать батарею и подпаяться к батарее. 

Подробне о таком трекере позиционирования читайте в [инструкциии для VR шлема](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/HMD/HMD.RU.md) (трекер позиционирования).

[![youtube](https://user-images.githubusercontent.com/9499881/44265935-ae8b4b00-a239-11e8-85fa-006f29f58c82.gif)](https://youtu.be/jtABXvqChHU)

Приобрести их можно на сайте [AliExpress](http://ali.pub/2ph4hr). 

Разработать драйвер можно на основе [этого кода](https://github.com/gb2111/Access-GearVR-Controller-from-PC).

## Android смартфоны
[![youtube](https://user-images.githubusercontent.com/9499881/44266133-7b958700-a23a-11e8-98bb-af64a35c7ecb.gif)](https://youtu.be/4V1yee-_5PA)

Android смартфон позволяет получить данные вращения и кнопки, подробнее [здесь](https://github.com/TrueOpenVR/TrueOpenVR-Drivers/tree/master/C%2B%2B/AndroidControllers). Для позиционирования нужно использовать пинг понг шарик. 

Подробне о таком трекере позиционирования читайте в [инструкциии для VR шлема](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/HMD/HMD.RU.md) (трекер позиционирования).