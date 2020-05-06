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

float ctrl[12];

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
	ctrl[0] = 0; ////x -0.1
	ctrl[1] = 0;  //y -0.3
	ctrl[2] = 0; //y -0.1
	//If X,Y,Z positions are zeros, then the position is calculated based on IMUs
	//Если X,Y,Z позиции по нулям значит позиция рассчитывается на основе IMUs

	//Rotation controller - MPU 6050
	ctrl[3] = 0; //yaw
	ctrl[4] = 0; //pitch
	ctrl[5] = 0; //roll

	//Position shoulder
	ctrl[6] = 0; //yaw
	ctrl[7] = 0; //pitch

	//Buttons
	ctrl[8] = 0; //Buttons
	ctrl[9] = 0; //Trigger
	ctrl[10] = 0; //ThumbX
	ctrl[11] = 0; //ThumbY

	//Checking press buttons 
	int CtrlButtons = 0;
	if (digitalRead(GripBtnPin) == LOW)
	CtrlButtons |= GRIP_BTN;

	if (digitalRead(ThumbStickBtnPin) == LOW)
	CtrlButtons |= THUMB_BTN; 

	if (digitalRead(MenuBtnPin) == LOW)
	CtrlButtons |= MENU_BTN;

	if (digitalRead(SystemBtnPin) == LOW)
	CtrlButtons |= SYS_BTN;

	ctrl[8] = CtrlButtons;

	//Trigger
	if (digitalRead(TriggerBtnPin) == LOW)
	ctrl[9] = 1;

	//Stick emulation
	if (digitalRead(UpStickPin) == LOW)
	ctrl[11] = 1; //Up

	if (digitalRead(LeftStickPin) == LOW)
	ctrl[10] = -1; //Left

	if (digitalRead(RightStickPin) == LOW)
	ctrl[10] = 1; //Right

	if (digitalRead(DownStickPin) == LOW)
	ctrl[11] = -1; //Down

	//Output binary
	Serial.write((byte*)&ctrl, sizeof(ctrl));

	//delay(20);
}
