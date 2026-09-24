# Orange Pi Zero 3 Robot 🤖

This is the separate larger robot project that works alongside the ESP32 XiaoZhi project.

## Brain

- Orange Pi Zero 3, 2 GB RAM
- 64 GB microSD card
- Linux/Armbian
- Wi-Fi
- USB camera connected directly to the Orange Pi

The Orange Pi is the main computer for the robot.

## Motor controller

- Arduino Uno
- L293D motor-driver shield
- 4 gear motors
- 4-wheel-drive chassis

The Arduino handles the real-time motor-control job while the Orange Pi handles higher-level intelligence.

## Sensors

- Ultrasonic distance sensor for obstacle avoidance
- IR cliff/edge sensor was tested during development. If its reading stays stuck, leave it disconnected until the wiring and sensor are verified.
- USB camera for vision

## Audio

The robot design includes an MP3/audio module and one speaker.

A USB microphone was considered, but one is not currently available. Do not assume a USB microphone is connected.

## Features

The planned robot software can be built around these capabilities:

### Movement

- Forward
- Backward
- Left
- Right
- Stop
- Come toward the user
- Basic autonomous obstacle avoidance

### Vision

The USB camera goes directly into the Orange Pi.

Planned vision features:

- Face detection
- Face recognition for known people
- Greeting known people by name
- Unknown-person detection
- Capture a photo when an unknown person is detected
- Object detection
- Learning or registering objects through a controlled software workflow

The robot should start with a small known-person list and expand it only after the basic camera pipeline works.

### Voice and intelligence

The long-term goal is a local/open-source assistant style robot.

Planned capabilities:

- Voice commands
- Natural-language movement commands
- Local knowledge
- Internet searches when available
- Object-related commands
- Commands such as coming to the user or interacting with a requested object
- Spoken responses through the audio system
- Fan control

The software should prefer free and open-source components and avoid paid APIs or proprietary AI services whenever practical.

### Notifications

An unknown-person workflow can capture an image and send a notification/email through a configured mail service.

Keep email credentials out of source code.

## Architecture

    User
      |
      | voice / commands
      v
    Orange Pi Zero 3
      |
      +---- USB camera
      |
      +---- Wi-Fi / Internet
      |
      +---- UART
      |       |
      |       v
      |    Arduino Uno
      |       |
      |       +---- L293D shield
      |       |       +-- Motor 1
      |       |       +-- Motor 2
      |       |       +-- Motor 3
      |       |       +-- Motor 4
      |       |
      |       +---- Ultrasonic sensor
      |       +---- IR sensor (optional/tested)
      |
      +---- UART ---- MP3/audio module ---- Speaker

## Important separation

This Orange Pi robot is separate from the ESP32 XiaoZhi bot.

Do not add an Orange Pi dependency to the XiaoZhi ESP32 firmware.

The ESP32 XiaoZhi bot can have its own MCP tools. The Orange Pi robot can have its own local robot software.

## Software layers

1. Linux/Armbian
2. Python robot controller
3. Camera/vision software
4. Voice/assistant software
5. Arduino serial-control protocol
6. Motor and sensor control
7. Audio output
8. Optional email/notification service

## Build order

Do not install and wire everything at the same time.

1. Boot Orange Pi.
2. Connect it to Wi-Fi.
3. Confirm the 64 GB SD card and Linux installation work.
4. Test the USB camera.
5. Test Orange Pi-to-Arduino serial communication.
6. Test Arduino motor control.
7. Test all four motors.
8. Add ultrasonic obstacle detection.
9. Add the audio module and speaker.
10. Add camera vision.
11. Add known-person recognition.
12. Add object detection.
13. Add voice commands.
14. Add autonomous behavior.
15. Add email/notification behavior.
16. Test the complete robot.

## Safety and reliability

- Use a suitable motor power source; do not power four motors directly from an Orange Pi GPIO.
- Share a common ground between UART-connected devices.
- Protect the Orange Pi GPIO/UART pins from incompatible voltage levels.
- Never connect a motor directly to a GPIO pin.
- Stop the motors immediately if serial communication fails.
- Keep secrets such as Wi-Fi and email credentials outside Git.
