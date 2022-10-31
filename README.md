# Device Driver for LPC2148/Real Time Clock

By Uttam Deshpande et. al.,

## Introduction
LPC2148 has an inbuilt RTC. LPC2148RTC can be clocked by a separate 32.768 KHz oscillator or by a programmable prescale divider based on the APB clock. It maintains a calendar and clock and provides seconds, minutes, hours, month, year, day of week, day of month and day of year. It has power supply pin that can be connected to a battery or to the main 3.3V. It uses little power in power down mode and most important, it has Alarm functionality.

![image](https://user-images.githubusercontent.com/107185323/198999978-24f2ec4c-fc53-45fc-ac4f-ff3f97cf94c3.png)


### Registers of LPC2148/RTC: 
* ILR (Interrupt Location Register) 
* CTCR (Clock Tick Counter Register) 
* CCR (Clock Control Register) 
*	CIIR (Counter Increment Interrupt Register) 
*	AMR (Alarm Mask Register) 
*	Consolidated Time Registers 
*	CTIMEO (Consolidated Time Register 0) 
*	CTIMEI (Consolidated Time Register 1) 
*	CTIME2 (Consolidated Time Register 2) 
* PREINT (Prescalar Integer Register) 
*	PREFRAC (Prescalar Fraction Register)

### APls designed: 
*	To set clock source for RTC peripheral: int rtc_clock_source (int clksrc) 
*	To Enable RTC peripheral: int rte_enable (int en) 
*	To set RTC Time: int rtc set time (int sec, int min, int hour, int dom, int dow, int doy, int month, int year) 
*	To read RTC Time: int rtc_read_time(int *sec, int *min, int *hour, int *dom, int *dow, int *doy, int *month, int *year)

### Generation of device drivers: 
The device drivers for LPC2148/RTC were generated using DDGen tool, as per the guidelines 
given during training period. The input to the DDGen tool were DPS file and RTs file. The 
output was the generated driver. 
DPS file: 1It includes all the details of the registers and their fields; and the sequences i.e. APls. 
RTS file: It includes system specification and base address of peripheral.

### Testing and Verification of the driver: 
The generated drivers were simulated on Keil uvisiona by writing a test application. The updated register values during the execution of the driver was verified using the Simulator in Keil Microvision.

Verification results:
![image](https://user-images.githubusercontent.com/107185323/198999743-2497cba1-7dc8-4942-a40d-7b13e0f0e7c0.png)

Validation of the driver: 
After verifying the driver on simulator, it was implemented on the actual hardware i.e. LPC2148 development board. Here, the RTC peripheral on LPC2148 board was configured by setting the time and date. The designed APl's were validated using 16x2 LCD display present on LPC2148 board itself.

Validation results:
![image](https://user-images.githubusercontent.com/107185323/198999792-fbf69a35-62dc-4105-8045-59e5183ee7bd.png)



