#include <SoftwareSerial.h>
char on = 'o';
char off = 'n';
int val;
SoftwareSerial HC12(10, 11); // HC-12 TX Pin, HC-12 RX Pin  ( rx , tx : 11, 10)

void setup() {
  Serial.begin(9600);             // Serial port to computer
  HC12.begin(9600);               // Serial port to HC12
  pinMode(8,INPUT_PULLUP);
}

void loop() {
//  Serial.print("hello");
 // Serial.println("hello");
  
  val = digitalRead(8);
  //Serial.println(val);
  if (val==1){
    HC12.write(on);
  }
  else {
    HC12.write(off);
  
  //delay(100);

}
}
