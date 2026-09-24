# Orange Pi Robot Checklist

## Hardware

- [x] Orange Pi Zero 3 2 GB
- [x] 64 GB microSD card
- [x] Arduino Uno
- [x] L293D motor-driver shield
- [x] Four gear motors
- [x] Ultrasonic sensor
- [x] USB camera
- [ ] MP3/audio module final wiring
- [ ] Speaker final wiring
- [ ] Fan driver circuit
- [ ] Reliable IR cliff sensor setup
- [ ] USB microphone (not currently available)

## Core tests

- [x] Orange Pi boots Linux
- [x] Wi-Fi setup
- [x] USB camera detected by Linux
- [ ] Camera application produces a usable image
- [ ] Orange Pi ↔ Arduino UART test
- [ ] Arduino motor test
- [ ] Four-motor driving test
- [ ] Ultrasonic test
- [ ] Audio test
- [ ] Fan test

## Intelligence features

- [ ] Local voice-command pipeline
- [ ] Movement command parser
- [ ] Obstacle avoidance
- [ ] Face detection
- [ ] Known-person recognition
- [ ] Known-person greeting
- [ ] Unknown-person photo workflow
- [ ] Email notification
- [ ] Object detection
- [ ] Object registration/learning workflow
- [ ] Local knowledge
- [ ] Internet search
- [ ] Come-to-user behavior
- [ ] Object-directed behavior

## Features intentionally removed or replaced

- OLED display: removed from the robot plan.
- ESP32-CAM: replaced by the USB camera connected directly to the Orange Pi.
- Controlling other ESP devices around the home: not part of the robot plan.
- Paid/proprietary AI APIs: avoid where practical; favor open-source/free software.
