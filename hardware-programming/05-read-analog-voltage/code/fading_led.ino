// the setup routine runs once when you press reset:
// تابع setup فقط یک بار اجرا می‌شود وقتی آردوینو ریست یا روشن شود
void setup() {
  // initialize serial communication at 9600 bits per second:
  // راه‌اندازی ارتباط سریال با سرعت 9600 بیت در ثانیه
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
// تابع loop به صورت بی‌نهایت و پشت سر هم اجرا می‌شود
void loop() {
  // read the input on analog pin 0:
  // خواندن مقدار ورودی آنالوگ از پایه A0
  int sensorValue = analogRead(A0);

  // Convert the analog reading (0–1023) to voltage (0–5V):
  // تبدیل مقدار خوانده شده (0 تا 1023) به ولتاژ (0 تا 5 ولت)
  float voltage = sensorValue * (5.0 / 1023.0);

  // print out the voltage value:
  // چاپ مقدار ولتاژ روی مانیتور سریال
  Serial.println(voltage);
}
