#include <stdlib.h>
#include "main.h"

/**
* *array_range - creates an integer array
*
* @min: range of minimum values
*
* @max: range of maximum values
*
* Return: pointer to the new array
*/

int *array_range(int min, int max)
{
int *arrw;
int j, range;


if (min > max)
return (NULL);

range = max - min + 1;

arrw = malloc(sizeof(int) * range);

if (arrw == NULL)
return (NULL);

for (j = 0; min <= max; j++)
arrw[j] = min++;
return (arrw);
}

