# Arduino Programming Concepts

## setup() and pinMode
The `setup()` function runs once when the board is powered or reset.  
Use `pinMode(pin, mode)` to set a pin as input or output.

Example:
pinMode(13, OUTPUT);

This configures pin 13 as an output.

## Serial Communication
Use `Serial.begin(baudRate)` to start serial communication.  
For this course, use 9600 as the baud rate.

Example:
Serial.begin(9600);

## loop() and digitalWrite
The `loop()` function runs continuously after setup.  
Use `digitalWrite(pin, value)` to set a digital output HIGH (on) or LOW (off).

Example:
digitalWrite(13, HIGH); // LED on
digitalWrite(13, LOW);  // LED off

## digitalRead
Reads the logic level (HIGH/LOW) of a digital input pin.

Example:
int Z = digitalRead(13);

## analogRead
Reads values (0–1023) from an analog input pin.

Example:
int sensor = analogRead(A0);

## analogWrite
Outputs a PWM signal (0–255) to control motor speed or LED brightness.

Example:
analogWrite(9, 128); // 50% duty cycle

## delay()
Pauses the program for the given milliseconds.

Example:
digitalWrite(13, HIGH);
delay(1000);
digitalWrite(13, LOW);

## Serial Functions
- Serial.end() stops serial communication.
- Serial.print() sends data (text, numbers) to the serial port.

## Interrupts on Arduino UNO
Arduino UNO has two external interrupts:
- Pin 2 → INT0
- Pin 3 → INT1

Use attachInterrupt(interrupt, function, mode) to configure.
Modes: LOW, CHANGE, RISING, FALLING.


------------------------------------------------------------

# مفاهیم برنامه‌نویسی آردوینو (بخش فارسی)

## تابع setup() و pinMode
تابع `setup()` فقط یک بار هنگام روشن شدن یا ریست شدن برد اجرا می‌شود.  
با استفاده از `pinMode(pin, mode)` می‌توان پایه را به عنوان ورودی یا خروجی تنظیم کرد.

مثال:
pinMode(13, OUTPUT);

## ارتباط سریال
برای شروع ارتباط سریال از `Serial.begin(baudRate)` استفاده کنید.  
در این دوره، مقدار 9600 به عنوان نرخ انتقال اطلاعات در نظر گرفته شده است.

مثال:
Serial.begin(9600);

## تابع loop() و digitalWrite
تابع `loop()` به صورت مداوم اجرا می‌شود.  
برای روشن یا خاموش کردن یک پایه خروجی:
digitalWrite(13, HIGH); // روشن
digitalWrite(13, LOW);  // خاموش

## digitalRead
برای خواندن وضعیت یک پایه ورودی دیجیتال:
int Z = digitalRead(13);

## analogRead
برای خواندن مقدار از پایه‌های آنالوگ:
int sensor = analogRead(A0);

## analogWrite
برای ارسال پالس PWM و کنترل سرعت موتور یا شدت نور LED:
analogWrite(9, 128); // مقدار متوسط

## delay()
برای ایجاد تأخیر بر حسب میلی‌ثانیه:
digitalWrite(13, HIGH);
delay(1000);
digitalWrite(13, LOW);

## دستورات سریال
- Serial.end(); پایان ارتباط سریال
- Serial.print(); ارسال داده به پورت سریال

## وقفه‌ها در آردوینو UNO
برد UNO دارای دو وقفه خارجی است:
- پایه 2 → INT0
- پایه 3 → INT1

برای راه‌اندازی:
attachInterrupt(interrupt, function, mode);

Mode می‌تواند یکی از حالت‌های زیر باشد:
LOW, CHANGE, RISING, FALLING