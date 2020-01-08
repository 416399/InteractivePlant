const int ledPin = 13;

const int ldrPin = A0;

void setup() {

Serial.begin(9600);

pinMode(ledPin, OUTPUT);

pinMode(ldrPin, INPUT);

}

void loop() {

int ldrStatus = analogRead(ldrPin);

if (ldrStatus <= 400) {

digitalWrite(ledPin, HIGH);

Serial.print("Its DARK, please put me in the sunlight.");

Serial.println(ldrStatus);

} 
if( ldrStatus>=900)
{
  digitalWrite(ledPin, HIGH);
  Serial.print("It's TOO BRIGHT, please stop.");
  Serial.println(ldrStatus);
}
if (ldrStatus >= 401 && ldrStatus <= 899)
{
  digitalWrite(ledPin, LOW);
  Serial.print("This is perfect, thank you.");
  Serial.println(ldrStatus); 
}


}
