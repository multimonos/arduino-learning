.PHONY: build blinker

PORT:=/dev/cu.usbmodem101
FQBN=arduino:avr:mega


build:
	arduino-cli compile \
		--fqbn $(FQBN) \
		--verbose \
		--clean \
		--export-binaries

port:
	arduino-cli board list

# Installs and executes the compiled program.
upload:
	arduino-cli upload \
		--fqbn $(FQBN) \
		--port $(PORT) \
		--verbose

deploy: build upload

# Attaches a sketch to a board.
attach:
	arduino-cli board attach \
		--port $(PORT) \
		--fqbn $(FQBN) \
		--verbose


