/*
 Fade

 Este ejemplo muestra  como hacer una desaparición de luz en el LED en los pines 11, 10 y 9
 usando la función analogWrite()

 La función analogWrite() usa PWM, así que si quieres cambiar los pines que estas usando
 asegúrate de usar otro pin con la capacidad de usar PWM, en la
 mayoría de Arduinos/Genuino los pines PWM están identificados con un signo "~"
 como por ejemplo ~3, ~5, ~6, ~9, ~10 y ~11.

 Este ejemplo esta bajo dominio público

 */

int led = 11;           // the PWM pin the LED is attached to
int led1 = 10;
int = led2 = 9;
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
  pinMode(led, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // set the brightness of pin 9:
  analogWrite(led, brightness);
  analogWrite(led1, brightness);
  analogWrite(led2, brightness);

  // change the brightness for next time through the loop:
  brightness += fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
// Editado de Fade por Benja Robles :D

