#include "main.h"
#include <stdio.h>

/**
* print_diagsums - function that prints the sum of the two integers
*
* @a: parameter
*
* @size: parameter
*
* Return: 0 on success
*/

void print_diagsums(int *a, int size)
{
int sum_1, sum_2, j;

sum_1 = 0;
sum_2 = 0;

for (j = 0; j < size; j++)
{
sum_1 = sum_1 + a[j * size + j];
}
for (j = size - 1; j >= 0; j--)
{
sum_2 += a[j * size + (size - j - 1)];
}
printf("%d, %d\n", sum_1, sum_2);
}

