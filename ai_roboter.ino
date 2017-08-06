#include <Ultrasonic.h>
#include <Servo.h>
#include <math.h>

#define HAND_MINUS 2
#define HAND_PLUS 3
#define LIFT_MINUS 4
#define LIFT_PLUS 5
#define ROTATE_MINUS 6
#define ROTATE_PLUS 7
#define ECHO 15
#define TRIG 14
#define DYNAMIC 12
#define SERVO 14
#define SIDE_MINUS 5
#define SIDE_PLUS 4
#define FORWARD_MINUS 3
#define FORWARD_PLUS 2 
 
//Servo sonar;
Ultrasonic ultrasonic(TRIG, ECHO); // (trig, echo)

int distance = 15;
bool isAbove;
bool isHolding;
int data[3];

void setup() {
  pinMode(ROTATE_PLUS, OUTPUT);
  pinMode(ROTATE_MINUS, OUTPUT);
  pinMode(LIFT_PLUS, OUTPUT);
  pinMode(LIFT_MINUS, OUTPUT);
  pinMode(HAND_PLUS, OUTPUT);
  pinMode(HAND_MINUS, OUTPUT);
//  pinMode(FORWARD_PLUS, OUTPUT);
//  pinMode(FORWARD_MINUS, OUTPUT);
//  pinMode(SIDE_MINUS, OUTPUT);
//  pinMode(SIDE_PLUS, OUTPUT);
//  pinMode(SERVO, OUTPUT); 
  pinMode(TRIG, OUTPUT); 
  pinMode(DYNAMIC, OUTPUT); 
  
  digitalWrite(HAND_PLUS, LOW);
  digitalWrite(HAND_MINUS, LOW);
  digitalWrite(ROTATE_MINUS, LOW);
  digitalWrite(LIFT_MINUS, LOW);
  digitalWrite(ROTATE_PLUS, LOW);
  digitalWrite(LIFT_PLUS, LOW);
//  digitalWrite(FORWARD_PLUS, LOW);
//  digitalWrite(FORWARD_MINUS, LOW);
//  digitalWrite(SIDE_MINUS, LOW);
//  digitalWrite(SIDE_PLUS, LOW);
  Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps
  isAbove = true;
  isHolding = true;
}
void loop() {
//  tone(DYNAMIC, 294);
//  delay(150);
//  tone(DYNAMIC, 294);
//  delay(150);
//  tone(DYNAMIC, 329);
//  delay(400);
//  tone(DYNAMIC, 294);
//  delay(400);
//  tone(DYNAMIC, 392);
//  delay(400);
//  tone(DYNAMIC, 369);
//  delay(900);
//  tone(DYNAMIC, 294);
//  delay(150);
//  tone(DYNAMIC, 294);
//  delay(150);
//  tone(DYNAMIC, 329);
//  delay(400);
//  tone(DYNAMIC, 294);
//  delay(400);
//  tone(DYNAMIC, 440);
//  delay(400);
//  tone(DYNAMIC, 392);
//  delay(900);
//  tone(DYNAMIC, 294);
//  delay(150);
//  tone(DYNAMIC, 294);
//  delay(150);
//  tone(DYNAMIC, 369);
//  delay(400);
//  tone(DYNAMIC, 493);
//  delay(400);
//  tone(DYNAMIC, 392);
//  delay(400);
//  tone(DYNAMIC, 349);
//  delay(400);
//  tone(DYNAMIC, 329);
//  delay(400);
//  tone(DYNAMIC, 523);
//  delay(150);
//  tone(DYNAMIC, 523);
//  delay(150);
//  tone(DYNAMIC, 493);
//  delay(400);
//  tone(DYNAMIC, 392);
//  delay(400);
//  tone(DYNAMIC, 440);
//  delay(400);
//  tone(DYNAMIC, 392);
//  delay(900);
  
//  Serial.println(ultrasonic.Ranging(CM));
//  delay(1000);  
//  scan();
//  sonar.write(90);
//  Serial.print("Left: ");
//  Serial.print(data[0]);
//  Serial.print(" Middle: ");
//  Serial.print(data[1]);
//  Serial.print(" Right: ");
//  Serial.println(data[2]);
//  delay(200);

//  digitalWrite(FORWARD_MINUS, LOW);
//  analogWrite(FORWARD_PLUS, 255);
//  delay(3000);
//  digitalWrite(FORWARD_PLUS, LOW);
//  delay(1000);
  
  
//  if(data[0] > distance && data[1] <= distance && data[2] > distance){
//    hand_out();
//    hand_belove();
//    delay(500);
//    hand_in();
//    hand_above();
//    delay(500);
//    rotate_inhourly(1000);
//    delay(1000);
//    hand_out();
//    delay(500);
//    rotate_hourly(1075);
//  }else if(data[0] > distance && data[1] > distance && data[2] <= distance){
//    rotate_hourly(150);
//    delay(1000);
//    hand_out();
//    hand_belove();
//    delay(500);
//    hand_in();
//    hand_above();
//    delay(1000);
//    rotate_inhourly(1100);
//    delay(1000);
//    hand_out();
//    delay(500);
//    rotate_hourly(1075);
//  }else if(data[0] <= distance && data[1] > distance && data[2] > distance){
//    rotate_inhourly(150);
//    delay(1000);
//    hand_out();
//    hand_belove();
//    delay(500);
//    hand_in();
//    hand_above();
//    delay(1000);
//    rotate_inhourly(1100);
//    delay(1000);
//    hand_out();
//    delay(500);
//    rotate_hourly(1075); 
//  } else if(data[0] > distance && data[1] <= distance && data[2] <= distance){
//    rotate_hourly(75);
//    delay(1000);
//    hand_out();
//    hand_belove();
//    delay(500);
//    hand_in();
//    hand_above();
//    delay(1000);
//    rotate_inhourly(1100);
//    delay(1000);
//    hand_out();
//    delay(500);
//    rotate_hourly(1075); 
//  } else if(data[0] <= distance && data[1] <= distance && data[2] > distance){
//    rotate_inhourly(75);
//    delay(1000);
//    hand_out();
//    hand_belove();
//    delay(500);
//    hand_in();
//    hand_above();
//    delay(1000);
//    rotate_inhourly(1100);
//    delay(1000);
//    hand_out();
//    delay(500);
//    rotate_hourly(1075); 
//  } else if(data[0] <= distance && data[1] <= distance && data[2] <= distance){
//    hand_out();
//    hand_belove();
//    delay(500);
//    hand_in();
//    hand_above();
//    delay(1000);
//    rotate_inhourly(1100);
//    delay(1000);
//    hand_out();
//    delay(500);
//    rotate_hourly(1075); 
//  }




  if (Serial.available() > 0) {
    Serial.println("1 - to up, 2 - to down, 3 - to hourly, 4 - to inhourly, 5 - to hand in, 6 - to hand out");
    Serial.println(isAbove?"Hand is above":"Hand is belove");
    Serial.println(isHolding?"Hand is holding something":"Hand is free");
    switch (Serial.read()) {
      case 49: {
        if(!isAbove){
          hand_above();  
        }
        break;
      } case 50: {
        if(isAbove){
          hand_belove();
        }
        break;
      } case 51:{
        rotate_hourly(1050);
        break;
      } case 52:{
        rotate_inhourly(1850);
        break;
      } case 53:{
        if(!isHolding){
          hand_in(); 
        }
        break;
      } case 54:{
        if(isHolding){
          hand_out(); 
        }
        break;
      } default: {
          Serial.println("Bad input");
          break;
        }
    }
    delay(100);
  }
}
void lift_up(int time) {
  digitalWrite(LIFT_PLUS, LOW);
  analogWrite(LIFT_MINUS, 255);
  delay(time);
  digitalWrite(LIFT_MINUS, LOW);
  isAbove = true;
}
void lift_down(int time) {
  digitalWrite(LIFT_MINUS, LOW);
  analogWrite(LIFT_PLUS, 255);
  delay(time);
  digitalWrite(LIFT_PLUS, LOW);
  isAbove = false;
}
void rotate_hourly(int time) {
  digitalWrite(ROTATE_MINUS, LOW);
  for(int i = 0; i < time/25; i++){
    analogWrite(ROTATE_PLUS, 255);
    delay(50);
    analogWrite(ROTATE_PLUS, 0);
    delay(50);
  }
  digitalWrite(ROTATE_PLUS, LOW);  
}
void rotate_inhourly(int time) {
  digitalWrite(ROTATE_PLUS, LOW);
  for(int i = 0; i < time/25; i++){
    analogWrite(ROTATE_MINUS, 255);
    delay(50);
    analogWrite(ROTATE_MINUS, 0);
    delay(50);  
  }
  digitalWrite(ROTATE_MINUS, LOW);
}
void hand_belove(){
  lift_down(5800);
}
void hand_above(){
  lift_up(7500);
}
void hand_in(){
  digitalWrite(HAND_MINUS, LOW);
  analogWrite(HAND_PLUS, 255);
  delay(800);
  digitalWrite(HAND_PLUS, LOW);
  isHolding = true;
}
void hand_out(){
  digitalWrite(HAND_PLUS, LOW);
  analogWrite(HAND_MINUS, 255);
  delay(500);
  digitalWrite(HAND_MINUS, LOW);
  isHolding = false;
}
//void scan(){
//  sonar.attach(SERVO);
//  for(int i = 0; i < 3; i++){
//    
//    sonar.write(65+i*25);
//    delay(250);
//    data[i] = ultrasonic.Ranging(CM);
//  }
//  sonar.detach();
//}


