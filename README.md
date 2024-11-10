# Electric Boat Control System

This repository contains the Arduino code for an electric boat control system, built to monitor key sensor data and control motor functions. The project is developed using an **Arduino GIGA R1** board and programmed in **Arduino IDE**. The main functionality includes reading data from temperature, current, and voltage sensors, transmitting it to a server over WiFi using HTTP requests, and interfacing with the boat's motor control system via CAN communication.

## Features

- **Sensor Data Collection**: Continuously reads data from temperature, current, and voltage sensors to monitor boat performance and health.
- **WiFi Communication**: Connects to a server over WiFi, sending data using HTTP push and pull requests for real-time monitoring.
- **CAN Communication**: Interfaces with the electric boat's motors using CAN protocol to control speed, torque, and other motor parameters.
- **HTML Push and Pull Requests**: Sends and receives data from the server to support data logging and control commands.

## Hardware Requirements

- **Arduino GIGA R1**: Main microcontroller handling all sensor readings, WiFi communication, and CAN motor interface.
- **Temperature, Current, and Voltage Sensors**: For monitoring the electric boat’s status.
- **WiFi Module**: Integrated in the Arduino GIGA R1 for wireless communication.
- **CAN Transceiver Module**: Required to establish a CAN communication line with the motor controller.

## Software Requirements

- **Arduino IDE**: Code development and upload.
- **Relevant Arduino Libraries**:
  - `WiFi.h` for WiFi connectivity.
  - `HTTPClient.h` for sending HTTP requests.
  - `CAN.h` for CAN communication with the motor controller.

## Code Overview

1. **Sensor Reading**: Reads data from temperature, current, and voltage sensors at set intervals and prepares it for transmission.
2. **WiFi Communication**: Establishes a WiFi connection and sends sensor data to the server using HTTP POST requests, also allows for HTTP GET requests to receive data or commands from the server.
3. **CAN Communication**: Implements CAN protocol to send control commands and receive status updates from the electric boat's motors.
4. **Data Processing and Error Handling**: Includes basic error handling to ensure data integrity and reliable communication.

## Setup and Usage

1. **Clone this repository** and open it in Arduino IDE.
2. **Install required libraries** if not already available in your Arduino library manager.
3. **Configure WiFi credentials** and server details in the code for network connectivity.
4. **Upload the code** to the Arduino GIGA R1.
5. **Connect sensors and CAN transceiver** to the designated pins on the Arduino GIGA R1.

This setup enables real-time monitoring and control of the electric boat through a reliable network interface and motor control system.

## Future Enhancements

- **Data Logging**: Add SD card support for offline data logging.
- **Additional Sensors**: Integrate GPS, speed, and depth sensors for enhanced monitoring.
- **Advanced Motor Control**: Implement PID control and more complex CAN commands for smoother navigation.
