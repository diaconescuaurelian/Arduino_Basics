

#define ledPin 11

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT); //Seteaza pinul 11 de pe portul digital ca output

}



void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH); //Aprinde LED
  delay(500);            // pune pauza o secunda
  digitalWrite(ledPin, LOW);  //Stinge LED
  delay(1000);            //pune din nou pauza o secunda

}
