# Timer-Interrupt-LED-Blink
A simple project demonstrating how to blink an LED at 1-second intervals using Hardware Timer Interrupts instead of delay() (using arduino uno

Below is a screenshot of the circuit design created in Thinkercad.

![Bildschirmfoto_14-1-2026_104442_www tinkercad com](https://github.com/user-attachments/assets/bc177957-7520-4fd9-b4c6-fcf283114d30)

The project uses Timer1 because its 16-bit resolution is required to achieve a long delay like 1 second. Timer0 and Timer2 are only 8-Bit and would overflow too quickly.

To calculate the value for the Output Compare Register (OCR1A), we use this formula:

OCR1A = f(clock)/N *f(target frequency)

* so, f(clock) is the system clock speed of the arduino uno (16MHz)   
* N: This is the prescaler. Since the timer can only count to 65,535 (Timer1), 16MHz is too fast. The prescaler slows down the clock by only counting every 1024th tick.   
* f(target frequency): This is our target frequency 1Hz. We want the interrupt t trigger once every second.(1/1s = 1Hz).   
* at the end we subtract -1 because the timer starts counting at 0.






