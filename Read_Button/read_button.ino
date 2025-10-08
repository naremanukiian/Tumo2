const int buttonPin = 2; 
int buttonState = 0;     

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); 
  Serial.begin(9600);              
}

void loop() {
  buttonState = digitalRead(buttonPin); 
  Serial.println(buttonState);          
  delay(100);                           
}