#include "main.h"

/**
* is_prime_number - tests if a number is prime
*
* @n: number to be tested
*
* Return: 1 on success and 0 when number isn't prime
*/

int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prime_calc(n, n - 1));
}

/**
* prime_calc - recursive function to check prime numbers
*
* @n: input number for testing
*
* @j: iteration number
*
* Return: 1 when n is prime and 0 when not
*/

int prime_calc(int n, int j)
{
if (j == 1)
return (1);
if (n % j == 0 && j > 0)
return (0);
return (prime_calc(n, j - 1));
}

