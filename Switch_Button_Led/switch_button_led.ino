const int buttonPin = 2;
const int ledPin = 13;

int ledState = LOW;
int buttonState = 0;
int lastButtonState = 0;

void setup()
{
  pinMode ( buttonPin, INPUT );
  pinMode ( ledPin, OUTPUT );
  
  Serial.begin(9600);
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  
  if ( buttonState == HIGH & lastButtonState == LOW )
  {
    ledState = !ledState;
    digitalWrite(ledPin, ledState);
    delay(50);
   }
  lastButtonState = buttonState;
  
  Serial.print("Digital: ");
  Serial.print(buttonState);
  
  int analogValue = analogRead(buttonPin);
  Serial.print(" | Analog: ");
  Serial.println(analogValue);
  
  delay(100);
}