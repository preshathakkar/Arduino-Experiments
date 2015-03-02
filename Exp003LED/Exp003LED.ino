// Example 01 : Blinking LED
//
// Copy and paste this example into an empty Arduino sketch

int LED  = 13;   // LED connected to
//int LEDR = 6;                // digital pin 13

void setup()
{
  pinMode(LED, OUTPUT);    // sets the digital
                         // pin as output
  digitalWrite(LED, HIGH);   // turns the LED on
  //delay(2000);
  //digitalWrite(LED, LOW);   // turns the LED on
  
  //LED = 4;
  //pinMode(LEDR, OUTPUT);    // sets the digital
  
  //digitalWrite(LEDR, HIGH);   // turns the LED on
  //Serial.print(LED);
  //Serial.print(LEDR);
  
  //delay(2000);
  
  //delay(12000);               // waits for a second
  //digitalWrite(LED, LOW);    // turns the LED off
  //delay(3000);               // waits for a second

}

void loop()
{
}
