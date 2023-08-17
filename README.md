# IoT Object Movement Tracking between Two Sensors with RCWL-0516 Doppler Radar

Welcome to the IoT Object Movement Tracking project! This project utilizes the RCWL-0516 Doppler radar sensors to detect object movement, track their distance and movement between two sensors, and visualize the data using Python for graphing and Arduino for data collection.

## Features

- **RCWL-0516 Doppler Radar Sensors**: The project employs RCWL-0516 Doppler radar sensors to detect object movement. The sensors provide data on distance and movement velocity.

- **Object Tracking between Two Sensors**: Two RCWL-0516 sensors are placed at different locations. The project tracks object movement and calculates the distance traveled between the two sensors.

- **Data Collection (Arduino)**: The Arduino board is responsible for collecting data from both RCWL-0516 sensors. It gathers distance and movement information and sends it to the Python script for processing.

- **Graphing (Python)**: The Python script processes the collected data and generates graphs using libraries such as Matplotlib. These graphs visually represent object movement and distance trends between the two sensors.

## How to Use

1. **Hardware Setup**: Assemble two RCWL-0516 Doppler radar sensors and connect them to your Arduino board.

2. **Software Configuration (Arduino)**: Upload the provided Arduino code to your board. This code collects data from both sensors and communicates it to the Python script via serial communication.

3. **Python Script (Data Processing and Graphing)**: Run the Python script on your computer. This script receives data from the Arduino board, processes it, and generates graphs.

4. **Graph Visualization**: Once the Python script is running, the generated graphs will display object movement and distance trends between the two sensors over time.
