//== INCLUDES
#include <Servo.h> //* include the library Servo
#include <SoftwareSerial.h> //* include the library SoftwareSerial
#include <Arduino.h> //! if you use Arduino IDE you don't need to include this
//== END INCLUDES

//== DEFINES
#define pinLDR A0  //* set analog pin 0 as the LDR pin
#define pot1 A1 //* potentiometer 1
#define pot2 A2 //* potentiometer 2
#define pot3 A3 //* potentiometer 3
#define pot4 A4 //* potentiometer 4
#define lightLevel 200 //* light level to be calibrated
#define pinServ1 7 //* set digital pin 7 as servomotor 1 pin
#define pinServ2 6 //* set digital pin 6 as servomotor 2 pin
#define pinServ3 5 //* set digital pin 5 as servomotor 3 pin
#define pinServ4 4 //* set digital pin 4 as servomotor 4 pin
#define pinLED 3 //* set digital pin 3 as LED 1 pin
#define pinLED2 2 //* set digital pin 2 as LED 2 pin
#define butt 8 //* set digital pin 8 as Button 1 pin
#define but2 9 //* set digital pin 9 as Button 2 pin
//== END DEFINES

//== OBJECTS AND FUNCITONES CREATORS
Servo serv1, serv2, serv3, serv4; //* create the object serv1, serv2, serv3, and serv4
int motor1,motor2,motor3,motor4; //* create motor1, motor1, motor3, and motor4 variable
//== END OBJECTS AND FUNCITONES CREATORS

//== SETUP
void setup() {
    Serial.begin(9600); //* start the serial
    pinMode(pinLED, OUTPUT); //* set pinLED as digital output
    pinMode(pinLED2, OUTPUT); //* set pinLED2 as digital output
    pinMode(butt,INPUT_PULLUP); //* sets button 1 pin as input with pullup resistor
    pinMode(but2,INPUT_PULLUP); //* sets button 2 pin as input with pullup resistor
    serv1.attach(pinServ1); //* assign object serv1 to pinserv1
    serv2.attach(pinServ2); //* assign object serv2 to pinserv2
    serv3.attach(pinServ3); //* assign object serv3 to pinserv3
    serv4.attach(pinServ4); //* assign object serv4 to pinserv4
}
//== END SETUP

//== LOOP BEGINNING
void loop() { 

}
//== END LOOP

//== AUXILIARIES FUNCTION

//== END AUXILIARIES FUNCTION