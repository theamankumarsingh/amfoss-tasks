## Is This JEE?
This question was moderate.

I first found the derivative of the given function. It had the complex form of tan(x) and all. I figured out that I cannot find local minima by differentiation method (the calculation would be very complex).

The very first algorithm that came to my mind was gradient descend. So I implemented that using ternary search (often used to find maxima and minima of curves).

## How the code works?
The minimum function is responsible for finding minimum by performing the standard ternary search algorithm. Accuracy variable is set to 10^-9 (can be tweaked) to get as accurate the result as possible.

The f() returns the value of the given function. After the minimum is computed, the floating value is streamed to setprecision() which sets it to 10 decimal precision (10 digits). Then the output is displayed.

---

### [(BACK)](https://github.com/theamankumarsingh/amfoss-tasks/tree/main/task-12)
