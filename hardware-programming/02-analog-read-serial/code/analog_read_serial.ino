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

  // print out the value you read:
  // چاپ مقدار خوانده شده روی مانیتور سریال
  Serial.println(sensorValue);

  // delay in between reads for stability
  // مکث کوتاه (1 میلی‌ثانیه) بین هر بار خواندن برای پایدار شدن داده‌ها
  delay(500);
}
