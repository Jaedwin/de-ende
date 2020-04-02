#include <Servo.h>
#include "constants.h"
#include "variables.h"

void setup() {
  // Setup Servo
  servo.attach(SERV_PIN);
  servo.write(START_ANGLE);

  // Setup I/O Pins
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT); 
  pinMode(RLED_PIN, OUTPUT);
  pinMode(GLED_PIN, OUTPUT);

  // Setup Serial
  Serial.begin(9600); 
}

void loop() {
  process_distance();
}

void process_distance(){
  if(read_dist() <= 30){
    Serial.print('0');
    servo.write(END_ANGLE);
    delay(10);
    digitalWrite(RLED_PIN, HIGH);
    delay(10);
    digitalWrite(GLED_PIN, LOW);
    delay(10);
  }else{
    Serial.print('1');
    servo.write(START_ANGLE);
    delay(10);
    digitalWrite(RLED_PIN, LOW);
    delay(10);
    digitalWrite(GLED_PIN, HIGH);
    delay(10);
  }
}

int read_dist(){
  // Clears the trigPin
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(ECHO_PIN, HIGH);
  
  // Calculating the distance
  distance= duration*0.034/2;
  return distance;
}
