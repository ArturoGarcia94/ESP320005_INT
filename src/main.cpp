#include <Arduino.h>
#define boton 32
#define led 25


void IRAM_ATTR funcioninterrupcion();

void setup() {

  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(boton, INPUT_PULLUP);

  attachInterrupt(digitalPinToInterrupt(boton), funcioninterrupcion, FALLING);
}

void loop() {
 Serial.println("Este es un loop");

}

void IRAM_ATTR funcioninterrupcion(){

 Serial.println("botonazo");

}