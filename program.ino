long duration,distance,period,dis,space,hours;
void setup(){
  Serial.begin(9600);
  pinMode(11,INPUT);//us1 echo
  pinMode(12,OUTPUT);//us1 trig
  pinMode(3,OUTPUT);//BUZZER 1
  pinMode(8,INPUT);//us1 ECHO
  pinMode(9,OUTPUT);//us2 trig
  pinMode(4,OUTPUT);//buzzer 2
  pinMode(5,OUTPUT);//for relay trigger
  pinMode(6,INPUT );//FOR US 3 ECHOO
  pinMode(7,OUTPUT);//FOR US 3 TRIG
}
void loop(){
  digitalWrite(12,LOW);
  delay(10);
  digitalWrite(12,HIGH);
  delay(10);
  digitalWrite(12,LOW);
  duration= pulseIn(11,HIGH);
  distance=duration/58;
  Serial.println("distance: ");
  Serial.println(distance);
  if(distance<25){
    digitalWrite(5,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
     delay(1000);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    
  }
   digitalWrite(9,LOW);
  delay(10);
  digitalWrite(9,HIGH);
  delay(10);
  digitalWrite(9,LOW);
  period= pulseIn(8,HIGH);
  dis=period/58;
  Serial.println("dis: ");
  Serial.println(dis);
 
  if(dis<18){
    digitalWrite(5,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
     delay(1000);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    
  }
   digitalWrite(7,LOW);
  delay(10);
  digitalWrite(7,HIGH);
  delay(10);
  digitalWrite(7,LOW);
  space= pulseIn(6,HIGH);
  hours=space/58;
  Serial.println("hours: ");
  Serial.println(hours);
 
  if(hours<30){
    digitalWrite(5,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
     delay(1000);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    
  }

}

