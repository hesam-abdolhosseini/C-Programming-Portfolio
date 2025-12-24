# Lab Guide: Temperature Sensor LED Bar

## Objective
Measure temperature using the TMP36 analog sensor and visualize the result using a 3‑LED bar.

## Ingredients
- Arduino UNO R3
- TMP36 temperature sensor
- 3 × LEDs
- 3 × 220Ω resistors
- Breadboard
- Jumper wires
- USB cable

## Steps
1. Connect TMP36:
   - Left pin → 5V
   - Right pin → GND
   - Middle pin → A0
2. Connect LEDs to pins 2, 3, and 4.
3. Upload the code.
4. Open Serial Monitor to observe temperature values.

## Expected Output
- LEDs turn on one-by-one as temperature rises.
- Serial Monitor prints:
  - Raw ADC value  
  - Voltage  
  - Temperature in Celsius  

---

# راهنمای آزمایش: نوار LED سنسور دما

## هدف
اندازه‌گیری دما با استفاده از حسگر TMP36 و نمایش آن با سه LED به صورت نوار.

## مواد لازم
- برد Arduino UNO R3  
- حسگر TMP36  
- سه عدد LED  
- سه عدد مقاومت 220 اهم  
- بردبرد  
- سیم جامپر  
- کابل USB  

## مراحل
1. حسگر TMP36 را روی بردبرد قرار دهید.  
2. پایه چپ را به 5 ولت، پایه راست را به GND و پایه وسط را به A0 وصل کنید.  
3. LEDها را به پایه‌های 2، 3 و 4 وصل کنید و پایه منفی را از طریق مقاومت به زمین ببرید.  
4. کد را آپلود کنید و مانیتور سریال را باز کنید.  
5. حسگر را لمس کنید و تغییرات دما را مشاهده کنید.

## خروجی مورد انتظار
- با افزایش دما، LEDها یکی‌یکی روشن می‌شوند.  
- مانیتور سریال مقدار ADC، ولتاژ و دمای محاسبه‌شده را نمایش می‌دهد.

## نکات آموزشی
- TMP36 ولتاژی متناسب با دما تولید می‌کند.  
- هر 10 میلی‌ولت برابر 1 درجه سانتی‌گراد است.  
- فرمول تبدیل:  
  \[
  \text{Temperature} = (\text{Voltage} - 0.5) \times 100
  \]
- از شرط‌های چندگانه برای تعیین سطح دما استفاده می‌شود.