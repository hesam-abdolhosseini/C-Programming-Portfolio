int switchState = 0; // variable to store button state
                     // متغیر برای ذخیره وضعیت کلید فشاری

void setup() {
  // configure LED pins as outputs
  // تنظیم پایه‌های LED به عنوان خروجی
  pinMode(3, OUTPUT); // green LED
  pinMode(4, OUTPUT); // red LED
  pinMode(5, OUTPUT); // red LED

  // configure button pin as input
  // تنظیم پایه کلید به عنوان ورودی
  pinMode(2, INPUT);
}

void loop() {
  // read button state
  // خواندن وضعیت کلید
  switchState = digitalRead(2);

  if (switchState == LOW) {
    // button not pressed
    // کلید فشرده نشده → LED سبز روشن، قرمزها خاموش
    digitalWrite(3, HIGH); // green LED ON
    digitalWrite(4, LOW);  // red LED OFF
    digitalWrite(5, LOW);  // red LED OFF
  } else {
    // button pressed
    // کلید فشرده شده → LED سبز خاموش، قرمزها چشمک‌زن
    digitalWrite(3, LOW);  // green LED OFF
    digitalWrite(4, LOW);  // red LED OFF
    digitalWrite(5, HIGH); // red LED ON
    delay(250);            // مکث 250 میلی‌ثانیه

    // toggle red LEDs
    // تغییر وضعیت LEDهای قرمز
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(250);            // مکث 250 میلی‌ثانیه
  }
}
