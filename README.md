# Microwave Oven Simulation using PIC16F877A

# Overview
This project implements a **Microwave Oven Simulation** using the **PIC16F877A microcontroller**, programmed in **Embedded C**. The system accurately models the behavior of a real-world microwave oven by supporting multiple cooking modes, real-time countdown, user interaction through a keypad, and visual feedback via an LCD.
The project is developed using **MPLAB X IDE** and verified through **PICSimLab** simulation.

# Features
* **Micro Mode** (900W microwave simulation with fan cooling)
* **Grill Mode** (heater-based cooking)
* **Convection Mode** with **pre-heating**
* **Quick Start Mode** (adds 30 seconds per press)
* Real-time countdown using **Timer interrupts**
* **Keypad input** with debouncing
* **LCD display** interface
* **Fan and Heater control**
* **Buzzer alert** on cooking completion
* Start, Pause, Resume, and Stop functionality
* Interrupt-driven and non-blocking design

# Embedded Concepts Used
* Timer interrupts
* Finite State Machine (FSM)
* Peripheral interfacing (LCD, Keypad, Buzzer)
* GPIO control
* Non-blocking real-time logic
* Embedded system simulation

# Modes of Operation
# 1. Micro Mode
Simulates microwave cooking at 900W. The cooling fan operates to represent magnetron and internal component cooling.
# 2. Grill Mode
Uses a heater element to simulate grilling with time-based control.
# 3. Convection Mode
Includes a **pre-heating phase** using a heater, followed by normal cooking similar to micro mode for uniform temperature distribution.
# 4. Quick Start Mode
Starts cooking immediately with a default time of **30 seconds**, and each additional press adds 30 seconds.

# Hardware & Software Used
# Hardware
* PIC16F877A Microcontroller
* 16×2 / 20×4 Character LCD
* Matrix Keypad
* Buzzer
* Fan and Heater (simulated)

# Software
* MPLAB X IDE
* XC8 Compiler
* PICSimLab

# Project Demonstration Video
A complete working simulation of this project is available on YouTube:
🔗 [https://youtu.be/iB5f18V4X7Y](https://youtu.be/iB5f18V4X7Y)


# Repository Structure
```
Embedded-Microwave-Oven-PIC/
├── main.c
├── isr.c
├── keypad.c
├── clcd.c
├── timers.c
├── main.h
└── README.md
```

# How to Run the Project
1. Clone this repository.
2. Open the project in **MPLAB X IDE**.
3. Build the project using **XC8 compiler**.
4. Load the generated HEX file into **PICSimLab**.
5. Run the simulation and interact using the keypad.


Just tell me 👍

