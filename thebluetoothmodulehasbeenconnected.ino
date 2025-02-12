const int RX_Pin = 9;
const int TX_Pin = 10;
const int LEDred = 2;
const int LEDgreen = 4;
const int LEDyellow = 6;
#include <SoftwareSerial.h>

SoftwareSerial tooth(TX_Pin, RX_Pin);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Serial Works!");
  BTSerial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

}
