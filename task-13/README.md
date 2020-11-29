A basic circuit (application: in safety)

I used to code Arduino (I own an uno, mega and a raspberry pi 3 [model-B] :D), so coding part wasn't tough.
The circuit doesn't look that clean but yes, It Works!!!

I used a 4 pin Ultrasonic sensor (with VCC, Trigger, Echo and Ground). VCC is connected to +5 Volts, Ground is connected to ground on the board.
The motor I used is a simple DC motor. Using pwm, we can variate speed of the motor. Ususally, the motor is connected via a transistor, to not put load on the circuit board, but as the motor is of less power, we can connect this directly. 
I used LED light to tell the user if the motor is off or on.
The application of this can be in safety mechanism in complex machinary.
