int number = 0;

void setup() {
  Serial.begin(9600); 
}

void loop() {
 Serial.print(number);  
 Serial.println(" nsec");   
 delay(200);   
 //number++;

 if (number < 5000) {
  number += 200;
 }else {
  number = 0;
 }
}
