const int RX_Pin = 9;
const int TX_Pin = 10;
const int LEDred = 2;
const int LEDgreen = 4;
const int LEDyellow = 6;
#include <SoftwareSerial.h>
char davis;

SoftwareSerial tooth(TX_Pin, RX_Pin);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Serial Works!");
  tooth.begin(9600);
  pinMode(LEDred, OUTPUT);
  pinMode(LEDgreen, OUTPUT);
  pinMode(LEDyellow, OUTPUT);

}

void loop() {

  if (tooth.available() >0){
    davis = tooth.read();
    tooth.print("reading new input");
    tooth.println(davis);

  }

  if(davis == 'on'){
    Serial.println("davis has value!");
    digitalWrite(LEDred, HIGH);
  }
  if(davis == 'off'){
    Serial.println("turn off!");
    digitalWrite(LEDred, LOW);
  }
  delay(100);
  // put your main code here, to run repeatedly:

}
