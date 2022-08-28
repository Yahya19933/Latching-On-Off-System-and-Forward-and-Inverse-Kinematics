int pinButton = 8;
int Relay = 2;
int stateButton;
int debounce = 300;//for debounce delay issues
unsigned long CT=0;//Current Time use for millis()
unsigned long PT=0;//Present Time use for millis()
const unsigned long ON = 3000; //stay on for 3000 ms

void setup() {
  pinMode(pinButton, INPUT);
  pinMode(Relay, OUTPUT);
}

void loop() 
{
  stateButton = digitalRead(pinButton);  
  if(stateButton == HIGH) 
  {
    delay(debounce);
    digitalWrite(Relay, HIGH);
    stateButton = digitalRead(pinButton); 
      while( (CT - PT < ON) && (stateButton == LOW)  )//wait for delay or button press , use millis() for multitsking instead of delay()
      {
                stateButton = digitalRead(pinButton); 
                CT=millis();//Update Current time
        }
    PT=CT;//Update Past time
    delay(debounce);
  }
  digitalWrite(Relay, LOW);
}
