/*
LiFi Vehicle-to-Vehicle Communication System

Author: Revathi Chandrasekaran
Description:
Arduino implementation of a visible light communication system for transmitting vehicle safety information using LED-based optical wireless communication.

Part of Bachelor's Project
*/

#include<LiquidCrystal.h> 
LiquidCrystal lcd(13,12,11,10,9,8); 
const int trigPin = 4;
const int echoPin = 6; 
long duration;
int distance;
void setup()
{
lcd.begin(16,2); 
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT); 
pinMode(5,OUTPUT);//buzzer Serial.begin(9600);
}
void loop()
{
lcd.setCursor(0,0); 
lcd.print("WELCOME TO LIFI");
lcd.setCursor(3,1); 
lcd.print("TECHNOLOGY"); 
delay(4000);

lcd.clear();
while(1)
{
digitalWrite(trigPin, LOW); 
delayMicroseconds(2); 
digitalWrite(trigPin, HIGH); 
delayMicroseconds(10); 
digitalWrite(trigPin, LOW); 
duration = pulseIn(echoPin, HIGH); 
distance= duration*0.034/2; 
lcd.clear(); 
lcd.setCursor(0,0); 
lcd.print("distance="); 
lcd.setCursor(5,1); 
lcd.print(distance); 
Serial.print(distance); if (distance<=20)
{
lcd.clear(); lcd.setCursor(0,0);

lcd.print("vehicle near by"); 
lcd.setCursor(3,1); 
lcd.print("detected");
digitalWrite(5,1); 
delay(500); 
digitalWrite(5,0); 
delay(500); 
digitalWrite(5,1); 
delay(500); 
digitalWrite(5,0); delay(500); 
digitalWrite(5,1); delay(500); 
digitalWrite(5,0); delay(500); 
digitalWrite(5,1); delay(500); 
digitalWrite(5,0); delay(500); 
digitalWrite(5,1); delay(500); 
digitalWrite(5,0);

delay(500);
delay(800);
}
if(Serial.available()>0)
{
char rec = Serial.read(); if(rec=='a')
{
lcd.clear(); 
lcd.setCursor(0,0); 
lcd.print("Rash Drive");
lcd.setCursor(0,1); 
lcd.print("Drive carefully");
digitalWrite(5,1); delay(500); 
digitalWrite(5,0); delay(500);
delay(800);
}
else if(rec=='b')
{
lcd.clear();

lcd.setCursor(0,0); lcd.print("Drink and Drive"); 
lcd.setCursor(0,1); lcd.print("Drive carefully");
digitalWrite(5,1); delay(500); 
digitalWrite(5,0); delay(500); 
digitalWrite(5,1); delay(500); 
digitalWrite(5,0); delay(500);
delay(800);
}
else if(rec=='c')

{
lcd.clear();
lcd.setCursor(0,0); lcd.print("Sleep and Drive"); 
lcd.setCursor(0,1); lcd.print("Drive carefully");
digitalWrite(5,1); delay(500); 
digitalWrite(5,0); delay(500); 
digitalWrite(5,1); delay(500); 
digitalWrite(5,0); delay(500); 
digitalWrite(5,1); delay(500); 
digitalWrite(5,0); delay(500);
delay(800);
}

}
//lcd.setCursor(0,0);
//lcd.print("ALC=");
//lcd.setCursor(9,0);
//lcd.print("SLP=");
//
//lcd.setCursor(0,1);
//lcd.print("RASH:");
//
//
//lcd.setCursor(9,1);
//lcd.print("DIS");
//lcd.setCursor(13,1);
//lcd.print(distance);
}

