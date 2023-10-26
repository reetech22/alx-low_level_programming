#include "main.h"

/**
  * _print_rev_recursion - recursive function to print reverse string
  *
  * @s: reverse recursion parameter
  *
  * Return: Void
  */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
