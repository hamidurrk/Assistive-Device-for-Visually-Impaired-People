# Assistive Device for Visually Impaired People

## Overview
This project aims to assist visually impaired people in reading text from any digital platform. The hand-glove-like device converts characters into a 3x2 dot matrix braille cell and provides tactile feedback using 6 vibration motors embedded into the fabric of the index and middle fingers of the hand glove. The device is designed to receive strings via Bluetooth, process the data using a microcontroller (ESP32), and deliver haptic feedback to the user.

## Features
* Converts characters to 3x2 braille cell representation
* Receives strings via Bluetooth
* Processes data using ESP32 microcontroller
* Provides tactile feedback using 6 vibration motors
* Portable and wearable design

## How it Works
* Input: The device receives strings of text from any digital platform (e.g., smartphone, computer) via Bluetooth.

* Data Processing: The microcontroller (ESP32) processes the incoming data, converting each character into its corresponding 3x2 braille cell representation.

* Tactile Feedback: The device contains six vibration motors integrated into the fabric of the index and middle fingers. The specific combination of motors vibrates to represent the braille cell of each character.

* User Interaction: The visually impaired user wears the glove-like device and feels the tactile feedback provided by the vibration motors to understand the characters.

## Usage Instructions
1. Setup: Ensure that the device is fully charged and paired with the user's digital platform via Bluetooth.

2. Wearing the Device: Put on the hand glove, ensuring that the index and middle fingers are comfortably positioned to feel the vibration motors.

3. Reading Text: Send the desired text to be read to the device via Bluetooth from any digital platform (e.g., smartphone, computer).

4. Tactile Feedback: The device will convert each character into its braille representation and provide tactile feedback through the vibration motors on the index and middle fingers.

## Future Improvements
* Enhance character recognition accuracy and expand language support
* Implement text-to-speech functionality for additional accessibility
* Add support for multiple languages and special characters
* Explore options for improving the device's form factor and ergonomics
* Optimize power consumption for longer battery life

## Special Note
This project was developed as a sub-project of the NASA Space Apps Challenge 2022.
