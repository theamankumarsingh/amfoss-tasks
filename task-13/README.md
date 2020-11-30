# Circuit Design
A basic circuit (application: in safety)

I used to code Arduino (I own an Uno, Mega and a Raspberry Pi 3 [model-B] :D), so coding part wasn't tough.
The circuit doesn't look that clean but yes, It Works!!!

I used a 4 pin HC-SR04 Ultrasonic sensor (with VCC, Trigger, Echo and Ground). VCC is connected to +5 Volts, Ground is connected to ground on the board.
The motor I used is a simple DC motor. Using PWM, we can variate speed of the motor. Usually, the motor is connected via a transistor, to not put load on the circuit board. But as the motor is of less power, we can connect this directly. 
I used a Red LED to inform the user if the motor is off or on

This setup can be used as a safety mechanism in complex machinery.

---

### [(BACK)](https://github.com/theamankumarsingh/amfoss-tasks)
