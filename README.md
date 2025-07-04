# Smart Home Automation using ARM Microcontroller (LPC2138)
This project simulates a basic smart home automation system using the ARM7-based LPC2138 microcontroller. It allows control of appliances (like lights and fans) through input switches and displays system status using LEDs. The simulation is done using Proteus and the code is written in Embedded C using Keil uVision.

## Features

- Control of home appliances (fan, light, etc.) via push buttons or digital inputs
- Real-time status indication via LEDs
- Modular and scalable system logic
- Simulated in Proteus (no physical hardware required)

## Tools & Technologies

- **Microcontroller**: LPC2138 (ARM7)
- **Simulation**: Proteus 8 Professional
- **IDE**: Keil uVision 3 (Embedded C)
- **Programming Language**: Embedded C

## Files Included

| File | Description |
|------|-------------|
| `smarthome.c` | Embedded C source code for ARM |
| `smarthome.dsn` | Proteus simulation file |
| `circuit_screenshot.png` | (Optional) Screenshot of simulation setup/output |

## How It Works

- Digital input switches simulate user commands (e.g., turning ON/OFF lights or fans).
- LPC2148 reads the inputs via GPIO pins.
- Output is shown using LEDs connected to output GPIO ports.
- The system logic mimics a basic real-world home automation setup, and is easily extendable.

## Future Improvements

- Add UART-based serial control (e.g., Bluetooth or PC)
- Integrate LCD display for status messages
- Use real-time clock (RTC) to schedule devices
- Add mobile app or IoT interface

## Author

**Anwesha Rath**  
*Developed as part of an Embedded Systems Internship*  
[GitHub Profile](https://github.com/anwesha-rath)


## Notes

This project demonstrates fundamental GPIO control using ARM architecture. It is a great base for more advanced IoT or automation systems.

