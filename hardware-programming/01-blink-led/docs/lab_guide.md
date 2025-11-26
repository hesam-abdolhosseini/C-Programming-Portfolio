# Lab Guide: Blink LED

## Objective
Learn how to control a digital output pin on Arduino by blinking an LED.

## Ingredients
- Arduino UNO R3
- 1 × LED (Red)
- 1 × 220Ω resistor
- Breadboard
- Jumper wires

## Steps
1. Place the LED on the breadboard.
2. Connect the resistor in series with the LED.
3. Wire the LED to pin 13 on Arduino UNO.
4. Connect the other side to GND.
5. Upload the `blink_led.ino` code.

## Expected Output
- LED turns ON for 1 second, then OFF for 1 second, repeatedly.

## Troubleshooting
- If LED does not blink:
  - Check polarity (long leg = anode).
  - Verify resistor connection.
  - Ensure correct COM port in Arduino IDE.

  ---

# راهنمای آزمایش: چشمک زدن LED

## هدف
یادگیری کنترل یک پایه خروجی دیجیتال در آردوینو با چشمک زدن LED.

## مواد لازم
- برد Arduino UNO R3
- ۱ عدد LED قرمز
- ۱ عدد مقاومت 220 اهم
- بردبرد
- سیم‌های جامپر

## مراحل
1. LED را روی بردبرد قرار دهید.
2. مقاومت را به صورت سری با LED وصل کنید.
3. LED را به پایه 13 (LED_BUILTIN) آردوینو وصل کنید.
4. سمت دیگر را به GND وصل کنید.
5. کد `blink_led.ino` را آپلود کنید.

## خروجی مورد انتظار
- LED به مدت ۱ ثانیه روشن و سپس ۱ ثانیه خاموش می‌شود و این چرخه تکرار می‌گردد.

## رفع اشکال
- اگر LED چشمک نمی‌زند:
  - جهت LED را بررسی کنید (پایه بلند = آند).
  - اتصال مقاومت را بررسی کنید.
  - پورت صحیح را در Arduino IDE انتخاب کنید.
