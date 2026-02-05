# ESP32 Tank Monitor
**Author:** Miller DeMark

## Overview
The ESP32 Tank Monitor is a DIY home project designed to monitor fish tanks from a central server. Using an ESP32 microcontroller, this system can currently track water temperature and tank level, providing real-time monitoring and alerts. The project also includes custom PCBs to streamline connections and reduce the ESP32's footprint compared to using a full development board.

The goal is to make aquarium monitoring more convenient, automated, and accurate, with minimal manual intervention.

## Features
- **Temperature Monitoring:** Uses a 10k thermistor to measure water temperature accurately.
- **Water Level Detection:** Ultrasonic sensor to measure tank water levels and detect low water conditions.
- **Visual Display:** OLED screen for local readouts of temperature and water level.
- **Custom PCB:** Reduces clutter and simplifies wiring compared to standard ESP32 dev boards.
- **Central Server Integration:** Allows monitoring from a central location via Wi-Fi (future implementation for push notifications and logging).

## Future Updates
- Fully custom PCB to completely eliminate the need for the ESP32 dev board.
- Water Quality Sensor (pH, ammonia, nitrate) for comprehensive tank monitoring.
- 3D printed enclosure to protect electronics and provide a clean, finished look.
- Mobile/Web Dashboard to view tank status and history remotely.
- Automated Alerts for temperature extremes or low water levels.
- Integration with smart home platforms for notifications or automation.

## Hardware
- ESP32 microcontroller
- 10k Thermistor
- Ultrasonic distance sensor
- OLED display
- Custom PCB for simplified connections

## Software
- ESP32 firmware written in [Arduino framework / PlatformIO]
- Temperature and water level readings sent to a central server
- OLED screen for local monitoring
- Future plans for server-side logging and alert system

