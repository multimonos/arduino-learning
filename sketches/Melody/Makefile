.PHONY: build blinker

PORT:=/dev/cu.usbmodem101
FQBN=arduino:avr:mega

port:
	arduino-cli board list

build:
	arduino-cli compile \
		--fqbn $(FQBN) \
		--verbose \
		--clean \
		--export-binaries

upload:
	arduino-cli upload \
		--fqbn $(FQBN) \
		--port $(PORT) \
		--verbose

monitor:
	arduino-cli monitor \
		--fqbn $(FQBN) \
		--port $(PORT)

attach:
	arduino-cli board attach \
		--port $(PORT) \
		--fqbn $(FQBN) \
		--verbose


deploy: build upload 
