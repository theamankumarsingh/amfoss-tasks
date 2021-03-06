## Multiples of 3 and 5
We can do the program in O(1) complexity if we observe mathematically and come up with a formula for sum of numbers less than N and divisible by k.

**FORMULA:** sum = (k * (N/k) * (N/k + 1))/2

NOTE: Here we are doing floor division.

## How the code works?
Using formula which we can very easily derive, we compute sum of numbers less than N and divisible by 3. We do same with 5. We add both up, and we'll find that the numbers divisible by both 3 and 5 are added twice. So we finally subtract sum of numbers less than N and divisible by 15 to get rid of that extra term in summation. The resultant sum we get is the final result.

---

### [(BACK)](https://github.com/theamankumarsingh/amfoss-tasks/tree/main/task-15)
