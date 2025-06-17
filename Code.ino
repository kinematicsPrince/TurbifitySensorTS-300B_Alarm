int buzzer = 10; // KY-006 (passive buzzer)
int sensor = A0; // TS-300B (turbidity sensor)
int water = 0; // How dirty is the water
//int threshold = 850; // Analog input goes from 0 to 1023
int threshold = 0;
int tolerance = 50; // Modify this value to get a higher or lower sensitiviy, the higher the less sensitive

void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT);
  water = analogRead(sensor);
  threshold = water - tolerance;
}

void loop() {
  water = analogRead(sensor);
  Serial.println(water);
  if (water < threshold){
    digitalWrite(9, HIGH);
    tone(buzzer, 2500, 500);
    delay(150);
    digitalWrite(9, LOW);
    tone(buzzer, 2500, 500);
    delay(150);
    noTone(buzzer);
    digitalWrite(9, HIGH); 
    delay(150);
    digitalWrite(9, LOW); 
    delay(150);
  }
  

}