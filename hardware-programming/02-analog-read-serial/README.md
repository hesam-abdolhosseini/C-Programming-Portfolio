# 02-analog-read-serial

This project demonstrates how to read analog input from a potentiometer and print values to the Serial Monitor.  
It is the second step in hardware programming labs for students.

## Contents
- **code/**: Arduino sketch (`analog_read_serial.ino`)
- **wiring/**: Breadboard and schematic diagrams
- **simulation/**: Tinkercad project link
- **docs/**: Lab guide with step-by-step instructions
- **bom.csv**: Bill of Materials

## How to Run
1. Connect the potentiometer:
   - One outer pin → GND
   - Other outer pin → 5V
   - Middle pin → A0
2. Open `code/analog_read_serial.ino` in Arduino IDE.
3. Select **Arduino UNO** board and correct COM port.
4. Upload the code.
5. Open the **Serial Monitor** (Ctrl+Shift+M) and observe values (0–1023) as you turn the potentiometer.

## Educational Notes
- Introduces **analog input** using `analogRead()`.
- Demonstrates **serial communication** with `Serial.begin()` and `Serial.println()`.
- Shows how voltage (0–5V) maps to integer values (0–1023).
- Forms the foundation for sensor interfacing and data visualization with Serial Plotter.

---

# 02-خواندن-آنالوگ-و-نمایش-سریال

این پروژه نشان می‌دهد چگونه ورودی آنالوگ از یک پتانسیومتر خوانده شود و مقادیر در مانیتور سریال نمایش داده شوند.  
این دومین گام در آزمایش‌های برنامه‌نویسی سخت‌افزار برای دانشجویان است.

## محتوا
- **code/**: کد آردوینو (`analog_read_serial.ino`)
- **wiring/**: دیاگرام‌های بردبرد و شماتیک
- **simulation/**: لینک پروژه در Tinkercad
- **docs/**: راهنمای آزمایش گام‌به‌گام
- **bom.csv**: لیست قطعات

## روش اجرا
1. پین‌های پتانسیومتر را وصل کنید:
   - یکی از پایه‌های کناری → زمین (GND)
   - پایه کناری دیگر → 5 ولت
   - پایه وسط → A0
2. فایل `analog_read_serial.ino` را در Arduino IDE باز کنید.
3. برد **Arduino UNO** و پورت صحیح را انتخاب کنید.
4. کد را آپلود کنید.
5. مانیتور سریال را باز کنید (Ctrl+Shift+M) و مقادیر 0 تا 1023 را هنگام چرخاندن پتانسیومتر مشاهده کنید.

## نکات آموزشی
- معرفی ورودی آنالوگ با استفاده از `analogRead()`.
- نمایش ارتباط سریال با `Serial.begin()` و `Serial.println()`.
- نشان می‌دهد چگونه ولتاژ (0 تا 5 ولت) به مقادیر عددی (0 تا 1023) نگاشت می‌شود.
- پایه‌ای برای اتصال سنسورها و نمایش داده‌ها با Serial Plotter.