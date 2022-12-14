int x=analogRead(A2);
void setup() {
    pinMode(A2,INPUT);
    Serial.begin(9600);
    
    
}

void loop() {
    if (x < 300){
      digitalWrite(A2,HIGH);
     x = analogRead(A2);
  Serial.println(x);
  
} }
