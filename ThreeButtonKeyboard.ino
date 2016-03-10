// NOTE: use of Keyboard requires Teensy-duino to be installed.  Arduino UNO,
// for example, does not support this.

// define int values for the three colors, to serve as array keys
const int green = 0;
const int yellow = 1;
const int red = 2;

const int buttonPins[] = {2, 3, 4};
const int ledPins[] = {8, 9, 10};
//char* buttonKeys[] = {"green", "yellow", "red"};
char* buttonKeys[] = {KEY_F6, KEY_F7, KEY_F8};

void setup() {
  //Serial.begin(9600);
  Keyboard.begin();
  //Serial.println("begin!");
  // initialize the LED pin as an output:
  for(int i=0;i<3;i=i+1) {
    pinMode(ledPins[i], OUTPUT);
    pinMode(buttonPins[i], INPUT_PULLUP);
  }
}

void loop(){
  // read the state of the pushbutton value:
  for (int i = 0; i < 3; i = i+1) {
   if (digitalRead(buttonPins[i]) == HIGH ) {
   } else {
      digitalWrite(ledPins[i], HIGH);
      //Serial.println(buttonKeys[i]);
      Keyboard.set_modifier(MODIFIERKEY_CTRL);
      Keyboard.send_now();
      Keyboard.set_modifier(MODIFIERKEY_CTRL | MODIFIERKEY_ALT);
      Keyboard.send_now();
      Keyboard.set_key1(buttonKeys[i]);
      Keyboard.send_now();
      // release keys
      Keyboard.set_modifier(0);
      Keyboard.set_key1(0);
      Keyboard.send_now();
      delay(1000);
      digitalWrite(ledPins[i], LOW);
   }
  }
}
