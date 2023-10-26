#include "main.h"

/**
  * _pow_recursion - recursive function to raise a value of x to the power of y
  *
  * @x: parameter used as the base
  *
  * @y: exponent parameter
  * Return: value passed on success
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	if (y == 0)
	return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
