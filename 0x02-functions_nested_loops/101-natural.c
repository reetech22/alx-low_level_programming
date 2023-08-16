#include <stdio.h>

/**
 * main - displays sum of all multiples of 3 0r 5 to 1024
 * Return: always 0 on success
 */

int main(void)
{
	int a, t = 0;

	while (a < 1024)
	{
	if ((a % 3 == 0) || (a % 5 == 0))
	{
	t += a;
	}
	a++;
	}
	printf("%d", t);
	return (0);
}

