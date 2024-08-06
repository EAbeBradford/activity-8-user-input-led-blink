#define LED_PIN 8

int blinkrate = 1000;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.setTimeout(10);
  pinMode(LED_PIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:





  //blink
  digitalWrite(LED_PIN, HIGH);
  delay(userBlinkRate());
  digitalWrite(LED_PIN, LOW);
  delay(userBlinkRate());

}

int userBlinkRate(){
  if(Serial.available() > 0 ){
    blinkrate = Serial.parseInt();
    if(blinkrate > 1000 || blinkrate < 100){
      blinkrate = 1000;
    }
  }

  return blinkrate;
}
