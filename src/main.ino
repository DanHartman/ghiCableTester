#include <Bounce2.h>
#define BUTTON_PIN 13

// Instantiate a Bounce object
Bounce debouncer = Bounce(); 

void setup() {
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);


  // Setup the button with an internal pull-up :
  pinMode(BUTTON_PIN,INPUT_PULLUP);

  // After setting up the button, setup the Bounce instance :
  debouncer.attach(BUTTON_PIN);
  debouncer.interval(25); // interval in ms


  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);


}

int index = 2;
void loop() {
  debouncer.update(); // Update the Bounce instance
   
  if ( debouncer.fell() ) {
    if(index < 11) {
      index += 1;
      digitalWrite(index, LOW);
      digitalWrite(index - 1, HIGH);
    } else {
      digitalWrite(index, HIGH);
      index = 2;
      digitalWrite(index, LOW);
    }
  }
}

