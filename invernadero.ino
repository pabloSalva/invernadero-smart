int PIN_RED   = 27;
int PIN_GREEN = 26;
int PIN_BLUE  = 25;

void setup() {
  pinMode(5,   OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(35, OUTPUT);
  pinMode(PIN_BLUE,  OUTPUT);
  pinMode(PIN_GREEN,  OUTPUT);
  pinMode(PIN_RED,  OUTPUT);

}

void loop() {
  // color code #00C9CC (R = 0,   G = 201, B = 204)
  //ledcWrite(PIN_RED,   0);
  // ledcWrite(PIN_GREEN, 201);
  // analogWrite(PIN_BLUE,  204);

  digitalWrite(PIN_RED, HIGH);
  delay(1000); // keep the color 1 second
  digitalWrite(PIN_RED, LOW);
  delay(1000);

   digitalWrite(PIN_GREEN, HIGH);
  delay(1000); // keep the color 1 second
  digitalWrite(PIN_GREEN, LOW);
  delay(1000);

  
     digitalWrite(PIN_BLUE, HIGH);
  delay(1000); // keep the color 1 second
  digitalWrite(PIN_BLUE, LOW);
  delay(1000);
  
  
  // digitalWrite(PIN_RED, HIGH);

  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
  delay(500);   

  // color code #F7788A (R = 247, G = 120, B = 138)
  //ledcWrite(PIN_RED,   247);
  //ledcWrite(PIN_GREEN, 120);
  // analogWrite(PIN_BLUE,  138);

//  delay(1000); // keep the color 1 second

  // color code #34A853 (R = 52,  G = 168, B = 83)
 // ledcWrite(PIN_RED,   52);
 // ledcWrite(PIN_GREEN, 168);
  // analogWrite(PIN_BLUE,  83);

  // delay(1000); // keep the color 1 second

}