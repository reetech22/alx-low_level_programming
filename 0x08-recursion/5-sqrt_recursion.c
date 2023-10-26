#include "main.h"

/**
* _sqrt_recursion - function to calculate natural square root of a digit(S)
*
* natural_sqrt_recursion - recursive function for calculating sqrt of a number
*
* @n: parameter used in the recursive function
*
* Return: sqrt of a number if success
*/

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);
return (sqrt_calc(n, 1));
}

/**
* sqrt_calc - helper function
*
* @j: parameter function
*
* @n: parameter function
*
* Return: thr square root on success
*/

int sqrt_calc(int n, int j)
{
if (j * j == n)
return (j);
if (j * j > n)
return (-1);
return (sqrt_calc(n, j + 1));
}

