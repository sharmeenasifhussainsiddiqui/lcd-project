int Pin = 12;         //relay pin
int pirPin = 7;      //PIR sensor pin
int pirState = LOW;  //Initially set PIR state LOW i.e. assume no person in the romm
int val;             //Read the value of PIR Sensor and save it in integer variable var

void setup()
{
  Serial.begin(9600);     //baud rate = 9600bps
  pinMode(Pin, OUTPUT);   //configure relay pin as output
  pinMode(pirPin, INPUT);  //configure PIR sensor pin as input
}

void loop()
{
  val = digitalRead(pirPin);    //Read the value of PIR sensor
  if (val == HIGH)
    //if any person enters value of sensor will be high
  {
    digitalWrite(Pin, HIGH); //turn the relay on
    Serial.print("Presence of moving object!");
    Serial.println("Light on.");
   if (pirState == LOW)   //initially we have set the pir state to low
    {
      pirState = HIGH;    //turn the pirState high
    }
  }
  else
  {
    digitalWrite(Pin, LOW);
    Serial.print("!");
    Serial.println("Light off.");
    if (pirState == HIGH)
    {
      pirState = LOW;
    }
  }
}
