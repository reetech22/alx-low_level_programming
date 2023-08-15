#include "main.h"

/**
 * print_sign - prints a sign of a number
 * Return: 1 (sucess) or -1
 *@n: parameter to be checked
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
