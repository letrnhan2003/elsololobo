# Agricultural Irrigation System Project
This project implements an agricultural irrigation system using a Real-Time Operating System (RTOS). The system performs the following tasks during each irrigation session:

* Open fertilizer mixing Valve 1 for 5 seconds
* Close Valve 1, open fertilizer mixing Valve 2 for 5 seconds
* Close Valve 2, open fertilizer mixing Valve 3 for 5 seconds
* Close valve 3, open pump 1 for 10 seconds
* Turn off pump 1, turn on pump 2 for 30 seconds
* Finally, turn off pump 2
After this process, the system will repeat the above steps every 60 seconds.

## Hardware Requirements
* Microcontroller (STM32)
* 3 Solenoid valves
* 2 Pumps
* 5 LED lights (to represent the valves and pumps)

## Software Requirements
* Real-Time Operating System 
* C Programming language 

## Project Structure
The project consists of main.c, scheduler.c, software_timer.c, and main.h, scheduler.h, software_timer.h as well.

## Contribution
If you find any issues or have suggestions for improvement, feel free to create a new issue or submit a pull request.
