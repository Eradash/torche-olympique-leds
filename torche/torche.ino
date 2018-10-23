

int maximum = 255; //Valeur maximum des leds (MAX: 255)
int minimum = 100; //Valeur minimum des leds (MIN: 0)

int changeSpeed = 100; //Délais d'attente en ms

int leds[] = {1, 2, 3}; //Mettre tous les numéros de pin pour les leds ici

void setup() {
  for(int led : leds)
    pinMode(led, OUTPUT);
}

void loop() {
  for(int led : leds)
    analogWrite(led, random(minimum, maximum));  
  delay(changeSpeed);
}
