# Smart Home Automation System using ARM LPC2138
This project simulates a basic smart home automation system using the **LPC2138 ARM7 microcontroller** in **Proteus**. The system responds to various environmental triggers such as temperature and gas leakage by automatically controlling home appliances like fans, ACs, and alarms. The simulation is done using Proteus and the code is written in Embedded C using Keil uVision.

## Overview
In this simulation:

- **SPDT switches** are used to simulate **sensor inputs** (e.g., temperature or gas sensors).
- **LEDs and a buzzer** are used to indicate the corresponding response (e.g., turning on a fan or raising an alarm).
- The project is built using **Embedded C** and tested via **Proteus Design Suite**.

### 🔁 Simulation Mapping

| Input Switch (Sensor Simulated) | Condition Represented              | Output (Response)                |
|----------------------------------|------------------------------------|----------------------------------|
| Fan Sensor                       | Temperature > 30°C                 | Green LED (Fan ON)               |
| AC Sensor                        | Temperature > 42°C                 | Blue LED (AC ON)                 |
| Light Sensor                     | Motion Detected                    | Yellow LED (Light ON)            |
| Gas Warning                      | Smoke/Gas Detected                 | Red LED + Buzzer (Alarm ON)      |
| Alarm                            | Manual Override                    | All devices OFF or Reset State   |

>  In real-world hardware, these switches would be replaced with actual sensors:
> - **LM35/DHT11/DHT22** – Temperature sensors  
> - **PIR Module** – Motion detection  
> - **MQ2/MQ135** – Smoke/Gas detection  

## Hardware Used
- **LPC2138 Microcontroller (ARM7)**
- Proteus Simulation Software
- SPDT Switches (as sensor placeholders)
- LEDs (Green, Blue, Yellow, Red)
- Buzzer

## Files Included
- `smart_home_ARM.c` – Source code (Embedded C)
- `Smart_Home_ARM.pdsprj` – Proteus design file
- Smart_Home_ARM_simulation.mp4 - Simulation for the project
- This `README.md`

## Key Learning Outcomes
- Understanding I/O interfacing with ARM LPC2138
- Simulation of real-world sensors using Proteus
- Project design using embedded systems principles
- Mapping environmental conditions to hardware responses

## Preview
Feel free to fork, modify, or build on top of this project.  
For any queries or collaboration, reach out.

