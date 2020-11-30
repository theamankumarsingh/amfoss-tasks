## Largest palindrome product
There were two approaches one could take to solve this question, I took the palindrome approach.
                
In this approach, rather than iterating a new number, check if its palindrome, then do whatever is asked in the question, we can simply iterate three digit numbers, create palindromes from them and then do whatever is asked by the question. This saves some time.

## How the code works:
getPalindrome function computes the smallest 6 digit palindrome made from the product of two 3 digit numbers. Now if we do some math, we find that a 6 digit palindrome will ALWAYS be divisible by 11. In fact, an even digit palindrome will always be divisible by 11. 

**PROOF**: To get divisibility test by 11, we subtract sum of even digits with sum of odd digits and if the difference is divisible by 11, the number is divisible by 11. In an EVEN digit palindrome, 1st term is equal to last term (which is even numbered term). 2nd term is equal to second-last term (which is odd numbered term) and so on. Thus, the divisibility test difference will always come 0 and 0 is divisible by 11.

Now back to the getPalindrome function. We are sure that if the palindrome number N can be represented by two 3 digit numbers A X B, then either of A or B is divisible by 11. So we check 3 conditions:

1. we compute factor A by multiplying a two digit number with 11 (to be precise, from 10 to 90). Then we check if N is divisible by that three digit product. This is to ensure the number is just not divisible by 11 only but by a three digit factor and the factor is divisible by 11

2. Check if the palindrome is less than our limit.

3. Also check if the other factor B is a three digit number as well.

If all these conditions are met, we return then palindrome, else check for other numbers.

---

### [(BACK)](https://github.com/theamankumarsingh/amfoss-tasks/tree/main/task-15)
