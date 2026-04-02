# Board

Metadata,
```
name: Arduino Mega or Mega 2560 
fqbn: arduino:avr:mega 
core: arduino:avr
```

Pin assignments,
```
cat /Users/chopgood/Library/Arduino15/packages/arduino/hardware/avr/1.8.7/variants/mega/pins_arduino.h
```

## Digital Pins

- 54 digitals pins on the Mega
- output `~5V HIGH`
- output `0V LOW`
- `digitalWrite(int, HIGH|LOW)` controls the state of the pin
- `40mA` current limit applies to all
- avoid using pins `0, 1, 20, 21` as these have mixed concerns

## Analog Pins
- output `0V LOW -> 0`
- output `5V HIGH -> 255`
- output intermediate value `n = [0, 255]`
- not always fluctuating, but, if you need a value between `[HIGH, LOW]`

## Pulse Width Modulation
- achieve intermediate voltages by modulating the voltage pulse
