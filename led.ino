int LED=13;
void setup() {
pinMode(LED,OUTPUT);
Serial.begin(9600);
}
void Function_One(){
  for(int i=0;i<255;i++){
    analogWrite(LED,i);
    delay(10);
    }
}
  void Function_Two(){
  for(int i=255;i>0;i--){
    analogWrite(LED,i);
    delay(10);
    }
}
void loop(){
  Function_One();
  Serial.write("ONE");
  Function_Two();
  Serial.write("TWO");
}