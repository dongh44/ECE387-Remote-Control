#include <IRremote.h>
  
int RECV_PIN = 11;
int LED_PIN=4;
int a=0;
IRrecv irrecv(RECV_PIN);
  
decode_results results;
  
void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); 
  pinMode(LED_PIN,OUTPUT);
}
  
void loop() {
  if (irrecv.decode(&results)) {
if(results.value==0x4CB3817E &a==0) 
{
    digitalWrite(LED_PIN,HIGH);
a=1;
}
else if(results.value==0x4CB3817E &a==1)
{
digitalWrite(LED_PIN,LOW);
a=0;
}
    irrecv.resume(); 
  }
}
