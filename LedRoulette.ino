long randnum;
int buttonState = 0;         // current state of the button
int lastButtonState = 0;     // previous state of the button
void setup() {
  // put your setup code here, to run once:

pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
//8 == led3
//4 == led4
pinMode(12, INPUT);
const uint8_t led_array[9] = {2,3,8,4,5,6,7,8,9};
  randomSeed(analogRead(0));
}

void loop() {
  buttonState = digitalRead(12);
  const uint8_t led_array[9] = {2,3,8,4,5,6,7,8,9};
  // put your main code here, to run repeatedly:
  for(int i=0; i<9;i++){
    digitalWrite(led_array[i], HIGH);
    delay(50);
    digitalWrite(led_array[i], LOW);
  }
if (buttonState != lastButtonState) {
    // if the state has changed, increment the counter
    if (buttonState == HIGH) {
    digitalWrite(randnum, HIGH);
    delay(5000);
    digitalWrite(randnum, LOW);
    } 
    delay(50);
  }
randnum = random(2,9);

}
