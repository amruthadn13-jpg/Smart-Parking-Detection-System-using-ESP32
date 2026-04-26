#define trig 22
#define echo 23
#define led 12
#define buzzer 4
distance=0
duration=0
void setup(){
  Serial.begin(115200);
  pinMode(led,OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
}
void loop(){
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  duration=pulseIn(echo,HIGH);

  distance=duration*0.034/2
  Serial.println("Distance");
  Serial.println(distance);
  Serial.println("cm");

  if(distance<30){
    digitalWrite(led, HIGH);
    digitalWrite(buzzer,HIGH);
    Serial.println("Parking Slot is Occupied ");
  }
  else{
    digitalWrite(led,LOW);
    digitalWrite(buzzer,HIGH);
    Serial.println("Parking Slot is Empty ");
  }
  delay(2000);
}
