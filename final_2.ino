int bluepin=11;
int greenpin=10;
int redpin=9;
void setup() {
    pinMode(greenpin,OUTPUT);
    pinMode(bluepin,OUTPUT);
    pinMode(redpin,OUTPUT);
}

void loop() {
    analogWrite(greenpin,16);
    analogWrite(bluepin,2);
    analogWrite(redpin,128);
}
