# Data-Acquisition-System-using-RTX-RTOS
Implementation of a data acquisition system which can monitor temperature and light intensity using RTX RTOS. With the help of Keil software and by using LPC2148 microcontroller, MCP9700 temperature sensor and a light intensity sensor, we can implement a data acquisition system which is based on RTX RTOS. In this project the two tasks, 

1) measuring the temperature and light intensity level
2) Sending the result through UART protocol

are implemented in a round robin fashion with priority level set as 1. Additional details regarding the project is mentioned below:

Round Robin Timeout: 50 ms
System Tick: 10 ms
Stack Size: 200 bytes
Priority Level: 1
Scheduling Algorithm Used: Round Robin scheduling algorithm
Software Used: Keil uVision5
Microcontroller Used: LPC2148
