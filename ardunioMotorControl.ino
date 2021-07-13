#define motorRight1  11
#define motorRight2  10
#define pot A1
//#define motorRightEnable  13
#define motorLeft1  9
#define motorLeft2  8
//#define motorLeftEnable  12
#define buttonForward  7
#define buttonRight  6
#define buttonBack  5
#define buttonLeft  4
int motorSpeed;
void setup() {
  pinMode(motorRight1,OUTPUT);
  pinMode(motorRight2,OUTPUT);
  pinMode(motorLeft1,OUTPUT);
  pinMode(motorLeft2,OUTPUT);
}

void loop() {
  motorSpeed = analogRead(pot) /4;
  if(digitalRead(buttonForward)){
  goForward();
  delay(500);
}
    
else if(digitalRead(buttonRight)){
  goRight();
  delay(1000);
  
}
else if(digitalRead(buttonBack))  { 

  delay(500);
    goBack();

}
else if(digitalRead(buttonLeft)){
  
  goLeft();
  delay(500);
  }
  else{
    
    goForward();
    delay(500);
  }
}

void goBack(){
  
  analogWrite(motorRight1,0);
  analogWrite(motorRight2,motorSpeed);
  //digitalWrite(motorRightEnable,HIGH);

  
  analogWrite(motorLeft1,0);
  analogWrite(motorLeft2,motorSpeed);
  //digitalWrite(motorLeftEnable,HIGH);
delay(500);
}
void goForward(){
  
 analogWrite(motorRight1,motorSpeed);
 analogWrite(motorRight2,0);
// digitalWrite(motorRightEnable,motorSpeed);

  
  analogWrite(motorLeft1,motorSpeed);
  analogWrite(motorLeft2,0);
 // digitalWrite(motorLeftEnable,motorSpeed);  
delay(500);
}
void goRight(){
  analogWrite(motorRight1,0);
  analogWrite(motorRight2,0);
  //digitalWrite(motorRightEnable,HIGH);

  
  analogWrite(motorLeft1,motorSpeed);
  analogWrite(motorLeft2,0);
//  digitalWrite(motorLeftEnable,HIGH);
delay(500);
}
void goLeft(){
  analogWrite(motorRight1,motorSpeed);
  analogWrite(motorRight2,0);
//  digitalWrite(motorRightEnable,HIGH);

  
  analogWrite(motorLeft1,0);
  analogWrite(motorLeft2,0);
  //digitalWrite(motorLeftEnable,HIGH);
delay(500);
}
