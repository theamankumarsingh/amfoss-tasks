I used dynamic programming concept to speed up the algorithm.

I used a vector f to store fibonacci terms. The user inputs t -> number of test cases, and n which is the limit. It computes sum and displays it.

## How the code works?
The fib function is responsible for pushing new terms in the vector. As ith term is equal to sum to i-1th and i-2th term, we can use dynamic approach to store terms as we compute terms for future use. Like we computed 5th term for one test case, and in the other test case we need to find 5th term again. Rather than computing all the series again, we can quickly get it from the vector.

So we take ith term, pass it to fib function. The function first sees if ith is already computed (i greater than currect max size of vector or not). If i is greater than vector size, then that means we dont have a number at i-1 position. So then we compute the next term. Else, the term is there and fib() does nothing. Then we check if the term is even or not and sum it if its even. Finally we display the result and reset vars for next iteration.
