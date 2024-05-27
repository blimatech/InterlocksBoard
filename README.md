
# ESP32 Interlock Monitor

## Overview
This project uses an ESP32 microcontroller to monitor the state of interlocks. The system is designed to provide real-time status updates and alerts for interlocks, ensuring safety and operational efficiency.

## Features
- Real-time monitoring of interlock states
- Wi-Fi connectivity for remote monitoring
- Status updates via web interface
- Alerts and notifications for interlock changes

## Hardware Requirements
- ESP32 development board. We used the ESP32 Dev Module in PlatformIO.
- Interlock sensors (e.g., limit switches)
- Breadboard and jumper wires to test the inputs
- Power supply or usb cable

## Software Requirements
- Arduino IDE
- ESP32 board support package
- Libraries: WiFi, HTTPClient, WebSocktes

### 2. Web Interface
1. After uploading, open the Serial Monitor to get the IP address assigned to your ESP32.
2. Access the web interface by entering the IP address in your web browser.

## Usage
- The web interface will display the current state of each interlock.
- Any change in the state of an interlock will trigger an update on the web interface.

## Contributing
Contributions are welcome! Please fork the repository and submit a pull request for any enhancements or bug fixes.

## License
This project is licensed under the MIT License. See the LICENSE file for details.

## Contact
For any questions or support, please open an issue or contact [geral@m4i.pt](mailto:geral@m4i.pt).
