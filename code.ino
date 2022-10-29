IR sensor
BY DEBANKAR SHUBHRAM


void setup() {
     Serial.begin (9600);
    pinMode (2,INPUT);       //defining about the digital pin 
    pinMode (13,OUTPUT);      //defining about the  led pin 

}

void loop() {
  if (digitalRead(2)== LOW)    //condition
  {
    digitalWrite(13,HIGH);      //statement according to condition
    delay(10);
  }
  else 
  {
    digitalWrite(13,LOW);     //else contion with statement
    delay(10);
  }
  

}
