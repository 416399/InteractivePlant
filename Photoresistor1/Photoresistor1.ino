const int photo = 7; 
const int LED = 9;

void setup() {
  //Outputs
  pinMode(LED, OUTPUT); 
  digitalWrite(LED, LOW); 
  //inputs
  pinMode(photo, INPUT_PULLUP);
}

void loop(){
  //if/else loop checks if photoresistor is high or low
  if(digitalRead(photo) ==HIGH){
    digitalWrite(LED, HIGH);
  }
  else{
    digitalWrite(LED, LOW);
  }
}
