
/************************************************************************************
 *
 * File Name: HelloWorld.ino 
 * Developer: Jonathan Vargas 
 * Web: www.jonathanvargas.ml
 * Date: 05/09/2019
 * 
 * Description: It Blinks ESP32 board LED with one second of interval
 * 
 ***********************************************************************************/

// Libraries included
#include "Arduino.h"

// Global variables definition
const int led = 2;

/***************************************************************************
 *
 * loop Function
 * 
 * Description: It runs once when you press reset or power the board
 *
 ***************************************************************************/
void setup() {
  // initialize digital pin as an output and low state.
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
}


/***************************************************************************
 *
 * loop Function
 * 
 * It runs over and over again forever
 *
 ***************************************************************************/
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
}
