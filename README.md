# Smart Waste Management System

This project aims to develop a Smart Waste Management System that utilizes Arduino coding and a user-friendly software application. The system integrates both hardware and software components to monitor and optimize the waste collection process.

The Smart Waste Management System (SWMS) is a project that aims to provide real-time status and data of dustbins through various sensors such as Arduino, GSM, and ultrasonic sensors. Additionally, the system utilizes the shortest path algorithm in a directed acyclic graph to optimize the collection routes of the dustbins. The SWMS app allows users to locate and view the dustbins on Google Maps, providing a comprehensive waste management solution.

With this app, you'll be able to manage your surrounding wastes like never before.

### To Download the application

  download [Swms App](https://www.mediafire.com/file/508xbl946t5s19e/app-release.apk/file)

## Hardware Components

The hardware components used in this project include:

1. Arduino Board: An Arduino board serves as the main controller for the system, handling data acquisition and processing tasks.

2. Ultrasonic Sensors: Three ultrasonic sensors are used to measure the fill level of the dustbins. These sensors provide real-time data on the status of each dustbin.

3. ESP8266 Wi-Fi Module: The ESP8266 module enables wireless communication between the dustbins and the software application. It allows for remote monitoring and control of the system.

4. GSM Module: The GSM module enables sending SMS notifications about the status of the dustbins to designated recipients.

5. Dustbins: The project employs specialized hardware dustbins equipped with ultrasonic sensors, ESP8266, and GSM modules.

## Software Application

The software application provides a user-friendly interface for monitoring and managing the smart waste management system. It includes the following features:

1. Real-time Dustbin Status: The application displays the real-time fill level of each dustbin. This information is obtained from the ultrasonic sensors and transmitted wirelessly to the software.

2. Add a Dustbin: The application allows users to add new dustbins to the system. When a new dustbin is added, it is automatically integrated into the monitoring system and becomes visible on the application's interface.

3. Optimized Waste Collection Path: The software application calculates an optimized path for waste collection based on the fill levels of the dustbins. It considers factors such as distance and fill level to determine the most efficient collection route.

4. Notifications: The application sends notifications to designated users via SMS using the GSM module. Notifications can include alerts for full dustbins, system errors, or any other relevant updates.

## Arduino Coding

The Arduino code, embedded in the project files, is responsible for reading data from the ultrasonic sensors, communicating with the ESP8266 and GSM modules, and controlling the overall functionality of the system. The code implements algorithms to process the data and make decisions based on the fill levels of the dustbins.

## Installation and Setup

To set up the Smart Waste Management System, follow these steps:

1. Hardware Setup:
   - Connect the ultrasonic sensors, ESP8266, and GSM module to the Arduino board as per the provided circuit diagram.
   - Mount the hardware dustbins in the desired locations.

2. Software Setup:
   - Install the required Arduino IDE on your computer.
   - Upload the provided Arduino code to the Arduino board.
   - Install the software application on a computer or mobile device.

3. Configuration:
   - Configure the ESP8266 and GSM module with the appropriate network credentials and API settings.

4. Usage:
   - Launch the software application and log in with the provided credentials.
   - The application will display the real-time status of the dustbins, and you can add new dustbins if necessary.
   - The optimized waste collection path can be generated and followed for efficient waste collection.
   - Receive SMS notifications for important system updates.


### To execute live application, kindly proceed with the installation process of the Android package file located at the following directory: 
   ```bash
   swms/SWMS-apk/build/app/outputs/flutter-apk/app-release.apk,
   ```
on your Android device.

## Features

- Real-time monitoring of dustbin status and data
- Integration of Arduino, GSM, and ultrasonic sensors for data collection
- Optimized collection routes using the shortest path algorithm(https://www.codingninjas.com/codestudio/library/shortest-path-in-a-directed-acyclic-graph)
- SWMS app for dustbin visualization on Google Maps
- User-friendly interface for easy navigation and interaction
- Notification system for alerts and updates on dustbin status
- Historical data analysis for performance evaluation and future improvements
- Scalable architecture to accommodate additional dustbins and sensors

## Installation and Setup

To install and set up the SWMS, please follow these steps:

1. Clone the repository:

```bash
git clone https://github.com/your-username/swms.git
```

2. Install the required dependencies. Ensure you have the necessary packages installed for Arduino, GSM, and ultrasonic sensors as specified in the project documentation.

3. Connect the sensors to the Arduino board following the provided circuit diagram.

4. Configure the Arduino board and GSM module according to the project specifications and connect them to the appropriate pins.

5. Set up the SWMS app on your mobile device by downloading the SWMS APK file and installing it.

6. Launch the SWMS app and grant necessary permissions (such as location access) for proper functioning.

7. Ensure a stable internet connection is available for real-time data transmission.

## Usage

The SWMS project consists of the following components:

1. **Arduino and Sensors**: The Arduino board is connected to the ultrasonic sensors and GSM module. It collects data from the sensors and transmits it to the SWMS server for processing.

2. **SWMS Server**: The server receives data from the Arduino and processes it to determine the status and optimal collection routes of the dustbins. It also provides data for the SWMS app to visualize the dustbins on Google Maps.

3. **SWMS App**: The mobile app allows users to view the dustbins on Google Maps, monitor their status, and receive notifications. It provides an intuitive interface for interacting with the system and accessing real-time data.

## Hardware Interface
![image](https://github.com/asqre/Smart-Waste-Management-System/assets/62792214/86e74905-5a76-406a-845e-409418358d46)

## Application Interface
![image](https://github.com/asqre/Smart-Waste-Management-System/assets/62792214/d3c78d97-8488-4278-8d70-325e4051db9e)
![image](https://github.com/asqre/Smart-Waste-Management-System/assets/62792214/95c04a81-82bb-4541-8c8b-e059993ff62f)
![image](https://github.com/asqre/Smart-Waste-Management-System/assets/62792214/0d03290b-9e9a-4920-b0cd-5016b1714ab5)
![image](https://github.com/asqre/Smart-Waste-Management-System/assets/62792214/0c56e8f0-ab7a-4b0f-8296-1fd882914571)
![image](https://github.com/asqre/Smart-Waste-Management-System/assets/62792214/3b1c2882-1c7e-4e93-a5d4-6b43fa521f0a)


To use the SWMS:

1. Ensure that the Arduino board and sensors are properly connected to dustbin and powered on.

2. Launch the SWMS app on your mobile device and sign in using your credentials.

3. The app will display the dustbins' locations on Google Maps along with their real-time status.

4. To view optimized collection routes, select the desired area or region on the app, and the shortest path algorithm will calculate and display the optimal routes.

5. Users can also receive notifications and alerts regarding the dustbin status, such as when a dustbin is full and needs emptying.

6. The app allows users to interact with the system, report issues, or request a collection through the provided interface.

## Future Enhancements

The Smart Waste Management System has potential for further enhancements and improvements. Some suggested future enhancements include:

- Integration of additional sensors for more accurate data collection, such as fill-level sensors or temperature sensors.
- Integration with machine learning algorithms to predict and optimize dustbin collection schedules based on historical data and other factors like weather 
  conditions or special events.
- Implementation of a centralized management system to monitor multiple SWMS installations and provide comprehensive analytics and reporting.
- Development of a web-based dashboard for administrators to monitor and manage the SWMS system, generate reports, and configure
- Historical Data and Analytics: Collect and store historical data on waste generation and collection patterns for analysis and optimization purposes.
- Mobile Application: Develop a dedicated mobile application to provide on-the-go access to the system's features.
- Integration with Waste Management Services: Integrate the system with waste management services for automatic scheduling of waste collection trucks and     
  real-time tracking.
- Machine Learning Algorithms: Utilize machine learning algorithms to predict fill levels, optimize collection routes

## Contact

If you have any questions or suggestions, feel free to contact us at [amitanand.asqre@gmail.com]
