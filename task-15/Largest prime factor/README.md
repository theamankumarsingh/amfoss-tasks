There are many algorithms to compute prime numbers (sieve of eratosthenes, Pollard Rho, etc). For this question, I used root method.

## How the code works?
maxprime() is the function responsible to compute maximum prime factor of a number. We first use right shift to continuously divide number N by 2. As 2 is the only even prime factor, this makes the N odd.

Next we run another for loop which tests all number greater than 2 and less than (equal to) root of the odd number N. We can mathematically see than we cannot find a prime number outside this domain. Thus saving our precious computation time.

**PROOF:** A odd number N having a prime factor, can be represented by N = p * f, where p and f are factors, p is prime, f can be or cannot be prime. 

Lastly if N is not reduced to 1, that means N itself is prime, and we return that.
