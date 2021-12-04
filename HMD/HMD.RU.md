﻿[![EN](https://user-images.githubusercontent.com/9499881/33184537-7be87e86-d096-11e7-89bb-f3286f752bc6.png)](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/HMD/HMD.md) 
[![RU](https://user-images.githubusercontent.com/9499881/27683795-5b0fbac6-5cd8-11e7-929c-057833e01fb1.png)](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/HMD/HMD.RU.md)
# VR шлем
VR шлем делается из HDMI дисплея, трекера вращения, трекера позиционирования и VR гарнтиры для Android смартфонов.
## HDMI дисплей
![](https://user-images.githubusercontent.com/9499881/44113330-c2cd0b12-a018-11e8-87e9-68803760ea6b.png)

HDMI дисплей можно найти на [AliExpress](http://alii.pub/65dbii) или Ebay. Лучшим выбором будет 5.5 дюймовый дисплей, так как подойдет под большинство VR гарнитур.

Также в продаже имеются 6 дюймовые дисплеи и разделенные дисплеи, их покупать не рекомендую. На данный момент можно найти дисплеи с разрешением: 1920 на 1080 (Full HD), 2560 на 1440 (2K) и 3840 на 2160 (4K).

Оптимальным вариантов будет покупка 2K дисплея, разница в цене небольшая. Частота обновления дисплеев составляет 60 Гц. Некоторые дисплеи имеют 50 Гц или не имеют подсветки, внимательно читайте описание.

Подключение дисплея происходит по HDMI 1.4 или 2.0 (смотрите чтобы ваша видеокарта поддерживала нужную версию) и USB. По USB подается только питание.
## Трекер вращения
Трекер вращения прощего всего сделать на основе Arduino. Можно купить [Arduino Nano](http://ali.pub/2oy73f). К Arduino подключается плата датчиков вращения, например, [MPU 6050 GY-521](http://ali.pub/2oy76c), MPU 9250 или MPU 3200 GY-85.

Готовая прошивка Arduino есть для [MPU 6050 GY-521](http://ali.pub/2oy76c). Необходимо спаять по схеме, [загрузить библиотеки](https://github.com/r57zone/X360Advance/releases/download/1.0/Arduino.Firmware.MPU6050.X360Advance.zip), распаковать их в папку "libraries" Arduino IDE. Положить трекер на ровную поверхость, прошить скетч "MPU6050_calibration.ino" и получить данные для калибровки. Далее нужно прошить скетч ["HMD_MPU6050_DMP6.ino"](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/HMD/Arduino/HMD_MPU6050_DMP6.ino), вписав в него уже полученные данные калибровки.

![](https://user-images.githubusercontent.com/9499881/52521728-e200dc80-2c94-11e9-9628-68ea3ef3dacd.png)


Готовая прошивка Arduino есть для MPU 3200 GY-85, называется она [Razor AHRS](https://github.com/Razor-AHRS/razor-9dof-ahrs/tree/master/Arduino). Вместе с ней идет программа для калибровки и демонстрации. После калибровки замените файл "Output.ino", в папке с прошивкой, на [этот](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/HMD/Arduino/Razor_AHRS/Output.ino).
Здесь важно отметить, что появились новые ревизии GY-85, которые несовместимы с этой прошивкой. Прошивкой поддерживаются следующие сенсоры: акселерометр ADXL345, гироскоп ITG-3200 и магнитометры HMC5843, HMC5883L. Инструкцию по калибровке можно найти на [youtube](https://www.youtube.com/watch?v=J7K_TnzQBZk).

![](https://user-images.githubusercontent.com/9499881/52521767-bd593480-2c95-11e9-923a-648a3018d131.png)


Для других датчиков вращения нужна [совместимая прошивка](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/HMD/Arduino/Arduino.Output.Bin.ino).

Прошивки совместимы с трекером "ArduinoHMD" TrueOpenVR.
## Трекер позиции
Для хорошего позиционирования нужны от 1 до 4 [Sony Playstation 3 Eye](https://www.ebay.com/sch/i.html?_nkw=Sony+Plastation+Eye) камер. Одной камеры хватит для позиционирования вблизи, двух для 180 трекинга, трех для 360 трекинга и четыре будет идеально отслеживаться в 360 трекинге.

![](https://user-images.githubusercontent.com/9499881/44270886-c074ea00-a249-11e8-9542-196e9e5650ba.png)

Для создания трекера нужно купить пинг понг шарик, [светодиод (желтый, красный, зеленый или синий)](http://ali.pub/2oy7dj) и [резистор на 150-220 Ом](http://ali.pub/2oy7iz). Настройка "PSMoveService" и демонстрация такого трекера в начале [видео](https://www.youtube.com/watch?v=IunGVk89-TY). 
Светодиод лучше обернуть в белый кусок пластиковой упаковки, чтобы свет от светодиода светил во все стороны. 

![](https://user-images.githubusercontent.com/9499881/44270911-d4b8e700-a249-11e8-816a-5a6df6b6fbda.png) ![](https://user-images.githubusercontent.com/9499881/44270935-df737c00-a249-11e8-9731-a238f24ce4c6.png)

Для "PSMoveService" и виртуальных трекеров нужна простая настройка, подробнее [тут](https://github.com/TrueOpenVR/TrueOpenVR-Drivers/tree/master/C%2B%2B/PSMoveService).
## VR гарнитура
Можно использовать: 
1. [Baofeng S1](http://ali.pub/2papmt), используя его придется как-то закреплять всё спереди;
2. [Bobovr Z4, Z6](http://alii.pub/65dct6)), в него можно всё уложить, но он тяжелее и угол обзора меньше;

## Объединение
Можно использовать всего один провод питания USB, если спаять провод, который будет разделять питание на дисплей, трекер и пинг понг шарик со светодиодом. На дисплей, пинг понг шарик (через резистор 150-200 Ом) и Arduino питание 5V подается параллельно, то есть к ним идут провода 5V и GND, а провода данных (Data + и Data -) идет только на Arduino трекер.

![](https://user-images.githubusercontent.com/9499881/44270352-5445b680-a248-11e8-90c4-e84a6f4f0299.png)