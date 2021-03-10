int number = 0;         // -32768~32767 범위의 변수 number 설정, 초기값은 0

void setup() {
  Serial.begin(9600);   // 9600bps로 시리얼 통신 설정
}

void loop() {
 Serial.print(number);  
 Serial.println(" nsec");   
 delay(200);   
 number++;

 if (number < 5000) {
  number += 200;
 }else {
  number = 0;
 }
}
