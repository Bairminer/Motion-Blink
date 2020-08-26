// Security Relay - Pro Micro 5v
// @fabl3r

int relayPin = 3;  // relay pin
int inPin = 2;    // signal input pin
int val = 0;      // variable to store the read value
int count = 0;    // stores blink count

void setup() {

  pinMode(relayPin, OUTPUT);  // sets the digital pin 3 as output
  pinMode(inPin, INPUT);    // sets the digital pin 2 as input

}

void loop() {

  val = digitalRead(inPin);   // read the input pin
  if (val==1) {   // check for input signal

    while (count <= 10) { // blink 10 times

      digitalWrite(relayPin, HIGH);  // turns relay on
      delay(3000); // wait 3 seconds
      digitalWrite(relayPin, LOW);  // turns relay off
      delay(3000); // wait 3 seconds
      count += 1; // add 1 to blink count each blink

    }

    count = 0; // reset blink count when done

  }
}
