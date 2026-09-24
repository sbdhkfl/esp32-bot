# MCP Toolbox

MCP gives the assistant extra tools.

    ESP32
      |
      | Wi-Fi
      v
    MCP server
      +-- Wikipedia
      +-- YouTube
      +-- Email

The ESP32 is the little robot. The MCP server is the toolbox.

## Email

Do not store an email password on the ESP32.

Instead:

1. ESP32 asks the MCP server to send an email.
2. The server authenticates with the email provider.
3. The server sends the message.
4. ESP32 receives the result.

## Security

Never make an MCP endpoint publicly writable without authentication.
