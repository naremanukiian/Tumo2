const int potPin = A0;  

void setup() {
  Serial.begin(9600);   
}

void loop() {
  int potValue = analogRead(potPin); 
  Serial.print("Potentiometer value: ");
  Serial.println(potValue);           
  delay(100);                         
}

const int potPin = A0;    
const int ledPin = 13;     

void setup() {
  pinMode(ledPin, OUTPUT);  
  Serial.begin(9600);      
}