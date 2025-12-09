# Lab Guide: Fading a LED

## Objective
Learn how to use **analog output (PWM)** to gradually fade an LED on and off.

## Ingredients
- Arduino UNO R3
- 1 × LED
- 1 × 220Ω resistor
- Breadboard
- Jumper wires
- USB cable

## Steps
1. Place the LED on the breadboard.
2. Connect the **anode (long leg)** to digital pin 9 through a 220Ω resistor.
3. Connect the **cathode (short leg)** directly to **GND**.
4. Upload the `fading_led.ino` code.
5. Observe the LED gradually fading in and out.

## Expected Output
- LED brightness increases smoothly from OFF (0) to fully ON (255), then decreases back to OFF.
- The cycle repeats continuously, creating a fading effect.

## Troubleshooting
- If LED does not fade:
  - Check LED polarity (long leg = anode).
  - Verify resistor connection to pin 9.
  - Ensure correct COM port in Arduino IDE.
- If fading is too fast or too slow:
  - Adjust the `delay(30)` value in the code (smaller = faster, larger = slower).

---

## Teaching Notes

| Code Line | English Note |
|-----------|--------------|
| `int led = 9;` | Declares pin 9 as the PWM output for LED. |
| `int brightness = 0;` | Variable to store current LED brightness (0–255). |
| `int fadeAmount = 5;` | Step size for brightness change each loop. |
| `pinMode(led, OUTPUT);` | Configures pin 9 as an output. |
| `analogWrite(led, brightness);` | Writes PWM value to LED, controlling brightness. |
| `brightness = brightness + fadeAmount;` | Increases or decreases brightness by step size. |
| `if (brightness <= 0 || brightness >= 255) { fadeAmount = -fadeAmount; }` | Reverses direction when brightness hits limits. |
| `delay(30);` | Controls speed of fading effect. |

---

# راهنمای آزمایش: کم و زیاد شدن نور LED

## هدف
یادگیری استفاده از **خروجی آنالوگ (PWM)** برای کم و زیاد کردن تدریجی نور LED.

## مواد لازم
- برد Arduino UNO R3
- ۱ عدد LED
- ۱ عدد مقاومت 220 اهم
- بردبرد
- سیم‌های جامپر
- کابل USB

## مراحل
1. LED را روی بردبرد قرار دهید.
2. پایه بلند (آند) را از طریق مقاومت 220 اهم به پایه دیجیتال 9 وصل کنید.
3. پایه کوتاه (کاتد) را مستقیم به **GND** وصل کنید.
4. کد `fading_led.ino` را آپلود کنید.
5. مشاهده کنید که LED به صورت تدریجی روشن و خاموش می‌شود.

## خروجی مورد انتظار
- روشنایی LED به آرامی از خاموش (0) تا روشن کامل (255) افزایش یافته و سپس دوباره کاهش می‌یابد.
- این چرخه به طور مداوم تکرار می‌شود و افکت کم‌نور و پرنور شدن ایجاد می‌کند.

## رفع اشکال
- اگر LED کم و زیاد نمی‌شود:
  - جهت LED را بررسی کنید (پایه بلند = آند).
  - اتصال مقاومت به پایه 9 را بررسی کنید.
  - پورت صحیح را در Arduino IDE انتخاب کنید.
- اگر سرعت تغییر نور خیلی زیاد یا کم است:
  - مقدار `delay(30)` را تغییر دهید (عدد کوچک‌تر = سریع‌تر، عدد بزرگ‌تر = کندتر).

---

## نکات آموزشی

| خط کد | توضیح فارسی |
|-------|-------------|
| `int led = 9;` | پایه 9 به عنوان خروجی PWM برای LED تعریف می‌شود. |
| `int brightness = 0;` | متغیر برای ذخیره روشنایی LED بین 0 تا 255. |
| `int fadeAmount = 5;` | مقدار تغییر روشنایی در هر بار اجرای حلقه. |
| `pinMode(led, OUTPUT);` | پایه 9 به عنوان خروجی تنظیم می‌شود. |
| `analogWrite(led, brightness);` | مقدار PWM به LED داده می‌شود تا روشنایی کنترل شود. |
| `brightness = brightness + fadeAmount;` | روشنایی با مقدار گام افزایش یا کاهش می‌یابد. |
| `if (brightness <= 0 || brightness >= 255) { fadeAmount = -fadeAmount; }` | وقتی روشنایی به 0 یا 255 برسد، جهت تغییر معکوس می‌شود. |
| `delay(30);` | سرعت افکت کم‌نور و پرنور شدن LED را کنترل می‌کند. |