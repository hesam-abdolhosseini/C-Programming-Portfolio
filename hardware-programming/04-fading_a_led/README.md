# 04-fading-led

This project demonstrates how to use **analog output (PWM)** to fade an LED on and off.  
It is the fourth step in hardware programming labs for students.

## Contents
- **code/**: Arduino sketch (`fading_led.ino`)
- **wiring/**: Breadboard and schematic diagrams
- **simulation/**: Tinkercad project link
- **docs/**: Lab guide with step-by-step instructions
- **bom.csv**: Bill of Materials

## How to Run
1. Connect the LED:
   - Anode (long leg) → Digital pin 9 through a 220Ω resistor
   - Cathode (short leg) → GND
2. Open `code/fading_led.ino` in Arduino IDE.
3. Select **Arduino UNO** board and correct COM port.
4. Upload the code.
5. Observe the LED gradually fading in and out.

## Educational Notes
- Introduces **PWM (Pulse Width Modulation)** using `analogWrite()`.
- Demonstrates how varying duty cycle controls LED brightness.
- Uses variables (`brightness`, `fadeAmount`) to adjust intensity.
- Shows how reversing direction at limits creates a continuous fade cycle.
- Delay value (`delay(30)`) controls the speed of fading.

---

# 04-کم-و-زیاد-شدن-نور-LED

این پروژه نشان می‌دهد چگونه با استفاده از **خروجی آنالوگ (PWM)** نور یک LED به صورت تدریجی کم و زیاد شود.  
این چهارمین گام در آزمایش‌های برنامه‌نویسی سخت‌افزار برای دانشجویان است.

## محتوا
- **code/**: کد آردوینو (`fading_led.ino`)
- **wiring/**: دیاگرام‌های بردبرد و شماتیک
- **simulation/**: لینک پروژه در Tinkercad
- **docs/**: راهنمای آزمایش گام‌به‌گام
- **bom.csv**: لیست قطعات

## روش اجرا
1. LED را وصل کنید:
   - پایه بلند (آند) → پایه دیجیتال 9 از طریق مقاومت 220 اهم
   - پایه کوتاه (کاتد) → زمین (GND)
2. فایل `fading_led.ino` را در Arduino IDE باز کنید.
3. برد **Arduino UNO** و پورت صحیح را انتخاب کنید.
4. کد را آپلود کنید.
5. مشاهده کنید که LED به صورت تدریجی روشن و خاموش می‌شود.

## نکات آموزشی
- معرفی **PWM (مدولاسیون پهنای پالس)** با استفاده از `analogWrite()`.
- نشان می‌دهد چگونه تغییر نسبت روشن/خاموش باعث کنترل روشنایی LED می‌شود.
- استفاده از متغیرها (`brightness`, `fadeAmount`) برای تنظیم شدت نور.
- تغییر جهت در مقادیر حدی باعث ایجاد چرخه پیوسته کم‌نور و پرنور شدن می‌شود.
- مقدار تأخیر (`delay(30)`) سرعت افکت را کنترل می‌کند.