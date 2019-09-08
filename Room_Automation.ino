//Code Written by RAJDEEP BARUAH

#include<IRremote.h>

int REC_PIN = 10;
int signal;
IRrecv irrecv(REC_PIN);
decode_results results;

void setup() {
  
  irrecv.enableIRIn();
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop() {
  if(irrecv.decode(&results))
  {
    signal=(results.value);
    Serial.println(signal);
    
    if(signal==-29153||signal==-32641)
        digitalWrite(9,HIGH);
    else if(signal==-15617||signal==16575)
        digitalWrite(9,LOW);

    else if(signal==25503||signal==8415)
        digitalWrite(8,HIGH);
    else if(signal==-24481)
        digitalWrite(8,LOW);

    else if(signal==-6209||signal==-8161)
        digitalWrite(2,HIGH);
    else if(signal==4335)
        digitalWrite(2,LOW);

    else if(signal==-637||signal==-16321)
        digitalWrite(3,HIGH);
    else if(signal==-21189||signal==24735)
        digitalWrite(3,LOW);

    else if(signal==-28561)
        digitalWrite(4,HIGH);
    else if(signal==15395||signal==255)
        digitalWrite(4,LOW);

   else if(signal==3355||signal==-10201)
        digitalWrite(5,HIGH);
    else if(signal==-6305||signal==-2041)
        digitalWrite(5,LOW);
  
    else if(signal==-16801||signal==22695)
        digitalWrite(6,HIGH);
    else if(signal==-21285||signal==30855)
        digitalWrite(6,LOW);

   else if(signal==12495)
        digitalWrite(7,HIGH);
    else if(signal==28815)
        digitalWrite(7,LOW);
    
  irrecv.resume();
  }
}
