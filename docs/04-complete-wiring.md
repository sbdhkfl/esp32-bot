# 04 - Complete Wiring

This is the wiring plan for the ESP32 bot.

## 1. Programming and power
ESP32 board <-> USB data cable <-> computer during flashing.

Use the USB connection that belongs to your exact board.

## 2. Speaker
If the board has a speaker connector or onboard audio output, use the connection shown by that board documentation.

If an external amplifier is being used:

**ESP32 audio output -> amplifier input -> speaker**

Do not connect a speaker that needs an amplifier directly to a GPIO.

## 3. Microphone
If the board already has a microphone, there is no extra microphone wiring.

If the build uses an external microphone, the wiring depends on whether it is I2S, I2C, analog, or another supported interface.

The exact pins need to match the exact board and firmware.

## 4. Moving-car version
If the ESP32 bot is also a car:
- ESP32 control signals -> L293D control inputs
- Motors -> L293D motor outputs
- Motor battery -> L293D motor power input
- ESP32 -> its own regulated power
- Common signal ground between controller and driver

Never power the motors from an ESP32 GPIO.

## 5. MCP connection
**ESP32 -> Wi-Fi -> MCP endpoint**

Wikipedia, YouTube, and email tools do not need extra electrical wiring.

## 6. Important board rule
ESP32 boards that look similar can have different audio pins, buttons, LEDs, and other connections.

So we use the exact board pinout instead of guessing.