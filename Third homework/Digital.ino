char income=0;
void setup()
{
  
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()>0)
  {
    income=Serial.read();
    income=income-'0';
    digitalWrite(4,LOW);
    delay(10);
    digitalWrite(2,income&1);
    digitalWrite(6,(income>>1)&1);
    digitalWrite(5,(income>>2)&1);
    digitalWrite(3,(income>>3)&1);
    delay(10);
    digitalWrite(4,HIGH);
  }
}
