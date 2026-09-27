# 03 - Complete Hardware List

This is the hardware list for the ESP32 bot.

## Core hardware
| Hardware | Qty | Purpose |
|---|---:|---|
| ESP32 XiaoZhi-compatible board | 1 | Main voice bot |
| USB/data cable for the board | 1 | Programming and power |
| Speaker/audio amplifier hardware | 1 set | Audio output |
| Microphone supported by the selected board/build | 1 | Voice input |

## Moving-car hardware
If we build the bot into a moving car, the hardware is:
- L293D motor driver/shield
- DC gear motors
- Robot chassis and wheels
- Battery/power system that matches the motor driver

## MCP/server side
The ESP32 can connect to the MCP endpoint for tools such as:
- Wikipedia lookup
- YouTube playback
- Email features when configured

The MCP server is separate from the ESP32 hardware.

## Project rule
Keep the ESP32 firmware lightweight. Bigger processing and external tools belong on the server side.