# Analog PID Motor Speed Controller

An analog closed-loop DC motor speed controller designed using operational amplifiers, PWM generation, and encoder-based feedback. The system maintains a desired motor speed under varying load conditions by continuously adjusting the motor drive signal using a PID control algorithm implemented entirely in analog hardware.

## Overview

This project was developed as part of the EN2111 – Electronic Circuit Design module at the Department of Electronic and Telecommunication Engineering, University of Moratuwa.

The controller measures motor speed using a magnetic encoder, converts the encoder frequency into a proportional voltage, and compares it with a user-defined reference speed. The resulting error signal is processed by proportional, integral, and derivative control stages to generate a PWM signal that drives the motor.

## Breadboard Implementation

<p align="center">
  <img src="img/BB4.png" width="70%" />
  <br>
  <em>Initial breadboard implementation of the analog PID motor speed controller.</em>
</p>

<p align="center">
  <img src="img/BB10.jpeg" width="70%" />
  <br>
  <em>Final breadboard prototype with integrated feedback, PID, PWM, and motor driver stages.</em>
</p>

## Features

- Analog PID controller implementation
- Closed-loop speed control
- Encoder-based speed feedback
- Frequency-to-Voltage (F-V) conversion
- PWM motor control
- Mechanical disturbance rejection
- Adjustable speed reference
- Real-time error correction
- Breadboard implementation and testing

## System Architecture

```text
Reference Speed
       ↓
 Error Generator
       ↓
 PID Controller
   (P + I + D)
       ↓
 PWM Generator
       ↓
 Motor Driver
       ↓
    DC Motor
       ↑
Encoder Feedback
       ↑
Frequency-to-Voltage Converter
