# Lab Guide: Read Analog Voltage

## Objective
Learn how to read an analog input from a potentiometer, convert it into voltage, and display it on the Serial Monitor.

## Ingredients
- Arduino UNO R3
- 1 × 10kΩ potentiometer
- Breadboard
- Jumper wires
- USB cable

## Steps
1. Place the potentiometer on the breadboard.
2. Connect one outer pin to **GND**.
3. Connect the other outer pin to **5V**.
4. Connect the middle pin to **A0**.
5. Upload the `read_analog_voltage.ino` code.
6. Open the Serial Monitor (Ctrl+Shift+M) to observe values.

## Expected Output
- Serial Monitor shows values between **0.0 and 5.0 volts**.
- Turning the potentiometer changes the voltage smoothly.

## Troubleshooting
- If values don’t change:
  - Check potentiometer wiring (outer pins to 5V and GND, middle to A0).
  - Verify correct COM port in Arduino IDE.
- If values are incorrect:
  - Adjust scaling factor (`5.0 / 1023.0`) for 3.3V boards or different ADC resolutions.

---

## Teaching Notes

| Code Line | English Note | Persian Note |
|-----------|--------------|--------------|
| `Serial.begin(9600);` | Starts serial communication at 9600 baud. | آغاز ارتباط سریال با سرعت 9600 بیت در ثانیه. |
| `int sensorValue = analogRead(A0);` | Reads raw ADC value (0–1023). | خواندن مقدار خام ADC بین 0 تا 1023. |
| `float voltage = sensorValue * (5.0 / 1023.0);` | Converts raw value to voltage (0–5V). | تبدیل مقدار خام به ولتاژ بین 0 تا 5 ولت. |
| `Serial.println(voltage);` | Prints voltage to Serial Monitor. | چاپ ولتاژ روی مانیتور سریال. |

---

# راهنمای آزمایش: خواندن ولتاژ آنالوگ

## هدف
یادگیری خواندن ورودی آنالوگ از پتانسیومتر، تبدیل آن به ولتاژ و نمایش در مانیتور سریال.

## مواد لازم
- برد Arduino UNO R3
- ۱ عدد پتانسیومتر 10kΩ
- بردبرد
- سیم‌های جامپر
- کابل USB

## مراحل
1. پتانسیومتر را روی بردبرد قرار دهید.
2. یک پایه کناری را به **GND** وصل کنید.
3. پایه کناری دیگر را به **5V** وصل کنید.
4. پایه وسط را به **A0** وصل کنید.
5. کد `read_analog_voltage.ino` را آپلود کنید.
6. مانیتور سریال را باز کنید (Ctrl+Shift+M) و مقادیر را مشاهده کنید.

## خروجی مورد انتظار
- مانیتور سریال مقادیر بین **0.0 تا 5.0 ولت** را نمایش می‌دهد.
- با چرخاندن پتانسیومتر ولتاژ به صورت تدریجی تغییر می‌کند.

## رفع اشکال
- اگر مقادیر تغییر نمی‌کنند:
  - سیم‌کشی پتانسیومتر را بررسی کنید (پایه‌های کناری به 5V و GND، پایه وسط به A0).
  - پورت صحیح را در Arduino IDE انتخاب کنید.
- اگر مقادیر نادرست هستند:
  - ضریب تبدیل (`5.0 / 1023.0`) را برای بردهای 3.3 ولتی یا وضوح‌های مختلف ADC تغییر دهید.

## نکات آموزشی

| خط کد | توضیح فارسی |
|-------|-------------|
| `Serial.begin(9600);` | آغاز ارتباط سریال با سرعت 9600 بیت در ثانیه. |
| `int sensorValue = analogRead(A0);` | خواندن مقدار خام ADC بین 0 تا 1023. |
| `float voltage = sensorValue * (5.0 / 1023.0);` | تبدیل مقدار خام به ولتاژ بین 0 تا 5 ولت. |
| `Serial.println(voltage);` | چاپ ولتاژ روی مانیتور سریال. |