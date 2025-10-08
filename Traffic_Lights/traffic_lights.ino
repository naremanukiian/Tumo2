#define red_green 2
#define green_red 3
#define orange 4

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  digitalWrite(red_green, LOW);  
  digitalWrite(green_red, HIGH); 
  digitalWrite(orange, LOW);     
  delay(25000);                  

  digitalWrite(orange, HIGH);    
  delay(5000);                   
  digitalWrite(orange, LOW);    
  digitalWrite(green_red, LOW);  

  digitalWrite(red_green, HIGH); 
  delay(25000);                  
  
  digitalWrite(orange, HIGH);    
  delay(5000);                   
  digitalWrite(orange, LOW);     
}