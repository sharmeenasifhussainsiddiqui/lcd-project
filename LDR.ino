const int ledPin = 10;  
const int ldrPin = A0;  


void setup() {

  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);  
  pinMode(ldrPin, INPUT);  
}

void loop() {

  int ldrStatus = analogRead(ldrPin);  



   if (ldrStatus <=300) {

    digitalWrite(ledPin, HIGH);              
 
   
   }
  else {

    digitalWrite(ledPin, LOW);          
   
  }
 
}
