#include "main.h"

/**
 * _isalpha - checks for alphabet
 * Return: 1 (sucess) 0 (fail)
 *@c: parameter to be checked
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
