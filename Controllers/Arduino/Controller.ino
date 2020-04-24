//Controller TrueOpenVR

#define GRIP_BTN  0x0001
#define THUMB_BTN 0x0002
#define A_BTN   0x0004
#define B_BTN   0x0008
#define MENU_BTN  0x0010
#define SYS_BTN   0x0020

//Digital pins number / номера цифровых пинов
const byte TriggerBtnPin = 3;
const byte GripBtnPin = 4;
const byte ThumbStickBtnPin = 5;
const byte MenuBtnPin = 6;
const byte SystemBtnPin = 7;

//Button for emulating stick movement
//Кнопки для эмуляции движения стиков
const byte UpStickPin = 7;
const byte LeftStickPin = 8;
const byte RightStickPin = 9;
const byte DownStickPin = 10;

float ctrl[9];

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
  //Position with bones rotation (two gyroscope, read more https://github.com/TrueOpenVR/TrueOpenVR-DIY)
	ctrl[0] = -0.1; //0; //x 
	ctrl[1] = -0.3;  //0; //y
	ctrl[2] = -0.1; //0; //z
	
  //Rotation board - MPU 6050?
  ctrl[3] = 0; //yaw
  ctrl[4] = 0; //pitch
  ctrl[5] = 0; //roll

  //Buttons
  ctrl[6] = 0; //Trigger
  ctrl[7] = 0; //Buttons
  ctrl[8] = 0; //ThumbX
  ctrl[9] = 0; //ThumbY

  //Checking press buttons 
  if (digitalRead(TriggerBtnPin) == LOW)
    ctrl[6] = 1;

  int CtrlButtons = 0;
  if (digitalRead(GripBtnPin) == LOW)
    CtrlButtons |= GRIP_BTN;

  if (digitalRead(ThumbStickBtnPin) == LOW)
    CtrlButtons |= THUMB_BTN; 

  if (digitalRead(MenuBtnPin) == LOW)
    CtrlButtons |= MENU_BTN;

  if (digitalRead(SystemBtnPin) == LOW)
    CtrlButtons |= SYS_BTN;

  ctrl[7] = CtrlButtons;

  //Stick emulation
  if (digitalRead(UpStickPin) == LOW)
    ctrl[9] = 1; //Up

  if (digitalRead(LeftStickPin) == LOW)
    ctrl[8] = -1; //Left

  if (digitalRead(RightStickPin) == LOW)
    ctrl[8] = 1; //Right

  if (digitalRead(DownStickPin) == LOW)
    ctrl[9] = -1; //Down

  //Output binary
  Serial.write((byte*)&ctrl, sizeof(ctrl));

  //delay(20);
  
}
