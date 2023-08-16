#include "main.h"

/**
 * print_times_table - prints times table of input,
 * starting with 0
 *@b: value of times table to be printed
 */
void print_times_table(int b)
{
	int num, multp, prod;

	if (b >= 0 && b <= 15)
	{
	for (num = 0; num <= b; num++)
	{
	_putchar('0');
	for (multp = 1; multp <= b; multp++)
	{
	_putchar(',');
	_putchar(' ');
	prod = num * multp;
	if (prod <= 99)
	_putchar(' ');
	if (prod <= 9)
	_putchar(' ');
	if (prod >= 100)
	{
	_putchar((prod / 100) + '0');
	_putchar(((prod / 10)) % 10 + '0');
	}
	else if (prod <= 99 && prod >= 10)
	{
	_putchar((prod / 10) + '0');
	}
	_putchar((prod % 10) + '0');
	}
	_putchar('\n');
	}
	}
}

