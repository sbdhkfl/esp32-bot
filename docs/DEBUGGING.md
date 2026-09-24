# ESP32 XiaoZhi Bot debugging guide

## Board is not detected
- Use a USB data cable.
- Try another USB port.
- Check the board's USB-to-serial driver.
- Confirm the correct serial port appears.

## Upload fails
- Select the exact ESP32 board variant.
- Select the correct serial port.
- Close programs that are using the serial port.
- Use the board's BOOT/RESET procedure if required by the board.
- Try a slower upload speed if uploads are unreliable.

## Wi-Fi fails
- Check SSID and password.
- Confirm the network is available to the ESP32.
- Add a connection timeout and print status messages.
- Keep credentials out of public source code.

## Microphone does not work
- Verify the microphone model and wiring.
- Verify power and ground.
- Verify the configured I2S/input pins.
- Test audio input before testing speech or assistant features.

## Speaker does not work
- Verify amplifier power and ground.
- Verify the configured I2S/output pins.
- Confirm the speaker is connected to the correct amplifier output.
- Test known-good audio before debugging network features.

## Repeated resets
- Check the power supply and USB cable.
- Disconnect optional peripherals and test the board alone.
- Inspect serial boot logs.
- Check for brownout, watchdog, stack, or heap errors.

## Network or MCP endpoint fails
- Verify the endpoint is reachable from the ESP32's network.
- Verify host, port, path, and timeout settings.
- Check server logs.
- Make network failures recoverable instead of blocking the main loop.

## Audio is distorted or silent
- Check sample rate, bit depth, channel configuration, and I2S pin mapping.
- Confirm the amplifier expects the selected signal format.
- Test with a minimal audio example.

## General debugging method
1. Power
2. USB/serial
3. Firmware upload
4. Basic board test
5. Audio input/output
6. Wi-Fi
7. Network services
8. Assistant features

Change one thing at a time and keep the complete error message when asking for help.
