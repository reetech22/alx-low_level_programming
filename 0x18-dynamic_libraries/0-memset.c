#include "main.h"

/**
* _memset - a function that fills the first n bytes of memory pointed to by s
* @s: start address pointer
*
* @n: number of values
*
* @b: constant byte
*
* Return: array of n bytes
*/

char *_memset(char *s, char b, unsigned int n)
{
int i = 0;

for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}

