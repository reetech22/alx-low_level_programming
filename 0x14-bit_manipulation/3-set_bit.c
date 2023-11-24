#include "main.h"

/**
* set_bit - function that sets value of a bit to 1 at an index
*
* @n: number to set
*
* @index: index at which to set bit
*
* Return: 1 if success, -1 on error
*/

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int setbit;

if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
setbit = 1 << index;
*n = *n | setbit;
return (1);
}

