/*
AET Wreck It Ralph
Team Name: First Aid Coding Kit
Team Members: Angelica Choi, Kuba Bard
Description: button and servo program
*/

//Servo code library
#include<Servo.h>;

//CONSTANTS
const int raceSWITCH = 7;
const int mountainSWITCH = 9;
const int raceSERVOPIN = 11;
const int mountainSERVOPIN = 12;

//VARIABLES
int raceValue;
int mountainValue;
Servo raceServo;
Servo mountainServo;



void setup() {
  // put your setup code here, to run once:
  raceServo.attach (raceSERVOPIN);
  mountainServo.attach (mountainSERVOPIN);
  //using .attach to initiallize servo to pin
  pinMode(raceSWITCH, INPUT);
  pinMode(mountainSWITCH, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  raceValue = digitalRead(raceSWITCH);
  mountainValue = digitalRead(mountainSWITCH);
  //if button is pressed, swivel servo 180 degrees
  if(raceValue == HIGH || mountainValue == HIGH){
    raceServo.write(180);
  }else{
    mountainServo.write(180);
  }
}
