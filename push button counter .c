int buttonpin = 2;
int buttonState = 0;
int lastButtonState = 0;
int counter =0;

void setup() {
  pinMode(buttonpin , INPUT);
  Serial.begin(9600);
}
void loop () {
  buttonState = digitalRead(buttonpin);
  if (buttonState == HIGH && lastButtonState == LOW) {
    counter++;
    Serial.print("Button Pressed : ");
    Serial.println(counter);
    delay(200);
  }
  lastButtonState = buttonState;
}
