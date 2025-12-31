// RGB LED pins (PWM)
const int greenLEDPin = 9;   // پایه LED سبز
const int redLEDPin   = 11;  // پایه LED قرمز
const int blueLEDPin  = 10;  // پایه LED آبی

// Photoresistor sensor pins
const int redSensorPin   = A0; // سنسور نور قرمز
const int greenSensorPin = A1; // سنسور نور سبز
const int blueSensorPin  = A2; // سنسور نور آبی

// Variables for sensor and LED values
int redValue = 0;     // مقدار LED قرمز
int greenValue = 0;   // مقدار LED سبز
int blueValue = 0;    // مقدار LED آبی

int redSensorValue = 0;   // مقدار خام سنسور قرمز
int greenSensorValue = 0; // مقدار خام سنسور سبز
int blueSensorValue = 0;  // مقدار خام سنسور آبی

void setup() {
  Serial.begin(9600); // شروع ارتباط سریال

  pinMode(greenLEDPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);
}

void loop() {
  // Read sensors
  redSensorValue = analogRead(redSensorPin);
  delay(5);
  greenSensorValue = analogRead(greenSensorPin);
  delay(5);
  blueSensorValue = analogRead(blueSensorPin);

  // Print raw values
  Serial.print("Raw Sensor Values\tRed: ");
  Serial.print(redSensorValue);
  Serial.print("\tGreen: ");
  Serial.print(greenSensorValue);
  Serial.print("\tBlue: ");
  Serial.println(blueSensorValue);

  // Map 0–1023 → 0–255
  redValue = redSensorValue / 4;
  greenValue = greenSensorValue / 4;
  blueValue = blueSensorValue / 4;

  // Print mapped values
  Serial.print("Mapped Values\tRed: ");
  Serial.print(redValue);
  Serial.print("\tGreen: ");
  Serial.print(greenValue);
  Serial.print("\tBlue: ");
  Serial.println(blueValue);

  // Write PWM to RGB LED
  analogWrite(redLEDPin, redValue);
  analogWrite(greenLEDPin, greenValue);
  analogWrite(blueLEDPin, blueValue);
}
