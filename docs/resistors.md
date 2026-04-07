# Resistors

General,
- no polarity 

## Multimeter
Measuring Ohms ... always use higher range.

Ranges,
- 200 → reads in Ω
- 2K / 2000 → still Ω (but higher range)
- 20K / 200K → readings are in kΩ
- 2M / 20M → readings are in MΩ

## Types

Potentiometer,
- variable resistor
- resistance controlled via quantity of resistive material included in circuit

Photoresistor,
- squiggle on the top
- resistance value changes with light quantity
- use another resistor to set the current ceiling
- use the SerialMonitor to measure voltage
- `R ∝ 1 / Light`

Thermistor,
- resitance value changes with temperature 
- use another resistor to set the current ceiling
- use the SerialMonitor to measure voltage

Negative Temperature Coefficient ( NTC )
: `R ∝ 1 / Temperature`

Positive Temperature Coefficient ( PTC )
: `R ∝ Temperature`
