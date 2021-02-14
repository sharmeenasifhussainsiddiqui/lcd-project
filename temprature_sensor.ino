int hot=11;
int normal=12;
int cold=13;
float sensor=0;
float celsius=0;
float voltage=0;
void setup() {
pinMode(hot,OUTPUT);
pinMode(cold,OUTPUT);
pinMode(normal,OUTPUT);

}

void loop() {
  sensor=analogRead(0);
  voltage=sensor*5000/1024;
  voltage=voltage-500;
  celsius=voltage/10;

  if(celsius>= 26)
 {
  digitalWrite(hot,HIGH);
  delay(1000);
  digitalWrite(hot,LOW);
 
 }
 else if (celsius<26 && celsius>20)
 {digitalWrite(normal,HIGH);
 delay(1000);
 digitalWrite(normal,LOW);
 
 }
 else{
  digitalWrite(cold,HIGH);
 
 delay(1000);
 digitalWrite(cold,LOW);
 }

}
