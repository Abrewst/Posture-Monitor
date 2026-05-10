AI Posture Monitor Project
Overview
This project is designed to detect and classify back posture in real-time using an ESP32 and two MPU6050 accelerometers. It consists of two main parts:

Data Collection (Python): A script to record sensor values into a CSV file for training an AI model.

Real-time Monitor (C++/Arduino): An Arduino sketch that uses a trained AI model to classify posture live.

Hardware Requirements
Microcontroller: ESP32 (or compatible board).

Sensors: 2x MPU6050 Accelerometers.

Wiring: * Connect both sensors to the same I2C bus (SDA/SCL).

Address Selection: One sensor must have its AD0 pin connected to High (3.3V) to set its address to 0x69. The other should be Low (GND) for address 0x68.

Software Prerequisites
1. Arduino Environment
Install the following libraries via the Arduino Library Manager:

Adafruit MPU6050

Adafruit Unified Sensor

Wire

2. Python Environment
Ensure you have Python installed, then install the required library:

Bash
pip install pyserial
How to Use
Step 1: Data Collection
Before you can use the AI monitor, you need to collect data for different postures (e.g., sitting straight vs. slouching).

Upload a basic "Pass-through" sketch to your ESP32 that simply prints upper_z, lower_z to the Serial monitor.

Open the Python Script.

Update the ESP32_PORT (e.g., COM4 or /dev/ttyUSB0) and the FILENAME path.

Run the script: python your_script_name.py.

Enter the label for the posture you are currently holding.

Stay in that position for 60 seconds while the data is saved to your CSV.

Step 2: Training the Model
Use the generated CSV file to train your machine learning model (e.g., a Decision Tree).

Export the model as a header file named PostureModel.h.

Step 3: Real-time Monitoring
Place the PostureModel.h file in the same folder as your Arduino sketch.

Open the Arduino Sketch (the one shown in the project document).

Upload the code to your ESP32.

Open the Serial Monitor at 115200 baud.

The system will now output your current posture classification based on the live sensor data!
