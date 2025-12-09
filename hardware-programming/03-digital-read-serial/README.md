# 03-digital-read-serial

This project demonstrates how to read the state of a pushbutton or switch and print values to the Serial Monitor.  
It is the third step in hardware programming labs for students.

## Contents
- **code/**: Arduino sketch (`digital_read_serial.ino`)
- **wiring/**: Breadboard and schematic diagrams
- **simulation/**: Tinkercad project link
- **docs/**: Lab guide with step-by-step instructions
- **bom.csv**: Bill of Materials

## How to Run
1. Connect the pushbutton:
   - One leg → 5V
   - Other leg → GND through a 10kΩ resistor (pull-down)
   - Same leg also connected to digital pin 2
2. Open `code/digital_read_serial.ino` in Arduino IDE.
3. Select **Arduino UNO** board and correct COM port.
4. Upload the code.
5. Open the **Serial Monitor** (Ctrl+Shift+M) and observe values:
   - `0` when button is unpressed (LOW).
   - `1` when button is pressed (HIGH).

## Educational Notes
- Introduces **digital input** using `digitalRead()`.
- Demonstrates **serial communication** with `Serial.begin()` and `Serial.println()`.
- Explains the need for **pull-down resistors** to avoid floating inputs.
- Forms the foundation for interactive projects (switches, sensors, user input).

---

# 03-خواندن-دیجیتال-و-نمایش-سریال

این پروژه نشان می‌دهد چگونه وضعیت یک کلید یا دکمه خوانده شود و مقادیر در مانیتور سریال نمایش داده شوند.  
این سومین گام در آزمایش‌های برنامه‌نویسی سخت‌افزار برای دانشجویان است.

## محتوا
- **code/**: کد آردوینو (`digital_read_serial.ino`)
- **wiring/**: دیاگرام‌های بردبرد و شماتیک
- **simulation/**: لینک پروژه در Tinkercad
- **docs/**: راهنمای آزمایش گام‌به‌گام
- **bom.csv**: لیست قطعات

## روش اجرا
1. دکمه را وصل کنید:
   - یک پایه → 5 ولت
   - پایه دیگر → زمین (GND) از طریق مقاومت 10kΩ (پول‌دان)
   - همان پایه همچنین به پایه دیجیتال 2 وصل شود
2. فایل `digital_read_serial.ino` را در Arduino IDE باز کنید.
3. برد **Arduino UNO** و پورت صحیح را انتخاب کنید.
4. کد را آپلود کنید.
5. مانیتور سریال را باز کنید (Ctrl+Shift+M) و مقادیر را مشاهده کنید:
   - `0` وقتی دکمه فشرده نشده (LOW).
   - `1` وقتی دکمه فشرده شده (HIGH).

## نکات آموزشی
- معرفی ورودی دیجیتال با استفاده از `digitalRead()`.
- نمایش ارتباط سریال با `Serial.begin()` و `Serial.println()`.
- توضیح نیاز به مقاومت پول‌دان برای جلوگیری از ورودی شناور.
- پایه‌ای برای پروژه‌های تعاملی (کلیدها، سنسورها، ورودی کاربر).