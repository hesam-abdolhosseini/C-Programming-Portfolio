# 07-temperature-sensor-led-bar  
**Analog Temperature Measurement with LED Bar Visualization**

This project demonstrates how to read temperature using the TMP36 analog sensor, convert the reading into voltage and Celsius temperature, and visualize the result using a 3‑LED bar indicator.

## Contents
- **code/**: Arduino sketch (`temperature_sensor_led_bar.ino`)
- **wiring/**: Breadboard and schematic diagrams
- **simulation/**: Tinkercad project link
- **docs/**: Lab guide with step-by-step instructions
- **bom.csv**: Bill of Materials

## How to Run
1. Connect the TMP36 sensor:
   - Left pin → 5V  
   - Right pin → GND  
   - Middle pin → A0  
2. Connect LEDs to pins 2, 3, and 4 (each with a 220Ω resistor to GND).
3. Upload `temperature_sensor_led_bar.ino` using Arduino IDE.
4. Open the Serial Monitor (9600 baud).
5. Touch the sensor and observe LED bar changes.

## Educational Notes
- Introduces **analogRead()**, ADC conversion, and voltage scaling.
- Demonstrates converting voltage to Celsius using TMP36 formula.
- Uses **if/else** logic to activate LEDs based on temperature thresholds.
- Shows how to use **Serial Monitor** for debugging and calibration.

---

# 07-نوار-LED-سنسور-دما  
**اندازه‌گیری دما با حسگر TMP36 و نمایش با نوار LED**

این پروژه نشان می‌دهد چگونه مقدار دمای حسگر TMP36 را بخوانید، آن را به ولتاژ و سپس دما تبدیل کنید و نتیجه را با سه LED به صورت نوار نمایش دهید.

## محتوا
- **code/**: کد آردوینو (`temperature_sensor_led_bar.ino`)
- **wiring/**: دیاگرام‌های بردبرد و شماتیک
- **simulation/**: لینک پروژه در Tinkercad
- **docs/**: راهنمای آزمایش گام‌به‌گام
- **bom.csv**: لیست قطعات

## روش اجرا
1. حسگر TMP36 را وصل کنید:
   - پایه چپ → 5 ولت  
   - پایه راست → زمین  
   - پایه وسط → A0  
2. سه LED را به پایه‌های 2، 3 و 4 وصل کنید (هرکدام با مقاومت 220 اهم).
3. کد را آپلود کنید.
4. مانیتور سریال را با سرعت 9600 باز کنید.
5. حسگر را لمس کنید و روشن شدن LEDها را با افزایش دما مشاهده کنید.

## نکات آموزشی
- معرفی ورودی آنالوگ و تابع `analogRead()`.
- تبدیل مقدار ADC به ولتاژ و سپس دما.
- استفاده از شرط‌های `if/else` برای نمایش سطح دما.
- استفاده از مانیتور سریال برای کالیبراسیون و اشکال‌زدایی.