

#define ledPin 11 //Declaram pinul 11 ca fiind pinul pentru LED

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT); //Seteaza pinul 11 de pe portul digital ca output

}



void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH); //Aprinde LED
  delay(500);            // pune pauza o jumatate de secunda
  digitalWrite(ledPin, LOW);  //Stinge LED
  delay(1000);            //pune din nou pauza o secunda

}
