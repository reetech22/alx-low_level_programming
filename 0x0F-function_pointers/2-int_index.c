#include "function_pointers.h"

/**
* int_index - when comparison is true, it returns index place
*otherwise returns -1
*
* @array: the array to be manipulated
*
* @size: number of elements in array
*
* @cmp: function pointer
*
* Return: 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;


if (array == NULL || size <= 0 || cmp == NULL)
return (-1);


for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}

