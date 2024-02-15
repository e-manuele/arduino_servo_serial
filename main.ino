#include <Servo.h>

Servo myservo;
int pos = 0;



void  setup()

{

Serial.begin(9600);
myservo.attach(9);

Serial.println("Comand  input online, write command to perform action");


}

void  loop() {
  
for(pos = 0; pos <= 180; pos += 1)
if (Serial.available())


{
  int state = Serial.parseInt();
    
if ( state < 0 && state >180)

{

Serial.println("cannos  execute command");
Serial.println(state);
}

if (state >= 0 && state <= 180)
{
  Serial.print(">");
  Serial.println(state);
  Serial.print("turning servo  to ");
  Serial.print(state);
  Serial.println(" degrees");
  myservo.write(state);
  
}

}

}



  
