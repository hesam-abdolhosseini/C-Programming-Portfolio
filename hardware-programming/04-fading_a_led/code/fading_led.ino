int led = 9;         // the PWM pin the LED is attached to
                     // پایه PWM شماره 9 که LED به آن وصل شده است
int brightness = 0;  // how bright the LED is (0–255)
                     // میزان روشنایی LED (بین 0 تا 255)
int fadeAmount = 5;  // how many points to fade the LED by
                     // مقدار تغییر روشنایی در هر بار اجرای حلقه

// the setup routine runs once when you press reset:
// تابع setup فقط یک بار اجرا می‌شود وقتی آردوینو ریست یا روشن شود
void setup() {
  // declare pin 9 to be an output:
  // پایه 9 به عنوان خروجی تعریف می‌شود
  pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
// تابع loop به صورت بی‌نهایت و پشت سر هم اجرا می‌شود
void loop() {
  // set the brightness of pin 9:
  // مقدار روشنایی پایه 9 تنظیم می‌شود
  analogWrite(led, brightness);

  // change the brightness for next time through the loop:
  // تغییر روشنایی برای اجرای بعدی حلقه
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  // وقتی روشنایی به 0 یا 255 برسد، جهت تغییر معکوس می‌شود
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }

  // wait for 30 milliseconds to see the dimming effect
  // مکث 30 میلی‌ثانیه برای مشاهده افکت کم‌نور و پرنور شدن
  delay(30);
}
