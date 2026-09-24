# START HERE

If you are 7 years old and building this, no problem. We will treat the ESP32 like a tiny robot brain.

## 1. Know the parts

You normally need:

- ESP32 board
- USB data cable
- Microphone hardware supported by your XiaoZhi board
- Speaker or amplifier hardware
- Wi-Fi
- Arduino IDE or PlatformIO

You do not need an Orange Pi for this project.

## 2. Keep secrets private

Never upload Wi-Fi passwords, Gmail passwords, API keys, access tokens, or private MCP URLs.

## 3. Test the ESP32 first

Copy firmware/wifi_test/local_config.h.example to firmware/wifi_test/local_config.h.

Put your own Wi-Fi name and password in local_config.h.

Upload firmware/wifi_test/wifi_test.ino and open Serial Monitor at 115200 baud.

## 4. Add XiaoZhi

The voice assistant firmware is maintained by the upstream XiaoZhi project:

https://github.com/78/xiaozhi-esp32

Use the configuration for your exact ESP32 and audio hardware.

## 5. Add MCP tools

MCP is like giving the robot a toolbox.

Examples:

- Wikipedia
- YouTube
- Email

Keep email credentials on the server, not inside the ESP32.

## 6. Build one thing at a time

1. ESP32 powers on.
2. Wi-Fi works.
3. Microphone works.
4. Speaker works.
5. XiaoZhi conversation works.
6. MCP connects.
7. Wikipedia works.
8. YouTube works.
9. Email works.
10. Test everything.
