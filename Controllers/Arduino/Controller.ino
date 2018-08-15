//Controller TrueOpenVR

//Digital pins number / номера цифровых пинов
const byte TriggerBtnPin = 2;
const byte GripBtnPin = 3;
const byte ThumbStickBtnPin = 4;
const byte MenuBtnPin = 5;
const byte SystemBtnPin = 6;

//Button for emulating stick movement
//Кнопки для эмуляции движения стиков
const byte UpStickPin = 7;
const byte LeftStickPin = 8;
const byte RightStickPin = 9;
const byte DownStickPin = 10;

float ctrl[7];

void setup() {
  //Setup pins
  pinMode(TriggerBtnPin, INPUT_PULLUP);
  pinMode(GripBtnPin, INPUT_PULLUP);
  pinMode(ThumbStickBtnPin, INPUT_PULLUP);
  pinMode(SystemBtnPin, INPUT_PULLUP);
  pinMode(MenuBtnPin, INPUT_PULLUP);

  //Button for emulating stick movement
  //Кнопки для эмуляции движения стиков
  pinMode(UpStickPin, INPUT_PULLUP);
  pinMode(LeftStickPin, INPUT_PULLUP);
  pinMode(RightStickPin, INPUT_PULLUP);
  pinMode(DownStickPin, INPUT_PULLUP);
  
  Serial.begin(115200);
}

void loop() {
  //Rotation board - MPU 6050?
  ctrl[0] = 0; //yaw
  ctrl[1] = 0; //pitch
  ctrl[2] = 0; //roll

  //Buttons
  ctrl[3] = 0; //Trigger
  ctrl[4] = 0; //Buttons
  ctrl[5] = 0; //ThumbX
  ctrl[6] = 0; //ThumbY

  //Checking press buttons 
  if (digitalRead(TriggerBtnPin) == LOW)
    ctrl[3] = 255;

  if (digitalRead(GripBtnPin) == LOW)
    ctrl[4] += 1; //GRIPBTN = 1

  if (digitalRead(ThumbStickBtnPin) == LOW)
    ctrl[4] += 2; //THUMBSTICKBTN = 2

  if (digitalRead(MenuBtnPin) == LOW)
    ctrl[4] += 4; //MENUBTN = 4

  if (digitalRead(SystemBtnPin) == LOW)
   ctrl[4] += 8; //SYSTEMBTN = 8 

  //Stick emulation
  if (digitalRead(UpStickPin) == LOW)
    ctrl[6] = 32768; //Up

  if (digitalRead(LeftStickPin) == LOW)
    ctrl[5] = -32768; //Left

  if (digitalRead(RightStickPin) == LOW)
    ctrl[5] = 32767; //Right

  if (digitalRead(DownStickPin) == LOW)
    ctrl[6] = -32767; //Down

  //Output binary
  Serial.write((byte*)&ctrl, sizeof(ctrl));

  delay(20);
  
}
