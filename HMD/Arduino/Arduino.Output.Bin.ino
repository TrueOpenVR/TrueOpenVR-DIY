float ypr[3];

void setup() {
   Serial.begin(115200);
}

void Read() {
   //Read data from rotation sensors board and convert to degrees
}

void loop() {
    Read();
    Serial.write((byte*) ypr, 12);
}
