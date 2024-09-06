#define LEFT_SENSOR_PIN A0
#define RIGHT_SENSOR_PIN A1
#define BUTTON_PIN 3 //pin 4 y pin negativo
#define RIGHT_SERVO_PIN 5
#define LEFT_SENSOR_PIN 6
#define ULTRASONIC_ECHO A2     //Sensor ultrasonidos pin A2
#define ULTRASONIC_TRIGGER A3  //Sensor ultrasonidos pin A3

#include <Servo.h>
#include <NewPing.h>

Servo rightServo;
Servo leftServo;
NewPing sonar(trigger, echo, d)

boolean attack = false;
int distance;

void setup() {


}

void loop() {

}
