#include <Servo.h>

Servo myservo;
String pos = "";



void  setup()

{

Serial.begin(9600);
myservo.attach(9);

Serial.println("Comand  input online, write command to perform action");


}

void  loop() {
    while(Serial.available()>0)
      {
        pos= Serial.readString();
        Serial.print(pos+" degree.");
        Serial.println("Enter Position = ");
      }
      myservo.write(pos.toInt());
      delay(15);
    } 
  




  
