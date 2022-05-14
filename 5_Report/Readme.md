# Rain Sensing Automatic Car Wiper using AT89C51 Microcontroller

## Introduction
_IDEA:_

Today’s car wipers are manual systems that work on the principle of manual switching. So here we propose an automatic wiper system that automatically switches ON on detecting rain and stops when rain stops. Our project brings forward this system to automate the wiper system having no need for manual intervention. For this purpose we use rain sensor along with microcontroller to drive the wiper motor. Our system uses rain sensor to detect rain, this signal is then processed by microcontroller to take the desired action. The rain sensor works on the principle of using water for completing its circuit, so when rain falls on it it’s circuit gets completed and sends out a signal to the microcontroller. The microcontroller now processes this data and controls the motor.This system is equally useful for Aircrafts and a smaller version of this can be used  by motor bikers in their helmets so that they can drive easily in rains.


## Simulation of the design in PROTEUS software
![sim](https://user-images.githubusercontent.com/101192229/168404179-6cbaebcc-1d65-40fd-982b-ddd283afa4dd.PNG)



## PCB Layout Design on EAGLE PCB Design Software
![download](https://user-images.githubusercontent.com/101192229/168404202-b58bdba4-b809-4a42-9e0e-4661ca611ec5.jpg)

## Etched PCB 

![images](https://user-images.githubusercontent.com/101192229/168404231-2ae39b04-f079-4132-8f13-e71bd8f36a02.jpg)



## Model 
![download (1)](https://user-images.githubusercontent.com/101192229/168404244-f83420cc-1bf4-4b3a-aa15-8954af64d295.jpg)

## Components used
    1. AT89C51
    2. Capacitor
    3. Battery
    4. Switchs
    5. Alarm

## Software used
    1. SimulIDe
    2. Visual Studie Code
    
    
## Research
We have implemented a model that senses rains and automatically switches on the wiper and adjusts its speed according to the intensity of the rain. As the intensity of the rain increases, the speed of the wiper increases to a certain level. According to our observations, the wiper takes 2.2 seconds when a drop of water falls on the sensor, while it takes only 1.4 seconds when the sensor is submerged in a glass of water. We learned how to interface servo motor with AT89C51 Microcontroller and also the rain sensor module interfacing with AT89C51 Microcontroller.


Further modifications in the circuit will lead to controlling the speed of the wiper to a more accurate sense. Currently the wiper moves at two different speeds. By modifying the code we can have different speed for different amount of rain. Also we can use this automated car wiper along with other automated features to make a Smart Car.

## 4W's and 1 H's
   ### Why
    1. To blink two LED's using a switch with AT89C51.
    2. To understand basic concepts of ATmega328.
   ### Where
    1. It can be used in many vechicles.
    2. It can be used in car and trucks.
   ### Who
    1. It can be used by students to learn about AT89C51.
    2. It can be used by anyone who are new to embedded programming language.
   ### When
    1. People are trying to learn an embedded programming language.
    2. It can be implemented anywhere where there is a need to control Wiper via software.
   ### How
    1. By using software to exceute the program.
    2. By uploading the program to AT89C51.


## SWOT Analysis
   ### Strengths
    1. Simple to understand and implement.
    2. Cost effective.
   ### Weakness
    1. Very simple concept that is useful only for learning purposes.
   ### Opportunities
    1. This program can be made more complex by adding more components and features.
   ### Threats
    1. Advanced programs that are simple enough for beginners are already available.

