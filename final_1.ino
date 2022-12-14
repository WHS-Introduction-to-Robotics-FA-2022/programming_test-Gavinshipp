*

*/

void setup()
{
    // set up output pins
    pinMode(10,OUTPUT);
    pinMode(3,OUTPUT);
    
    // blink green LED on and off twice
       digitalWrite(10,HIGH);
       digitalWrite(3,HIGH);
       delay(1000);
    
    // wait three seconds
    
}

void loop()
{
    // blink both LEDs on and off alternatively
    digitalWrite(3,HIGH);
    delay(650);
    digitalWrite(3,LOW);
    delay(0);
    
    digitalWrite(10,HIGH);
    delay(650);
    digitalWrite(10,LOW);
    delay(0);
    
}
