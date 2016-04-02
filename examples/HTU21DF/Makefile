# Arduino Make file. Refer to https://github.com/sudar/Arduino-Makefile

#ARDUINO_QUIET = 1
ROBOT = $(HOME)/robot

BOARD_TAG = mega
BOARD_SUB = atmega2560

ARDUINO_DIR = $(ROBOT)/arduino-1.6.7
AVR_TOOLS_DIR = /usr
AVRDUDE_CONF = /etc/avrdude.conf
ARDUINO_PORT = /dev/ttyACM0

# No reset and no init modem
#MONITOR_CMD = picocom -l -i -r
MONITOR_CMD = picocom -l

# Custom path for libs (default: $(HOME)/sketchbook/libraries)
#USER_LIB_PATH = $(HOME)/sketchbook/Robotics

ARDUINO_LIBS = Wire              \
               TemperatureSensor

CXXFLAGS=-std=c++11 -std=c++1y -fno-move-loop-invariants -Wall -Wno-uninitialized -Werror \
         -U__PROG_TYPES_COMPAT__
# Enable float type on sprintf
#LDFLAGS=-lprintf_flt -lm
# Fix bug with segfault during compilation
#CXXFLAGS=-fno-move-loop-invariants

include $(ROBOT)/Arduino-Makefile/Arduino.mk
