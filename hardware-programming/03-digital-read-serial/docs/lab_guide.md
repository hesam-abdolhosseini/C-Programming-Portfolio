# Lab Guide: Digital Read Serial

## Objective
Learn how to monitor the state of a pushbutton using Arduino and display values in the Serial Monitor.

## Ingredients
- Arduino UNO R3
- 1 × Pushbutton (momentary switch)
- 1 × 10kΩ resistor (pull-down)
- Breadboard
- Jumper wires
- USB cable

## Steps
1. Place the pushbutton on the breadboard.
2. Connect one leg to **5V**.
3. Connect the other leg to **GND** through a 10kΩ resistor.
4. Connect the same leg also to **digital pin 2**.
5. Upload the `digital_read_serial.ino` code.
6. Open the Serial Monitor (Ctrl+Shift+M) to observe values.

## Expected Output
- Serial Monitor shows `0` when the button is unpressed (LOW).
- Serial Monitor shows `1` when the button is pressed (HIGH).

## Troubleshooting
- If values fluctuate randomly:
  - Check that the pull-down resistor is connected properly.
  - Verify button orientation on the breadboard.
  - Ensure correct COM port in Arduino IDE.
  - Confirm Serial Monitor baud rate is set to **9600**.

---

## Teaching Notes

| Code Line | English Note |
|-----------|--------------|
| `Serial.begin(9600);` | Starts serial communication at 9600 baud between Arduino and computer. |
| `pinMode(pushButton, INPUT);` | Configures pin 2 as input to read button state. |
| `int buttonState = digitalRead(pushButton);` | Reads HIGH (1) when pressed, LOW (0) when unpressed. |
| `Serial.println(buttonState);` | Prints the button state to Serial Monitor. |
| `delay(1);` | Adds a short pause for stable readings. |

---

# راهنمای آزمایش: خواندن دیجیتال و نمایش سریال

## هدف
یادگیری مانیتور کردن وضعیت یک کلید فشاری با آردوینو و نمایش مقادیر در مانیتور سریال.

## مواد لازم
- برد Arduino UNO R3
- ۱ عدد کلید فشاری (Pushbutton)
- ۱ عدد مقاومت 10kΩ (پول‌دان)
- بردبرد
- سیم‌های جامپر
- کابل USB

## مراحل
1. کلید فشاری را روی بردبرد قرار دهید.
2. یک پایه را به **5V** وصل کنید.
3. پایه دیگر را از طریق مقاومت 10kΩ به **GND** وصل کنید.
4. همان پایه را به پایه دیجیتال 2 آردوینو وصل کنید.
5. کد `digital_read_serial.ino` را آپلود کنید.
6. مانیتور سریال را باز کنید (Ctrl+Shift+M) و مقادیر را مشاهده کنید.

## خروجی مورد انتظار
- مانیتور سریال مقدار `0` را وقتی دکمه فشرده نشده نمایش می‌دهد.
- مانیتور سریال مقدار `1` را وقتی دکمه فشرده شده نمایش می‌دهد.

## رفع اشکال
- اگر مقادیر به صورت تصادفی تغییر می‌کنند:
  - اتصال مقاومت پول‌دان را بررسی کنید.
  - جهت قرارگیری کلید روی بردبرد را بررسی کنید.
  - پورت صحیح را در Arduino IDE انتخاب کنید.
  - نرخ Baud مانیتور سریال را روی **9600** تنظیم کنید.

---

## نکات آموزشی

| خط کد | توضیح فارسی |
|-------|-------------|
| `Serial.begin(9600);` | آغاز ارتباط سریال با سرعت 9600 بیت در ثانیه بین آردوینو و کامپیوتر. |
| `pinMode(pushButton, INPUT);` | پایه 2 به عنوان ورودی تنظیم می‌شود تا وضعیت کلید خوانده شود. |
| `int buttonState = digitalRead(pushButton);` | مقدار HIGH (1) وقتی کلید فشرده شده و LOW (0) وقتی آزاد است. |
| `Serial.println(buttonState);` | وضعیت کلید روی مانیتور سریال چاپ می‌شود. |
| `delay(1);` | مکث کوتاه برای پایدار شدن داده‌ها. |