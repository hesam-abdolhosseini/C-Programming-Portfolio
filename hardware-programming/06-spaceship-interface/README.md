# 06-spaceship-interface

This project demonstrates how to use digital inputs and outputs together with variables and conditional logic.  
It creates a simple “spaceship control panel” with LEDs and a pushbutton.

## Contents
- **code/**: Arduino sketch (`spaceship_interface.ino`)
- **wiring/**: Breadboard and schematic diagrams
- **simulation/**: Tinkercad project link
- **docs/**: Lab guide with step-by-step instructions
- **bom.csv**: Bill of Materials

## How to Run
1. Connect one green LED to pin 3, and two red LEDs to pins 4 and 5.
2. Connect each LED’s cathode to GND through a 220Ω resistor.
3. Place a pushbutton on the breadboard:
   - One side → 5V
   - Other side → pin 2
   - Add a 10kΩ pull-down resistor from pin 2 to GND
4. Upload `spaceship_interface.ino` in Arduino IDE.
5. Observe:
   - Green LED stays on until button is pressed.
   - When button is pressed, green LED turns off and red LEDs blink alternately.

---

# 06-رابط-فضاپیما

این پروژه نشان می‌دهد چگونه ورودی و خروجی دیجیتال را همراه با متغیرها و منطق شرطی استفاده کنید.  
یک «پنل کنترل فضاپیما» ساده با LEDها و یک کلید فشاری ساخته می‌شود.

## محتوا
- **code/**: کد آردوینو (`spaceship_interface.ino`)
- **wiring/**: دیاگرام‌های بردبرد و شماتیک
- **simulation/**: لینک پروژه در Tinkercad
- **docs/**: راهنمای آزمایش گام‌به‌گام
- **bom.csv**: لیست قطعات

## روش اجرا
1. یک LED سبز را به پایه 3 وصل کنید و دو LED قرمز را به پایه‌های 4 و 5.
2. پایه کوتاه هر LED را از طریق مقاومت 220 اهم به زمین وصل کنید.
3. کلید فشاری را روی بردبرد قرار دهید:
   - یک طرف → 5 ولت
   - طرف دیگر → پایه 2
   - یک مقاومت 10kΩ بین پایه 2 و زمین اضافه کنید (پول‌دان).
4. کد `spaceship_interface.ino` را آپلود کنید.
5. مشاهده کنید:
   - LED سبز روشن است تا زمانی که کلید فشرده شود.
   - وقتی کلید فشرده شود، LED سبز خاموش و LEDهای قرمز به صورت چشمک‌زن روشن می‌شوند.