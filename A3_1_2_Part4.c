#pragma config(Sensor, dgtl12, green,          sensorLEDtoVCC)
#pragma config(Motor,  port2,           rightMotor,    tmotorVex269_MC29, openLoop)
#pragma config(Motor,  port3,           leftMotor,     tmotorVex269_MC29, openLoop)
#pragma config(Motor,  port9,           servoMotor,    tmotorServoStandard, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*
  Project Title: A3_1_2_Part1
  Team Members: Teruhiro, Ryan, Christian, Andrew
  Date: 2/11/19
  Section: N/A


  Task Description:


  Pseudocode:

*/

task main()
{
setServo(servoMotor, -127);
wait(2);
setServo(servoMotor, 0);
wait(2);
setServo(servoMotor, 127);
wait(2);
}
