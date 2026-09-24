# Orange Pi Robot Software Plan

## Main controller

The Orange Pi runs the main robot program.

A useful project layout is:

    robot/
    +-- main.py
    +-- config/
    +-- hardware/
    |   +-- arduino.py
    |   +-- audio.py
    |   +-- camera.py
    |   +-- sensors.py
    +-- vision/
    |   +-- faces.py
    |   +-- objects.py
    +-- assistant/
    |   +-- commands.py
    |   +-- knowledge.py
    |   +-- internet.py
    +-- notifications/
    |   +-- email.py

## Arduino protocol

Keep the Orange Pi and Arduino communication simple.

Example commands:

    FORWARD
    BACKWARD
    LEFT
    RIGHT
    STOP

Sensor responses can use simple messages such as:

    DISTANCE:35
    CLIFF:0

The exact protocol can be expanded later.

## Vision pipeline

1. Open the USB camera.
2. Capture frames.
3. Detect a face or object.
4. If a face is recognized, identify the person.
5. If the face is unknown, follow the configured notification policy.
6. Run object detection when requested.
7. Return the result to the assistant.

## Voice command pipeline

    User speaks
        |
        v
    speech recognition
        |
        v
    command parser
        |
        +---- movement
        +---- vision
        +---- object lookup
        +---- knowledge
        +---- internet search
        +---- notification
        |
        v
    robot response

Because the USB microphone is not currently available, microphone input should remain a separate module until hardware is available.

## Open-source goal

Prefer free/open-source software and local processing.

Do not hardcode paid API keys.

Where an internet service is optional, the robot should still have a useful local control path.
