#define CUSTOM_SETTINGS
#define INCLUDE_TERMINAL_MODULE

#include <DabbleESP32.h>            // Include Dabble library for ESP32

#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run `make menuconfig` to enable it.
#endif

void setup() {
  Serial.begin(9600);  // Initialize serial communication with the computer
  
  // Start Bluetooth with the name "ESP32_Dabble" directly through DabbleESP32
  Dabble.begin("ESP32_Dabble");  
  Serial.println("Bluetooth is ready. Connect using Dabble app.");
}

void loop() {
  Dabble.processInput();  // Process incoming data from Dabble app

  // Check if a message is received from the Terminal module
  if (Terminal.available()) {
    String message = Terminal.readString();  // Read the message
    Serial.print("Received from phone: ");
    Serial.println(message);

    // Send a reply back to the mobile phone via Terminal
    Terminal.println("ESP32: Message received - " + message);
  }

  delay(500);  // Small delay to avoid loop overload
}