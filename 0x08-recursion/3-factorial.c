#include "main.h"

/**
  * factorial - recursive function to compute factorial of n
  *
  * @n: parameter for the factorial function
  *
  * Return: n on success
  */
int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);
	return (n * factorial(n - 1));
}
