int left_sensor = 2 ;
int right_sensor = 3 ;
int left_motorforward = 4;
int right_motorforward = 5;
int left_motorbackward = 6;
int right_motorbackward = 7;


void setup() {
  // put your setup code here, to run once:

 pinMode (left_sensor,INPUT);
 pinMode (right_sensor,INPUT);
 pinMode (left_motorforward,OUTPUT);
 pinMode (right_motorforward,OUTPUT);
 pinMode (left_motorbackward,OUTPUT);
 pinMode (right_motorbackward,OUTPUT);
 

}

void loop() {
  // put your main code here, to run repeatedly:
 if (digitalRead(left_sensor<500) && (right_sensor<500)){  //forward

  digitalWrite(left_motorforward,255);
  digitalWrite(right_motorforward,255);
 }
 else if (digitalRead(left_sensor>500) && (right_sensor<500)){ //left
  
   digitalWrite(left_motorforward,0);
  digitalWrite(right_motorforward,255);

}
 else if (digitalRead(left_sensor<500) && (right_sensor>500)){ //right
  
   digitalWrite(left_motorforward,255);
  digitalWrite(right_motorforward,0);

}
 else if (digitalRead(left_sensor>500) && (right_sensor>500)){ //stop
  
   digitalWrite(left_motorforward,0);
  digitalWrite(right_motorforward,0);

}

}
