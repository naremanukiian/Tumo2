const int buttonPin = 2;
const int ledPin = 13;
int buttonState = 0;

void setup()
{
  pinMode ( buttonPin, INPUT );
  pinMode ( ledPin, OUTPUT );
}

void loop ()
{
  buttonState = digitalRead (buttonPin);
  digitalWrite ( ledPin, buttonState );
}