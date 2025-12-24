const int sensorPin = A0;        // TMP36 output pin
                                 // پایه خروجی حسگر TMP36
const float baselineTemp = 20.0; // baseline temperature in °C
                                 // دمای مبنا برای مقایسه

void setup() {
  Serial.begin(9600); // start serial communication
                      // شروع ارتباط سریال

  // set pins 2–4 as outputs for LEDs
  // تنظیم پایه‌های 2 تا 4 به عنوان خروجی
  for (int pinNumber = 2; pinNumber < 5; pinNumber++) {
    pinMode(pinNumber, OUTPUT);
    digitalWrite(pinNumber, LOW);
  }
}

void loop() {
  // read analog value from TMP36
  // خواندن مقدار آنالوگ از حسگر
  int sensorVal = analogRead(sensorPin);

  Serial.print("Sensor Value: ");
  Serial.print(sensorVal);

  // convert ADC reading to voltage
  // تبدیل مقدار ADC به ولتاژ
  float voltage = (sensorVal / 1024.0) * 5.0;

  Serial.print(", Volts: ");
  Serial.print(voltage);

  // convert voltage to Celsius
  // تبدیل ولتاژ به دما
  float temperature = (voltage - 0.5) * 100;

  Serial.print(", degrees C: ");
  Serial.println(temperature);

  // LED logic based on temperature
  // منطق روشن شدن LEDها بر اساس دما

  if (temperature < baselineTemp) {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }
  else if (temperature >= baselineTemp && temperature < baselineTemp + 2) {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }
  else if (temperature >= baselineTemp + 2 && temperature < baselineTemp + 4) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  }
  else {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
  }

  delay(100); // small delay for stability
              // تأخیر کوتاه برای پایداری
}
