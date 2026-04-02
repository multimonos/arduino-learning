.PHONY: build blinker

PORT:=/dev/cu.usbmodem101
FQBN=arduino:avr:mega


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

deploy: build upload
