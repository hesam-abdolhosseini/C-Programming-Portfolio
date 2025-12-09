// digital pin 2 has a pushbutton attached to it. Give it a name:
// پایه دیجیتال 2 به یک کلید فشاری وصل شده است. برای آن یک نام تعریف کنید.
int pushButton = 2;

// the setup routine runs once when you press reset:
// تابع setup فقط یک بار اجرا می‌شود وقتی آردوینو ریست یا روشن شود
void setup() {
  // initialize serial communication at 9600 bits per second:
  // راه‌اندازی ارتباط سریال با سرعت 9600 بیت در ثانیه بین برد و کامپیوتر
  Serial.begin(9600);

  // make the pushbutton's pin an input:
  // پایه کلید فشاری را به عنوان ورودی تنظیم کنید
  pinMode(pushButton, INPUT);
}

// the loop routine runs over and over again forever:
// تابع loop به صورت بی‌نهایت و پشت سر هم اجرا می‌شود
void loop() {
  // read the input pin:
  // خواندن وضعیت پایه ورودی (کلید فشاری)
  int buttonState = digitalRead(pushButton);

  // print out the state of the button:
  // چاپ وضعیت کلید روی مانیتور سریال (0 = خاموش، 1 = روشن)
  Serial.println(buttonState);

  // delay in between reads for stability
  // مکث کوتاه (100 میلی‌ثانیه) بین هر بار خواندن برای پایدار شدن داده‌ها 
  delay(100);
}
