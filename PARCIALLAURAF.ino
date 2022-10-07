// C++ code
//

const int PIN_ONE = 8;
const int PIN_TWO = 3;
const int PIN_THREE = 4;
const int PIN_FOUR = 5;
const int PIN_FIVE = 6;
const int BUZZER = 7;
int HUMIDITY_SENSOR;


void setup()
{
  pinMode(PIN_ONE, OUTPUT);
  pinMode(PIN_TWO, OUTPUT);
  pinMode(PIN_THREE, OUTPUT);
  pinMode(PIN_FOUR, OUTPUT);
  pinMode(PIN_FIVE, OUTPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop()
{
  int HUMIDITY_SENSOR = analogRead(A0);
  /*digitalWrite(PIN_ONE, HIGH);
  delay(200);
  digitalWrite(PIN_TWO, HIGH);
  delay(200);
  digitalWrite(PIN_THREE, HIGH);
  delay(200);
  digitalWrite(PIN_FOUR, HIGH);
  delay(200);
  digitalWrite(PIN_FIVE, HIGH);
  delay(1000);*/
  
  /*if(HUMIDITY_SENSOR>1000){
  digitalWrite(PIN_ONE, HIGH);
  digitalWrite(PIN_TWO, HIGH);
  digitalWrite(PIN_THREE, HIGH);
  digitalWrite(PIN_FOUR, HIGH);
  digitalWrite(PIN_FIVE, HIGH);
}*/
  if (HUMIDITY_SENSOR > 0 && HUMIDITY_SENSOR <60){
    digitalWrite(PIN_ONE,HIGH);
  }
  
   if (HUMIDITY_SENSOR > 60 && HUMIDITY_SENSOR <120){
    digitalWrite(PIN_TWO,HIGH);
  }
  
   if (HUMIDITY_SENSOR > 120 && HUMIDITY_SENSOR <180){
    digitalWrite(PIN_THREE,HIGH);
  }
  
    if (HUMIDITY_SENSOR > 180 && HUMIDITY_SENSOR <240){
    digitalWrite(PIN_FOUR,HIGH);
  }
  
   if (HUMIDITY_SENSOR > 240){
    digitalWrite(PIN_FIVE,HIGH);
   }
  
     
      if (HUMIDITY_SENSOR < 300){
    digitalWrite(PIN_ONE,LOW);
  }
  
  if (HUMIDITY_SENSOR < 299 && HUMIDITY_SENSOR > 400){
    digitalWrite(PIN_TWO,LOW);
   }
  
  
  
  
    
    
}
