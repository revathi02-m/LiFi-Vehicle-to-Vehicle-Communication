# LiFi Based Vehicle-to-Vehicle Communication System

## Overview
This project demonstrates a LiFi-based vehicle-to-vehicle (V2V) communication system designed for accident detection and driver safety. The system uses visible light communication to transmit information between vehicles using LED transmitters and photodiode receivers.

## Motivation
Traditional RF communication systems face challenges such as interference and spectrum congestion. Optical wireless communication (LiFi) provides a secure and high-bandwidth alternative.

## System Features
- LiFi based communication between vehicles
- Ultrasonic sensor for distance detection
- Alcohol detection sensor
- Eye blink sensor for driver drowsiness
- LCD alert system
- Arduino-based microcontroller implementation

## Hardware Components
- Arduino Uno
- LED LiFi transmitter
- Photodiode receiver
- Ultrasonic sensor
- Alcohol sensor
- Eye blink sensor
- LCD display
- Buzzer

## Communication Principle
The LED transmitter modulates data through visible light. A photodiode receiver detects the optical signal and converts it into electrical signals for decoding.

## Applications
- Intelligent transportation systems
- Vehicle safety systems
- Optical wireless communication research

## Code Structure

The Arduino code is divided into two parts:

1. Transmitter
Location: /code/transmitter/transmitter.ino
Responsible for modulating vehicle data onto the LED light.

2. Receiver
Location: /code/receiver/receiver.ino
Uses a photodiode to detect optical signals and decode the transmitted data.
## Future Work
- Higher data rate modulation techniques
- Integration with LiFi PHY layer protocols
- Real-time V2V network implementation
