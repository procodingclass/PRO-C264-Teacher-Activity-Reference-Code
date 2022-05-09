void setup()
{
  Serial.begin(9600);
  Serial.setTimeout(100);
  pinMode(13, OUTPUT);
}

void loop()
{
  if (Serial.available()){
  	String data = Serial.readString();
    if (data  ==  "hello i am arduino 1"){
      digitalWrite(13,HIGH);
      delay(500);
      digitalWrite(13,LOW);
    }
  }
}