# EL_PSU
High Voltage Power Supply Unit for EL Displays

This is a modification of the most excellent work of Ben Krasnow at https://github.com/benkrasnow/EL_driver_multi

The primary motivation for these changes are to better support the needs of the EL displays found in https://github.com/jduanen/alienFontDisplay and https://github.com/jduanen/elClock.
In particular, to extend the life of these displays, I want to create a triangle (as opposed to, step) waveform so that the dv/dt of the signal exciting the display segments remains (close to) constant.

