# Orange Pi Robot Circuits and Wiring 🔌

This document records the wiring plan used for the robot project.

## 1. Orange Pi ↔ Arduino Uno UART

The planned serial connection is:

| Orange Pi | Arduino Uno |
|---|---|
| TXD0 | RX0 / digital pin 0 |
| RXD0 | TX1 / digital pin 1 |
| GND | GND |

### Important voltage note

The Arduino Uno uses 5 V logic while the Orange Pi GPIO uses 3.3 V logic.

Do not blindly connect a 5 V Arduino TX signal into an Orange Pi RX GPIO.

Use an appropriate bidirectional level-shifting arrangement for the UART connection, especially on the Orange Pi RX line.

Also remember that the Uno's hardware serial pins are used by USB/programming. Disconnect or manage the UART connection when uploading sketches if it interferes with programming.

## 2. Arduino Uno + L293D motor shield

The L293D shield sits on the Uno and drives the four motors.

Conceptually:

    Arduino Uno
         |
      L293D shield
       /  |  |  \
      M1  M2 M3  M4
       \  |  |  /
        4WD chassis

The motor supply must be appropriate for the motors and shield.

Do not feed motor power through an Orange Pi GPIO.

## 3. Ultrasonic sensor

The ultrasonic sensor is connected to the Arduino because the Arduino handles the fast sensor/motor loop.

Typical connections are:

    Ultrasonic VCC  -> appropriate supply
    Ultrasonic GND  -> GND
    TRIG            -> Arduino GPIO selected by firmware
    ECHO            -> Arduino GPIO selected by firmware

The exact GPIO numbers must match the Arduino sketch. Do not assume a pin number from this documentation alone.

## 4. IR cliff sensor

The IR cliff sensor was tested during development.

If the sensor output is permanently stuck at one state, do not build autonomous edge behavior around it yet.

Check:

- VCC
- GND
- OUT
- Sensor height above the floor
- Sensor adjustment potentiometer, if present
- Whether the sensor is active-high or active-low

Once the sensor gives reliable changes over a floor edge, it can be used as a safety stop.

## 5. Orange Pi USB camera

The USB camera connects directly to the Orange Pi USB port.

    USB camera
        |
        | USB
        v
    Orange Pi Zero 3

This replaces the earlier ESP32-CAM idea.

The robot's vision pipeline should use the camera device exposed by Linux, such as /dev/video*.

## 6. MP3/audio module

The planned UART connection is:

    Orange Pi TXD2 -> MP3 module RX
    Orange Pi RXD2 -> MP3 module TX
    Orange Pi 5V    -> module 5V
    Orange Pi GND   -> module GND

Check the exact MP3 module's logic-voltage requirements before connecting UART signals.

The module drives the speaker according to its own output requirements.

## 7. Power architecture

Keep logic power and motor power conceptually separate:

    Battery / motor supply
           |
           +---- motor driver ---- 4 motors

    Stable 5 V logic supply
           |
           +---- Orange Pi
           +---- Arduino / compatible peripherals

Connect grounds where required for signal communication.

Do not power the motors from the Orange Pi.

## 8. Fan

The fan should not be connected directly to an Orange Pi GPIO.

Use an appropriate transistor/MOSFET or driver circuit and a suitable supply, with a flyback diode when required by the fan/load type.

The Orange Pi GPIO only provides the control signal.

## 9. Complete signal map

    [USB Camera]
          |
         USB
          |
    [Orange Pi Zero 3]
       |       |       |
      UART    UART    Wi-Fi
       |       |       |
       v       v       +---- Internet
    [Arduino] [MP3]
       |         |
    [L293D]   [Speaker]
     / | | \
    M1 M2 M3 M4
       |
    4WD chassis

    Arduino
      |
      +---- Ultrasonic
      |
      +---- IR cliff sensor (optional)

## Before powering the robot

1. Verify every GND connection.
2. Verify the motor supply voltage.
3. Verify the Orange Pi supply.
4. Verify UART voltage levels.
5. Remove motors from the circuit during first control tests when practical.
6. Test one subsystem at a time.
