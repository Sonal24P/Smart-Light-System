String voice;
#define LED  5
void setup()
{
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
 }
  
  void loop()
  {
    while(Serial.available())
    {
      delay(10);
       voice= Serial.readString();
      if (voice.length()>0)
      {
        Serial.println(voice);
           if(voice=="*on#")
           {
            analogWrite(LED,255);
            }
            if(voice=="*medium#")
            {analogWrite(LED,100);}
           
           Serial.println(voice);
           if(voice=="*lo#")
            {analogWrite(LED,30);}
           
          if(voice=="*of#")  
          {
            digitalWrite(LED,LOW);
            }  
     
       }
    }
  }
