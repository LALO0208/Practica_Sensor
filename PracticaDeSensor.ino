int adcValor=0;

void setup() {
  Serial.begin(9600);

}

void loop() {
  adcValor=analogRead(A1);
  int resultado = map(adcValor, 0, 1000, 0, 120);
  Serial.print(adcValor);
  delay(500);


 /* if (adcValor > 150){
    Serial.println("Alerta la luz es muy ALTA");
    delay(1000);
    }
  else {
      Serial.println("Alerta la luz es muy BAJA");
    delay(1000);
      }*/
}
