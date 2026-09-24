# ESP32 XiaoZhi Bot 🤖

A beginner-friendly project for building an ESP32 XiaoZhi-style voice assistant.

## What this repository contains

- A simple ESP32 Wi-Fi test firmware
- Beginner setup and wiring guides
- Safe configuration templates with no passwords or API keys
- Documentation for connecting optional MCP tools

> This repository is the easy-to-understand project layer. The full upstream XiaoZhi voice firmware is maintained separately.

## The big picture

Think of the bot like a tiny team:

1. 🎤 Microphone hears you.
2. 🧠 XiaoZhi firmware handles the voice-assistant job.
3. 📡 Wi-Fi connects the ESP32 to the internet/server.
4. 🧰 MCP tools give the assistant extra abilities.
5. 🔊 Speaker/amplifier lets the bot talk back.

## Upstream XiaoZhi firmware

https://github.com/78/xiaozhi-esp32

## Start here

1. Read docs/START_HERE.md.
2. Copy firmware/wifi_test/local_config.h.example to firmware/wifi_test/local_config.h.
3. Put your Wi-Fi details in that local file.
4. Upload the Wi-Fi test firmware.
5. Only after Wi-Fi works, move on to the XiaoZhi voice firmware.
6. Then add MCP tools such as Wikipedia, YouTube, and email.

Never upload passwords, API keys, access tokens, or private URLs to GitHub.
