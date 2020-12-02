## Largest prime factor
There are many algorithms to compute prime numbers (sieve of Eratosthenes, Pollard Rho, etc.). For this question, I used root method.

## How the code works?
maxprime() is the function responsible to compute maximum prime factor of a number. We first use right shift to continuously divide number N by 2. As 2 is the only even prime factor, this makes the N odd.

Next we run another for loop which tests all number greater than 2 and less than (equal to) root of the odd number N. We can mathematically see that we cannot find a prime number outside this domain. Thus saving our precious computation time.

**PROOF:** A odd number N having a prime factor, can be represented by N = p * f, where p and f are factors of N. Both p and f cannot be greater than sqrt(N) (else number will be greater than N). So actually, one factor is greater equal to sqrt(N) and other factor is less than equal to sqrt(N). Thus we are guranteed to find a prime factor in sqrt(N) range if N is NOT itself a prime.

---

### [(BACK)](https://github.com/theamankumarsingh/amfoss-tasks/tree/main/task-15)
