#!/bin/bash
set -e
cd "$(dirname "$0")"
echo "Starting ESP32 Bot browser dashboard..."
python3 run.py
