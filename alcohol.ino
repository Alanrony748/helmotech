void setup() {
  Serial.begin(115200);             // Start Serial Monitor
  randomSeed(analogRead(0));        // Seed randomness
}

void loop() {
  // --- Simulated Alcohol Sensor ---
  int alcoholValue = random(200, 600);  // Simulated analog value
  Serial.print("Alcohol Sensor Value: ");
  Serial.println(alcoholValue);

  // --- Simulated Accelerometer values (in g) ---
  float ax = random(-2000, 2000) / 1000.0;
  float ay = random(-2000, 2000) / 1000.0;
  float az = random(800, 1200) / 1000.0;  // Simulate gravity component

  // --- Simulated Gyroscope values (in °/s) ---
  float gx = random(-25000, 25000) / 100.0;
  float gy = random(-25000, 25000) / 100.0;
  float gz = random(-25000, 25000) / 100.0;

  Serial.println("---- Simulated IMU Data ----");
  Serial.print("Accel (g): X=");
  Serial.print(ax);
  Serial.print(" Y=");
  Serial.print(ay);
  Serial.print(" Z=");
  Serial.println(az);

  Serial.print("Gyro (°/s): X=");
  Serial.print(gx);
  Serial.print(" Y=");
  Serial.print(gy);
  Serial.print(" Z=");
  Serial.println(gz);
  Serial.println("----------------------------\n");

  delay(1000);  // 1 second delay
}
