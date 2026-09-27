# 04 - Complete Wiring

## Core voice bot

Use the exact connector labels printed on the specific Xiaozhi-compatible ESP32 board because audio pins differ between board designs.

### Power/programming
ESP32 board <-> USB data cable <-> computer during flashing.

### Speaker
If the board has an onboard amplifier/speaker connector, use the documented connector.

If an external amplifier is used:
ESP32 audio output -> amplifier input -> speaker.

Never connect a speaker requiring an amplifier directly to a GPIO.

### Microphone
If the board has an onboard microphone, no external microphone wiring is needed.

If the build uses an external digital microphone, wire according to that microphone's interface (I2S/I2C/analog) and the exact firmware pin configuration.

## Moving-car variant

If the ESP32 bot uses the L293D shield:
- ESP32 control signals -> the shield's supported control inputs
- motors -> the shield motor outputs
- motor power -> the shield motor supply
- ESP32 power -> its regulated supply
- common signal ground between controller and driver

Do not power motors from an ESP32 GPIO.

## MCP connectivity

ESP32 -> Wi-Fi -> local/server MCP endpoint.

No direct electrical wiring is needed for Wikipedia or YouTube tools.

## Why exact pins are configuration-dependent

ESP32 boards sold under similar names can route audio, buttons, LEDs, and motor-control signals differently. The firmware's pin definitions must match the exact board revision instead of guessing.
