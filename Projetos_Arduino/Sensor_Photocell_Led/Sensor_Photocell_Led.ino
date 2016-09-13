// Pins
int sensorPin = 0;
int lightPin = 2;

// Variaveis
int led = 0;
int baixa = 200; // Led ativa
int alta = 500; //  Led desativa

void setup() {
  
  Serial.begin(9600);
  pinMode(lightPin,OUTPUT);
  
}

void loop() {

  int sensorValue = analogRead(sensorPin);

  if (sensorValue < baixa){
    digitalWrite(lightPin, HIGH);
  }
  
  if (sensorValue > alta){ 
    digitalWrite(lightPin, LOW);
  }
}
