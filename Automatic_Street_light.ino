#define LDR 4
#define RELAY 13

void setup() 
{
  Serial.begin(9600);
  pinMode(RELAY, OUTPUT);
  pinMode(LDR, INPUT);  
 
}

void loop() 
{
  int sensorValue = digitalRead(LDR);
  // When there is light we will get 0 value and when no light we will get 1
  Serial.println(sensorValue);
  
  if (sensorValue == 0)
  {
    digitalWrite(RELAY, LOW);  
  delay(1000);
  }
  if(sensorValue == 1)
  {
    digitalWrite(RELAY, HIGH);    
delay(1000);  
  }
} 
