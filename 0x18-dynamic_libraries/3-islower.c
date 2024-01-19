#include "main.h"

/**
 * _islower - prints alphabets in lowercase
 * Return: 1 (sucess) 0 (fail)
 *@c: parameter to be checked
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

