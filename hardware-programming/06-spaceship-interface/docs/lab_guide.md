# Lab Guide: Spaceship Interface

## Objective
Learn how to combine digital input (pushbutton) and digital output (LEDs) with variables and conditional logic.

## Ingredients
- Arduino UNO R3
- 1 × Green LED
- 2 × Red LEDs
- 3 × 220Ω resistors
- 1 × Pushbutton
- 1 × 10kΩ resistor (pull-down)
- Breadboard
- Jumper wires
- USB cable

## Steps
1. Wire up the breadboard with 5V and GND.
2. Connect LEDs:
   - Green LED anode → pin 3
   - Red LED anodes → pins 4 and 5
   - Cathodes → GND via 220Ω resistors
3. Connect pushbutton:
   - One side → 5V
   - Other side → pin 2
   - Add 10kΩ resistor from pin 2 to GND
4. Upload `spaceship_interface.ino`.
5. Observe the LED behavior.

## Expected Output
- Green LED is ON when button is not pressed.
- When button is pressed:
  - Green LED turns OFF.
  - Red LEDs blink alternately.

---

# راهنمای آزمایش: رابط فضاپیما

## هدف
یادگیری ترکیب ورودی دیجیتال (کلید فشاری) و خروجی دیجیتال (LEDها) همراه با متغیرها و منطق شرطی.

## مواد لازم
- برد Arduino UNO R3
- ۱ عدد LED سبز
- ۲ عدد LED قرمز
- ۳ عدد مقاومت 220 اهم
- ۱ عدد کلید فشاری
- ۱ عدد مقاومت 10kΩ (پول‌دان)
- بردبرد
- سیم‌های جامپر
- کابل USB

## مراحل
1. بردبرد را به 5V و GND وصل کنید.
2. LEDها را وصل کنید:
   - آند LED سبز → پایه 3
   - آند LEDهای قرمز → پایه‌های 4 و 5
   - کاتدها → زمین از طریق مقاومت 220 اهم
3. کلید فشاری را وصل کنید:
   - یک طرف → 5 ولت
   - طرف دیگر → پایه 2
   - مقاومت 10kΩ بین پایه 2 و زمین قرار دهید.
4. کد `spaceship_interface.ino` را آپلود کنید.
5. رفتار LEDها را مشاهده کنید.

## خروجی مورد انتظار
- LED سبز روشن است وقتی کلید فشرده نشده.
- وقتی کلید فشرده شود:
  - LED سبز خاموش می‌شود.
  - LEDهای قرمز به صورت متناوب چشمک می‌زنند.

## نکات آموزشی
- استفاده از `digitalRead()` برای خواندن وضعیت کلید.
- استفاده از `digitalWrite()` برای کنترل روشن/خاموش LEDها.
- استفاده از متغیر `switchState` برای ذخیره وضعیت کلید.
- استفاده از شرط `if/else` برای تغییر رفتار مدار.
- استفاده از `delay()` برای کنترل سرعت چشمک‌زدن.