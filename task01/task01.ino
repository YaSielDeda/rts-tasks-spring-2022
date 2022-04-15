#include <stdio.h>
const int ledPin1 = 3;
const int ledPin3 = 6;
const int ledPin4 = 9;
const int ledPin5 = 10;
const int ledPin6 = 11;
 
int ledState1 = LOW; 
int ledStatePrevious1 = ledState1;
int ledState3 = LOW; 
int ledStatePrevious3 = ledState3;
int ledState4 = LOW; 
int ledStatePrevious4 = ledState4;
int ledState5 = LOW; 
int ledStatePrevious5 = ledState5;
int ledState6 = LOW; 
int ledStatePrevious6 = ledState6;
 
unsigned long previousMillis1 = 0;
unsigned long previousMillis3 = 0;
unsigned long previousMillis4 = 0;
unsigned long previousMillis5 = 0;  
unsigned long previousMillis6 = 0; 

const long interval1 = 225000; 
const long interval3 = 63000;
const long interval4 = 180;
const long interval5 = 80;
const long interval6 = 127000;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
}
 
void loop() {
  unsigned long currentMillis = micros();
 
  if (currentMillis - previousMillis1 >= interval1) {
      previousMillis1 = currentMillis;
 
      if (ledState1 == LOW) {
        ledState1 = HIGH;
      } else {
        ledState1 = LOW;
      }
 
      digitalWrite(ledPin1, ledStatePrevious1);
      ledStatePrevious1 = ledState1;
  }
   if (currentMillis - previousMillis3 >= interval3) {
    printf("%f\t%f\t%f\t", currentMillis, previousMillis3, interval3);
      previousMillis3 = currentMillis;
 
      if (ledStatePrevious3 == LOW) {
        ledState3 = HIGH;
      } else {
        ledState3 = LOW;
      }
 
      ledStatePrevious3 = ledState3;
      digitalWrite(ledPin3, ledStatePrevious3);
   }

   if (currentMillis - previousMillis4 >= interval4) {
      previousMillis4 = currentMillis;
 
     if (ledStatePrevious4 == LOW) {
        ledState4 = HIGH;
      } else {
        ledState4 = LOW;
      }
 
      ledStatePrevious4 = ledState4;
      digitalWrite(ledPin4, ledStatePrevious4);
   }
 
   if (currentMillis - previousMillis5 >= interval5) {
      previousMillis5 = currentMillis;
 
      if (ledStatePrevious5 == LOW) {
        ledState5 = HIGH;
      } else {
        ledState5 = LOW;
      }
 
      ledStatePrevious5 = ledState5;
      digitalWrite(ledPin5, ledStatePrevious5);
   }
 
   if (currentMillis - previousMillis6 >= interval6) {
      previousMillis6 = currentMillis;
 
      if (ledStatePrevious6 == LOW) {
        ledState6 = HIGH;
      } else {
        ledState6 = LOW;
      }
 
      ledStatePrevious6 = ledState6;
      digitalWrite(ledPin6, ledStatePrevious6);
  }
}
