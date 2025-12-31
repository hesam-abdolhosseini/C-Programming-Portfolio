# 08-color-mixing-lamp  
**RGB LED Color Mixing Using Photoresistors and PWM**

This project demonstrates how to read three photoresistors (red, green, blue channels), map their values, and use PWM to control an RGB LED.  
The lamp smoothly changes color depending on the ambient light hitting each sensor.

## Contents
- **code/**: Arduino sketch (`color_mixing_lamp.ino`)
- **wiring/**: Breadboard and schematic diagrams
- **simulation/**: Tinkercad project link
- **docs/**: Lab guide with step-by-step instructions
- **bom.csv**: Bill of Materials

## How to Run
1. Connect three photoresistors to A0, A1, and A2 using voltage dividers (10kΩ resistors).
2. Place colored gels (red, green, blue) over each sensor.
3. Connect RGB LED:
   - Common cathode → GND  
   - Red → pin 11  
   - Green → pin 9  
   - Blue → pin 10  
   (each through a 220Ω resistor)
4. Upload `color_mixing_lamp.ino`.
5. Open Serial Monitor to observe raw and mapped values.

## Educational Notes
- Introduces **PWM** and **analogWrite()**.
- Demonstrates **mapping sensor values** (0–1023 → 0–255).
- Shows how to build a **color‑responsive lamp**.
- Uses **photoresistors** as analog light sensors.

---

# 08-چراغ-ترکیب-رنگ  
**ترکیب رنگ RGB با استفاده از فتورزیستور و PWM**

این پروژه نشان می‌دهد چگونه سه فتورزیستور (کانال‌های قرمز، سبز و آبی) را بخوانید، مقادیر آن‌ها را نگاشت کنید و با PWM یک LED RGB را کنترل کنید.  
چراغ بسته به نور محیط که به هر سنسور می‌تابد، رنگ خود را تغییر می‌دهد.

## محتوا
- **code/**: کد آردوینو (`color_mixing_lamp.ino`)
- **wiring/**: دیاگرام‌های بردبرد و شماتیک
- **simulation/**: لینک پروژه در Tinkercad
- **docs/**: راهنمای آزمایش گام‌به‌گام
- **bom.csv**: لیست قطعات

## روش اجرا
1. سه فتورزیستور را با مقاومت 10kΩ به صورت تقسیم ولتاژ به پایه‌های A0، A1 و A2 وصل کنید.
2. فیلترهای رنگی (قرمز، سبز، آبی) را روی هر سنسور قرار دهید.
3. LED RGB را وصل کنید:
   - کاتد مشترک → GND  
   - پایه قرمز → پایه 11  
   - پایه سبز → پایه 9  
   - پایه آبی → پایه 10  
   (هرکدام با مقاومت 220 اهم)
4. کد `color_mixing_lamp.ino` را آپلود کنید.
5. مانیتور سریال را باز کنید و مقادیر خام و نگاشت‌شده را مشاهده کنید.

## نکات آموزشی
- معرفی PWM و تابع `analogWrite()`.
- نگاشت مقدار سنسور از 1023 → 255.
- ساخت چراغی که به نور محیط واکنش نشان می‌دهد.
- استفاده از فتورزیستور به عنوان سنسور نور.