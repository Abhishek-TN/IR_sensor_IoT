int ir_sensor = 7;
int led = 6;

void setup() {
  // put your setup code here, to run once:
pinMode(ir_sensor , INPUT);
pinMode(led,OUTPUT);

} 

void loop() {
  // put your main code here, to run repeatedly:
int data = digitalRead(ir_sensor);
if(data == 1){
  digitalWrite(led, HIGH);
}
else{
  digitalWrite(led,LOW);
}
Serial.println(data);

}
