# ESP32 XiaoZhi Bot 🤖

This is the ESP32 voice bot project we have been building.

The idea is pretty simple: the ESP32 handles the bot side, Wi-Fi connects it to the services, and the server side can give it extra tools.

## What is in here
- ESP32 Wi-Fi test firmware
- Beginner setup guides
- Wiring guides
- Safe configuration templates
- MCP tool setup
- Debugging and testing steps

## The big picture
Think of it like a tiny team:

1. 🎤 The microphone hears you.
2. 🧠 The XiaoZhi firmware handles the voice-assistant side.
3. 📡 Wi-Fi connects the ESP32 to the server.
4. 🧰 MCP gives the bot extra tools.
5. 🔊 The speaker lets it talk back.

## Tools we are building around it
- Wikipedia lookup
- YouTube playback through the configured integration
- Email features when configured

## Start here
1. Read docs/START_HERE.md.
2. Copy the local Wi-Fi config example to the real local config file.
3. Put your Wi-Fi details in that local file.
4. Upload the Wi-Fi test firmware.
5. Make sure Wi-Fi works before moving to the voice features.
6. Then add the MCP tools one at a time.

## One big rule
Never put passwords, API keys, access tokens, or private URLs into GitHub.

The full upstream XiaoZhi firmware is maintained separately, while this repo is the easier project layer around it.

## Run in VS Code
Install the recommended PlatformIO extension and open this repository. Run python run.py when you want the browser dashboard; Chrome opens automatically. Use the normal PlatformIO Build, Upload, and Serial Monitor controls for the ESP32 firmware. The browser dashboard does not replace the firmware setup.


## Browser mode

The ESP32 bot now has a simple Chrome dashboard for the project.

### Start it

Run:

`python run.py`

Chrome opens the dashboard automatically.

The browser dashboard is an easy project control/info page. It does **not** replace the ESP32 firmware, PlatformIO, the microphone/audio hardware, or the MCP server.

### ESP32 workflow

Use the browser dashboard for the easy project interface.

Use PlatformIO in VS Code for:

- Build
- Upload
- Serial Monitor
- Firmware debugging

Keep Wi-Fi passwords, email credentials, API keys, access tokens, and private URLs out of GitHub.
