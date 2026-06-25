# Analog PID Motor Speed Controller

An analog closed-loop DC motor speed controller developed using operational amplifiers, encoder-based feedback, and PWM control. The system continuously regulates motor speed by comparing the desired reference speed with the measured speed and applying PID compensation entirely in analog hardware. The controller maintains stable operation and effectively rejects mechanical disturbances, demonstrating the fundamental principles of feedback control systems.

<p align="center">
  <img src="img/BB4.png" width="45%" />
  <img src="img/BB10.jpeg" width="45%" />
</p>

## Key Features

- Fully analog PID controller implementation
- Closed-loop DC motor speed regulation
- Encoder-based speed feedback
- Frequency-to-Voltage (F-V) conversion
- PWM-based motor drive control
- Mechanical disturbance rejection
- Adjustable reference speed
- Real-time feedback and error correction

## System Architecture

```text
Reference Speed
       ↓
 Error Generator
       ↓
 PID Controller
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
```

## Hardware Components

- N20 DC Motor with Magnetic Encoder
- TL071 Operational Amplifiers
- LM741 Operational Amplifiers
- L293D Motor Driver
- IN914 Diodes
- Resistors and Capacitors
- Potentiometers for PID tuning
- Dual ±12 V Power Supply
- 6 V Motor Supply

## Performance Evaluation

The controller was evaluated under reference speed changes and external mechanical load disturbances. Experimental results demonstrate stable closed-loop operation, reduced steady-state error, and rapid recovery following disturbances.

<p align="center">
  <img src="img/LoadDist1.jpg" width="40%" />
</p>

## Demonstrations

- Step Response Analysis
- Mechanical Disturbance Rejection
- Closed-Loop Speed Regulation

## Team

<p align="center">
  <img src="img/team.jpeg" width="40%" />
</p>

**Group 13**  
Department of Electronic and Telecommunication Engineering  
University of Moratuwa, Sri Lanka

## License

This project is intended for educational and academic purposes.
