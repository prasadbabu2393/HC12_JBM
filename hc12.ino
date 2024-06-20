#include<SoftwareSerial.h>
SoftwareSerial HC12(3,2);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
HC12.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
while(Serial.available())
{
  HC12.write(Serial.read());

}
while(HC12.available())
{
  Serial.println(HC12.readString());
}
}
