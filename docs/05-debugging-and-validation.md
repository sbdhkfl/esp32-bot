# 05 - Debugging and Validation

Test in this order:

1. Confirm the ESP32 powers on.
2. Confirm the computer detects the USB device.
3. Flash a minimal test firmware.
4. Confirm serial logs.
5. Test microphone input.
6. Test speaker output.
7. Test Wi-Fi.
8. Test the MCP endpoint independently.
9. Test each MCP tool independently.
10. Only then combine everything.

## Common failures

### ESP32 not detected
Try another known-good data cable and USB port. A charge-only cable cannot upload firmware.

### Voice input does not work
Check microphone configuration, I2S pins, sample rate, and board-specific audio initialization.

### No sound
Check amplifier/speaker wiring and volume. Do not assume a GPIO can drive a speaker.

### MCP works on computer but not ESP32
Check that the ESP32 can reach the server's IP/port and that the endpoint is bound to an address reachable from the ESP32.

### Wi-Fi works but tools fail
Test the MCP HTTP transport independently before debugging the ESP32 client.

## Rule

Every hardware subsystem gets a standalone test before integration.
