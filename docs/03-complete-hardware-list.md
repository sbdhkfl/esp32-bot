# 03 - Complete Hardware List

This document is the hardware baseline for the ESP32 bot project.

## Core

| Hardware | Qty | Purpose |
|---|---:|---|
| ESP32 Xiaozhi-compatible board | 1 | Main voice/AI client |
| USB/data cable appropriate to board | 1 | Programming and power |
| Speaker/audio amplifier hardware from the build | 1 set | Audio output |
| Microphone hardware supported by the selected board/build | 1 | Voice input |

## Optional/feature hardware used in the project history

- L293D motor driver/shield if the bot is built as a moving car
- DC gear motors
- robot chassis and wheels
- battery/power system appropriate to the selected motor driver
- buttons for local controls
- sensors added by the specific firmware

## MCP/server side

The bot can connect to the local MCP endpoint for tools such as:
- Wikipedia lookup
- YouTube playback control through the configured integration

The MCP server is separate from the ESP32 hardware and must never require secrets to be committed to the repository.

## Project rule

Keep the ESP32 firmware lightweight. Heavy processing and external tool integrations belong on the server side.
