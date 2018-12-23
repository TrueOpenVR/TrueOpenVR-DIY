[![EN](https://user-images.githubusercontent.com/9499881/33184537-7be87e86-d096-11e7-89bb-f3286f752bc6.png)](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/Controllers/Controllers.md) 
[![RU](https://user-images.githubusercontent.com/9499881/27683795-5b0fbac6-5cd8-11e7-929c-057833e01fb1.png)](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/Controllers/Controllers.RU.md) 
# VR контроллеры
VR контроллеры можно сделать на основе Arduino, DayDream контроллера (драйвер пока отсуствует) или использовать готовые, такие как Sony Playstation Move (для PS Move пока нет полноценного драйвера, только для виртуальных трекеров позиции - пинг понг шариков, со светодиодом).

## Arduino контроллеры
Для Arduino контроллера необходим датчик вращения и кнопки. Подробнее от трекере вращения можно прочитать в [инструкциии для VR шлема](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/HMD/HMD.RU.md) (трекер вращения). 

Стик и триггеры можно эмулировать обычными кнопкми, вместо аналоговых. Нажимающиеся стики можно [купить на AliExpress](http://ali.pub/2zbur8). Вот тестовая [прошивка](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/Controllers/Arduino/Controller.ino), совместимая с драйвером "ArduinoControllers". Кнопки подпаиваются к цифровым выводам и земле. 

Для позионирования контроллера прикрепить к нему пинг понг шарик, подпаять светодиод через резистор. Подробне о таком трекере позиционирования читайте в [инструкциии для VR шлема](https://github.com/TrueOpenVR/TrueOpenVR-DIY/blob/master/HMD/HMD.RU.md) (трекер позиционирования).

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

## Razer Hydra
Хороший готовый и не дорогой вариант. Необходима доработка драйвера. Для использования со SteamVR драйвер уже [есть](https://store.steampowered.com/app/491380/SteamVR_Driver_for_Razer_Hydra/).

## PS Move
Хороший готовый и не дорогой вариант. Необходим полноценный драйвер "PSMoveService", который позволит не только получать данные позиции пинг понг шариков, но и получать данные вращения и кнопки.