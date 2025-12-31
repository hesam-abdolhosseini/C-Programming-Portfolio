# Lab Guide: Color Mixing Lamp

## Objective
Create a color‑changing lamp using three photoresistors and an RGB LED controlled by PWM.

## Ingredients
- Arduino UNO R3
- RGB LED (common cathode)
- 3 × Photoresistors
- 3 × 10kΩ resistors (voltage dividers)
- 3 × 220Ω resistors (LED)
- Breadboard
- Jumper wires
- Colored gels (red, green, blue)

## Steps
1. Build three voltage dividers using photoresistors + 10kΩ resistors.
2. Connect outputs to A0, A1, A2.
3. Connect RGB LED to pins 9, 10, 11.
4. Upload the code.
5. Shine different colors of light on the sensors.

## Expected Output
- LED color changes smoothly based on sensor readings.
- Serial Monitor shows raw and mapped values.

---

# راهنمای آزمایش: چراغ ترکیب رنگ

## هدف
ساخت چراغی که با استفاده از سه فتورزیستور و یک LED RGB رنگ خود را تغییر می‌دهد.

## مواد لازم
- برد Arduino UNO  
- LED RGB با کاتد مشترک  
- سه عدد فتورزیستور  
- سه عدد مقاومت 10kΩ  
- سه عدد مقاومت 220Ω  
- بردبرد  
- سیم جامپر  
- فیلترهای رنگی (قرمز، سبز، آبی)

## مراحل
1. سه تقسیم ولتاژ با فتورزیستور و مقاومت 10kΩ بسازید.  
2. خروجی‌ها را به A0، A1 و A2 وصل کنید.  
3. LED RGB را به پایه‌های 9، 10 و 11 وصل کنید.  
4. کد را آپلود کنید.  
5. با نورهای مختلف روی سنسورها، تغییر رنگ LED را مشاهده کنید.

## خروجی مورد انتظار
- LED به‌صورت نرم و پیوسته رنگ عوض می‌کند.  
- مانیتور سریال مقادیر خام و نگاشت‌شده را نمایش می‌دهد.

## نکات آموزشی
- PWM چگونه روشنایی LED را کنترل می‌کند.  
- نگاشت مقدار سنسور برای کنترل LED.  
- رفتار فتورزیستور در نورهای مختلف.