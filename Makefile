.PHONY: build docs components

kit:
	open ./components/elegoo-most-complete-starter-kit/

tinker:
	open https://www.tinkercad.com/things/lp4U523myRg-sim/editel

pinout:
	open ./docs/Pinout-Mega2560rev3_latest.pdf

pinout-cpp:
	cat ~/Library/Arduino15/packages/arduino/hardware/avr/1.8.7/variants/mega/pins_arduino.h
