# Arduino in 90 minutes

- [Arduino masterclass | full programming workshop in 90 minutes](https://www.youtube.com/watch?v=BLrHTHUjPuw)


## What needed

- hardware
- ide ... or the `arduino-cli` via `brew install arduino-cli`
- code ... c, c++


## To buy
- recommended Arduino UNO rev3


## Notes

- GPIO general purpose input-output
- pins can be input / output
- output -> source voltage, set pin high
- input -> config read of voltage, off, set pin low
- `Tx` transmit
- `Rx` receive
- `PWM` pulse width modulation


Bare metal
- interrupts
- polling
- basically a `while (1) { ... }` loop

RTOS
- provides more abstraction
- higher level
- kernel, scheduling, primitives
- events, timers, blocking, sleep ... wakeup for tasks
- heap
- drivers maybe ... device tree

Peripherals
- GPIO ... trigger inputs or poll
- timers
- watchdog ... restart on crash
- DAC vs ADC ... the real world is analogue
- IMV inertial measurement unit

Communication
- microcontroller to microcontroller
- I2C, SPI, UART protocols
- BEL, MQTT, Zigbee, IOT, Bluetooth low energy
- CANBUS automotive ( differential signalling )

## Resources

- [Octopart](https://octopart.com)
