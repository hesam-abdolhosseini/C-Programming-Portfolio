# Lab Guide: Analog Read Serial

## Objective
Learn how to read analog input from a potentiometer and display values in the Serial Monitor.

## Ingredients
- Arduino UNO R3
- 1 × Potentiometer (10kΩ)
- Breadboard
- Jumper wires
- USB cable

## Steps
1. Place the potentiometer on the breadboard.
2. Connect one outer pin to **GND**.
3. Connect the other outer pin to **5V**.
4. Connect the middle pin to **A0** on Arduino UNO.
5. Upload the `analog_read_serial.ino` code.
6. Open the Serial Monitor (Ctrl+Shift+M) to observe values.

## Expected Output
- Serial Monitor displays values between **0 and 1023** depending on the potentiometer’s position.
- Turning the knob changes the numbers almost instantly.

## Troubleshooting
- If values don’t change:
  - Check wiring (middle pin must go to A0).
  - Verify potentiometer orientation.
  - Ensure correct COM port in Arduino IDE.
  - Confirm Serial Monitor baud rate is set to **9600**.

---

# راهنمای آزمایش: خواندن آنالوگ و نمایش سریال

## هدف
یادگیری خواندن ورودی آنالوگ از یک پتانسیومتر و نمایش مقادیر در مانیتور سریال.

## مواد لازم
- برد Arduino UNO R3
- ۱ عدد پتانسیومتر 10kΩ
- بردبرد
- سیم‌های جامپر
- کابل USB

## مراحل
1. پتانسیومتر را روی بردبرد قرار دهید.
2. یکی از پایه‌های کناری را به **GND** وصل کنید.
3. پایه کناری دیگر را به **5V** وصل کنید.
4. پایه وسط را به **A0** آردوینو وصل کنید.
5. کد `analog_read_serial.ino` را آپلود کنید.
6. مانیتور سریال را باز کنید (Ctrl+Shift+M) و مقادیر را مشاهده کنید.

## خروجی مورد انتظار
- مانیتور سریال مقادیر بین **0 تا 1023** را بسته به موقعیت پتانسیومتر نمایش می‌دهد.
- با چرخاندن ولوم، مقادیر تقریباً بلافاصله تغییر می‌کنند.

## رفع اشکال
- اگر مقادیر تغییر نمی‌کنند:
  - سیم‌کشی را بررسی کنید (پایه وسط باید به A0 وصل شود).
  - جهت پتانسیومتر را بررسی کنید.
  - پورت صحیح را در Arduino IDE انتخاب کنید.
  - نرخ Baud مانیتور سریال را روی **9600** تنظیم کنید.