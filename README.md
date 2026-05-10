# AI Posture Monitor Project

## Overview

This project is designed to detect and classify back posture in real-time using an ESP32 and two MPU6050 accelerometers. It consists of two main parts:

1. **Data Collection (Python):** A script to record sensor values into a CSV file for training an AI model.
2. **Real-time Monitor (C++/Arduino):** An Arduino sketch that uses a trained AI model to classify posture live.

---

## Hardware Requirements

* **Microcontroller:** ESP32 (or compatible board).
* **Sensors:** 2x MPU6050 Accelerometers.
* **Wiring:** * Connect both sensors to the same I2C bus (SDA/SCL).
* **Address Selection:** One sensor must have its **AD0 pin** connected to High (3.3V) to set its address to `0x69`. The other should be Low (GND) for address `0x68`.



---

## Software Prerequisites

### 1. Arduino Environment

Install the following libraries via the Arduino Library Manager:

* `Adafruit MPU6050`
* `Adafruit Unified Sensor`
* `Wire`

### 2. Python Environment

Ensure you have Python installed, then install the required library:

```bash
pip install pyserial

```

---

## How to Use

### Step 1: Data Collection

Before you can use the AI monitor, you need to collect data for different postures (e.g., sitting straight vs. slouching).

1. Upload a basic "Pass-through" sketch to your ESP32 that simply prints `upper_z, lower_z` to the Serial monitor.
2. Open the **Python Script**.
3. Update the `ESP32_PORT` (e.g., `COM4` or `/dev/ttyUSB0`) and the `FILENAME` path.
4. Run the script: `python your_script_name.py`.
5. Enter the label for the posture you are currently holding.
6. Stay in that position for 15-20 seconds while the data is saved to your CSV.

### Step 2: Training the Model

* Use the generated CSV file to train your machine learning model (e.g., a Decision Tree).
* Export the model as a header file named `PostureModel.h`.

### Step 3: Real-time Monitoring

1. Place the `PostureModel.h` file in the same folder as your Arduino sketch.
2. Open the **Arduino Sketch** (the one shown in the project document).
3. Upload the code to your ESP32.
4. Open the **Serial Monitor** at **115200 baud**.
5. The system will now output your current posture classification based on the live sensor data!

---

## Troubleshooting

* **Connection Failed:** Ensure the Serial Monitor in Arduino IDE is closed before running the Python script.
* **Sensor Not Found:** Double-check your wiring and ensure the `AD0` pins are correctly set to differentiate the two I2C addresses (`0x68` and `0x69`).
