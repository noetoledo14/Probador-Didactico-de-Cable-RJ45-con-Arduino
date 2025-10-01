// Universidad Tecnologica de Matamoros
// Dr Noé Toledo Gonzalez 
// Codigo de revisión de cableado Rj45 


int pins[8] = {2, 3, 4, 5, 6, 7, 8, 9};  // pines requeridos 

void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(pins[i], OUTPUT);  // Inicializa pines de salida
  }
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(pins[i], HIGH);  // Enviar señal

    if (digitalRead(pins[i]) == HIGH) {
      Serial.print("Cable "); Serial.print(i+1); Serial.println(" OK");
    } else {
      Serial.print("Cable "); Serial.print(i+1); Serial.println(" Error");
    }

    digitalWrite(pins[i], LOW);  // Apagar la señal después de la verificación
    delay(500);  // Pausa entre lecturas
  }
}
