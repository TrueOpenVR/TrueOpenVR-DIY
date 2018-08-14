float Yaw = 0, Pitch = 0, Roll = 0;

void setup() {
   Serial.begin(115200);
}

void Read() {
   //Read data from rotation sensors board and convert to degrees
}

void loop() {
    Read();
    Serial.print("#YPR=");
    Serial.print(Yaw); Serial.print(",");
    Serial.print(Pitch); Serial.print(",");
    Serial.print(Roll); Serial.println();
}
