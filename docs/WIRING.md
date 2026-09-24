# Wiring Guide

Exact pins depend on the ESP32 XiaoZhi board you are using.

Do not connect a microphone or amplifier to random GPIO pins.

Different boards use different pins for I2S microphone, I2S speaker, buttons, LEDs, and power.

## Basic idea

    +-------------------+
    |       ESP32       |
    |                   |
Mic |----> audio input  |
    |                   |
    | Wi-Fi ----------->|---- Internet
    |                   |
Spk |<---- audio output |
    +-------------------+

ESP32 GPIO pins use low-voltage logic. Never connect a higher voltage directly to a GPIO.

Always confirm the GPIO numbers in the firmware before wiring.
