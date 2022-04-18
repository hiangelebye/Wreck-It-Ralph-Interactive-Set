/*
AET Wreck It Ralph
Team Name: First Aid Coding Kit
Team Members: Angelica Choi, Kuba Bard
Description: button and servo program
*/

//Servo code library
#include<Servo.h>;

//VARIABLES
Servo myServo1;
Servo myServo2;

const int buttonPinFlag = 7;
const int buttonPinRalph = 8;
const int buttonPinRalphLanding = 11;
const int buttonPinCyBug = 6;
const int buttonPinKingCandy = 5;

void setup() {
  // put your setup code here, to run once:
  myServo1.attach(9); //using .attach to initiallize servo to pin 9
  myServo2.attach(10);
  pinMode(buttonPinFlag, INPUT);
  pinMode(buttonPinRalph, INPUT);
  pinMode(buttonPinCyBug, INPUT);
  pinMode(buttonPinKingCandy, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //if button is pressed, swivel servo 180 degrees
  if(digitalRead(buttonPinFlag) == HIGH){
    myServo1.write(90);

    if(digitalRead(buttonPinRalph) == LOW)
    {
      //insert a wait function
      delay(10000);
    myServo1.write(90);
    }else{
    myServo1.write(0);
    }
      if(digitalRead(buttonPinRalphLanding) == HIGH)
      {
      myServo2.write(180);
      }else{
      myServo2.write(0);
      }

      if(digitalRead(buttonPinCyBug) == LOW)
      {
        delay(3000);
      myServo1.write(90);
        if(digitalRead(buttonPinKingCandy) == LOW)
        {
        delay(3000);
        myServo1.write(90);
        }else{
        myServo1.write(0);
        }
      }else{
      myServo1.write(0);
      }


  }else{
    myServo1.write(0);
  }
  
}
