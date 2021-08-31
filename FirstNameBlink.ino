/*
  First Name Blinky

  Display name as blink pattern formed using morse code
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
//calling procedures to blink name pattern
  N(); A(); N(); D(); I(); N(); I();
  
  }

//N is dat-dit '-.'
void N()
{
  line(); dot();
  delay(1000);
}

//A is di-dat '.-'
void A()
{
  dot(); line();
  delay(1000);
}

//D is dat-di-dit '-..'
void D()
{
  line(); dot(); dot();
  delay(1000);
}

//I is di-dit '.-'
void I()
{
  dot(); dot();
  delay(1000);
}

//K is dat-di-dat '-.-'
void K()
{
  line(); dot(); line();
  delay(1000);
}

//U is di-did-dat '..-'
void U()
{
  dot(); dot(); line();
  delay(1000);
}

//S is di-di-dit '...'
void S()
{
  dot(); dot(); dot();
  delay(1000);
}

//H is di-di-di-dit '....'
void H()
{
  dot(); dot();dot(); dot();
  delay(1000);
}

//L is di-dah-di-dit '.-..'
void L()
{
  dot(); line(); dot(); dot();
  delay(1000);
}

//the dash in morse calls for a longer blink 
void line()
{
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1500);                       // wait for one and a half second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(150);
}

//the dot in morse calls for a shorter blink
void dot()
{
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for half a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(150);
}
