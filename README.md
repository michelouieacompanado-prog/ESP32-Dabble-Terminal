# ESP32 Bluetooth Control Using Dabble App

## Laboratory Activity

This project demonstrates Bluetooth communication between an ESP32 microcontroller and a mobile phone using the Dabble App.

## Objectives

* Connect an ESP32 to a mobile phone using Bluetooth.
* Use the Dabble Terminal module to send messages.
* Receive messages from the mobile phone through the ESP32.
* Send a response from the ESP32 back to the mobile phone.

## Components and Software

* ESP32 Development Board
* USB Cable
* Computer
* Android Mobile Phone
* Arduino IDE
* Dabble App
* Dabble Library by STEMpedia

## Bluetooth Configuration

Bluetooth Device Name:

`ESP32_Dabble`

Bluetooth PIN:

`1234`

## How It Works

The ESP32 uses Bluetooth Classic communication to connect with the Dabble App. Messages sent through the Dabble Terminal are received by the ESP32 and displayed through the Arduino Serial Monitor.

The ESP32 then sends a response back to the Dabble Terminal confirming that the message was received.

## Expected Output

Example message sent from the phone:

`Hello ESP32`

Serial Monitor:

`Received from phone: Hello ESP32`

Dabble Terminal response:

`ESP32: Message received - Hello ESP32`

## Conclusion

The activity demonstrates how an ESP32 can communicate wirelessly with a mobile device through Bluetooth. This provides a basic foundation for developing IoT applications where a mobile phone can interact with and control a microcontroller.


Screenshots (.png, .jpg):


<img width="720" height="1520" alt="aa98da14-0728-4a89-8f73-87f46a3c01b7" src="https://github.com/user-attachments/assets/39bfc512-cb89-4c3c-8316-597184cb80ab" />


<img width="1366" height="729" alt="dabble" src="https://github.com/user-attachments/assets/31709577-5fe6-45c4-8fc3-b3df9e2d1df1" />


<img width="2048" height="1536" alt="0d4f22ad-e348-40e5-b63a-b5b35047618b" src="https://github.com/user-attachments/assets/77de5940-355f-4965-aa6b-2582d456b843" />


Short Video Clips (.mp4, .mov up to 100MB):


https://github.com/user-attachments/assets/fbd23c05-d109-4f46-97e6-1766d862bcb1



