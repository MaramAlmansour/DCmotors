void setup() {
  
  pinMode(6, OUTPUT); 
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  
}

void loop () {
  
 // moving clockwise 
  digitalWrite(5,HIGH);
  digitalWrite(3,HIGH);
 
  delay(5000);  //1000ms =1second 
 digitalWrite(5,LOW);
  digitalWrite(3,LOW);
  
// moving anti- clockwise 
  digitalWrite(6,HIGH);
  digitalWrite(4,HIGH);
  
delay(5000);  //1000ms =1second 
}

  