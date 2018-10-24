 int leftForward=2;
 int leftBackward=3;
 int rightForward=4;
 int rightBackward=5; 
 int leftsensor=12;
 int rightsensor=11;

int cap1,cap2;
void setup() {

pinMode(leftsensor,INPUT);

pinMode(rightsensor,INPUT);

pinMode(leftForward,OUTPUT);

pinMode(leftBackward,OUTPUT);

pinMode(rightForward,OUTPUT);

pinMode(rightBackward,OUTPUT);

}

void loop() {

cap1=digitalRead(leftsensor);

cap2=digitalRead(rightsensor);

if(cap1==HIGH && cap2==HIGH)

{

digitalWrite(leftForward,HIGH);

digitalWrite(rightForward,HIGH);

digitalWrite(leftBackward,LOW);

digitalWrite(rightBackward,LOW);

}

else if(cap1==HIGH && cap2==LOW)

{

digitalWrite(leftForward,HIGH);

digitalWrite(leftBackward,LOW);

digitalWrite(rightForward,LOW);

digitalWrite(rightBackward,LOW);

}

else if(cap1==LOW && cap2==HIGH)

{

digitalWrite(leftForward,LOW);

digitalWrite(leftBackward,LOW);

digitalWrite(rightForward,HIGH);

digitalWrite(rightBackward,LOW);

}

else

{

digitalWrite(leftForward,LOW);

digitalWrite(leftBackward,LOW);

digitalWrite(rightForward,LOW);

digitalWrite(rightBackward,LOW);

}

}
