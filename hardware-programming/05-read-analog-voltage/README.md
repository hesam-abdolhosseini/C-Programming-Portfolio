# 05-read-analog-voltage

This project demonstrates how to read an analog input on pin A0, convert the values into voltage, and print them to the Serial Monitor.  
It is the fifth step in hardware programming labs for students.

## Contents
- **code/**: Arduino sketch (`read_analog_voltage.ino`)
- **wiring/**: Breadboard and schematic diagrams
- **simulation/**: Tinkercad project link
- **docs/**: Lab guide with step-by-step instructions
- **bom.csv**: Bill of Materials

## How to Run
1. Connect the potentiometer:
   - One outer leg → GND
   - Other outer leg → 5V
   - Middle leg → Analog pin A0
2. Open `code/read_analog_voltage.ino` in Arduino IDE.
3. Select **Arduino UNO** board and correct COM port.
4. Upload the code.
5. Open the **Serial Monitor** (Ctrl+Shift+M) and observe values between 0.0 and 5.0 volts.

## Educational Notes
- Introduces **analog-to-digital conversion (ADC)** using `analogRead()`.
- Demonstrates scaling raw values (0–1023) into voltage range (0–5V).
- Shows how potentiometers vary resistance and voltage.
- Explains hardware differences (5V vs 3.3V boards, ADC resolution).