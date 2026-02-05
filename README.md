# ESP32 Tank Monitor
**Author:** Miller DeMark

## Overview
The ESP32 Tank Monitor is a DIY home project designed to monitor fish tanks from a central server. Using an ESP32 microcontroller, this system can currently track water temperature and tank level, providing real-time monitoring and alerts. The project also includes custom PCBs to streamline connections and reduce the ESP32's footprint compared to using a full development board.

The goal is to make aquarium monitoring more convienent, with alerts if parameters are outside of ideal zones.

## Features
- **Temperature Monitoring:** 10k thermistor to measure water temperature accurately.
- **Water Level Detection:** Ultrasonic sensor to measure tank water levels and detect low water conditions.
- **Visual Display:** OLED screen for visual readouts.
- **Custom PCB:** Simplifies wiring.
- **Central Server Integration:** Allows monitoring from a central location via Wi-Fi.

## Future Updates
- Fully custom PCB to eliminate the Dev Board.
- Water Quality Sensor for further tank monitoring.
- 3D printed enclosure for a finished look.
- Web dashboard to monitor multiple tanks.
- Automated Alerts for parameters outside of ideal range.

## Hardware
- ESP32 microcontroller
- 10k Thermistor
- Ultrasonic distance sensor
- OLED display
- Custom PCB 

## Software
- ESP32 firmware written in [Arduino framework / PlatformIO]
- Temperature and water level readings sent to a central server
- OLED screen for local monitoring
- Future plans for server-side logging and alert system

