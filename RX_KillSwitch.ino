
#include <SoftwareSerial.h>
SoftwareSerial HC12(10, 11); // HC-12 TX Pin, HC-12 RX Pin

void setup() {
  Serial.begin(9600);             // Serial port to computer
  HC12.begin(9600);               // Serial port to HC12
  pinMode(4,OUTPUT);

}

void loop() {
  if(HC12.available()) {        // If HC-12 has data
    char x;
    x = HC12.read();
    Serial.println(x);
    if(x=='o')
     {
      Serial.println("Emergency Shutdown");
      digitalWrite(4,LOW);
     }
    else if(x=='n'){
      Serial.println("Emergency Shutdown Cancelled");
      digitalWrite(4,HIGH);
    }
  }else{
     Serial.println("no rx");
    }

  }
