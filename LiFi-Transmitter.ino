/*
LiFi Vehicle-to-Vehicle Communication System

Author: Revathi Chandrasekaran
Description:
Arduino implementation of a visible light communication system
for transmitting vehicle safety information using LED-based
optical wireless communication.

Part of Bachelor's Project
*/


#include <math.h>
const int x_out = A3; /* connect x_out of module to A1 of UNO board */ 
const int y_out = A4; /* connect y_out of module to A2 of UNO board */ 
const int z_out = A5; /* connect z_out of module to A3 of UNO board*/ 
const byte blinkPin = 7;  // change this to fit your circuit
byte oldBlinkState = HIGH;  // assume eye open (or supplyinit/calibrate routine)
const unsigned long debounceTime = 10; // milliseconds unsigned long blinkStartAt;  // when the blink started unsigned long oldBlinkStartAt; // when the previous blink started unsigned long unBlinkStartAt; // when blink ended
unsigned long tweenTime;  // time since last blink unsigned long blinkTime;
unsigned long;

void  setup() { Serial.begin(9600);

pinMode(A0,INPUT); // gas pinMode(A1,INPUT);
 
pinMode(A2,INPUT);


pinMode (blinkPin,  INPUT_PULLUP); pinMode(10,OUTPUT); pinMode(11,OUTPUT);
}


void pwm()
{
for(int i=255;i>=0;i--)
{
analogWrite(3,i); digitalWrite(2,0); delay(50);
}
}
void loop()
{


int gas,mems;
gas=analogRead(A0); gas=gas*0.4848; mems=analogRead(A1);
 
mems=mems*0.4848; int sleep; sleep=analogRead(A2);
sleep=sleep*0.4848;


//Serial.print("gas = ");
//Serial.println(gas);
//delay(1000); analogWrite(10,255); digitalWrite(11,0);

int x_adc_value,  y_adc_value,  z_adc_value; double x_g_value, y_g_value, z_g_value;

x_adc_value = analogRead(x_out); /* Digital value of voltage on x_out pin*/ y_adc_value = analogRead(y_out); /* Digital value of voltage on y_out pin*/
z_adc_value = analogRead(z_out); /* Digital value of voltage on z_out pin */

//  Serial.print("x = ");
// Serial.print(x_adc_value);
// Serial.print("\t\t");
// Serial.print("y = ");
// Serial.print(y_adc_value);
// Serial.print("\t\t");
// Serial.print("z = ");
 
// Serial.print(z_adc_value);
// Serial.print("\t\t");
// delay(100);



if (mems>=60)
{ Serial.print(mems); Serial.print('a'); delay(1500);
}

if(gas>=42)
{Serial.print(gas); Serial.println('b');
delay(1500); pwm(); delay(100); analogWrite(10,0); digitalWrite(11,0); delay(2500);

}
else
{
 
analogWrite(10,255); digitalWrite(11,0);
}
if(sleep>=60)
{Serial.print(sleep);


Serial.print ('c'); delay(1500);
}


//byte blinkState = digitalRead (blinkPin);
//  {
//  if (millis () - blinkChange >= debounceTime)
//  {
//  blinkChange = millis (); // when blink state changed
//  oldBlinkState = blinkState; // remember for next time
//  if (blinkState == LOW) {  // change to LOW if your sensor is LOW when blinking
//  blinkStartAt = blinkChange;
//  tweenTime = blinkChange - oldBlinkStartAt;
//  oldBlinkStartAt = blinkStartAt;
////  Serial.print ("Blink at: ");
////  Serial.print (blinkStartAt);
////  Serial.print (" Time since last blink: ");
 
////  Serial.println (tweenTime) ;
//  }
////  else {
////  unBlinkStartAt = blinkChange;
//////  Serial.print ("UnBlink at: ");
//////  Serial.print (unBlinkStartAt);
//////  Serial.print (" Blink length: ");
////
////  int sleep;
////  sleep=analogRead(A2);
//// sleep=sleep*0.4848;
////  Serial.print(sleep);
////
////  sleep=unBlinkStartAt - blinkStartAt;
////  //  Serial.println (sleep);
////  if(sleep>=60)
////  {Serial.print(sleep);
////
////  Serial.print ('c');
////  delay(1500);
////  }
////
////  }

