#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked - It allocates memory using malloc
*
* @b: number of bytes to be allocated
*
* Return:pointer to allocated memory else (termination)status value of 98
*/

void *malloc_checked(unsigned int b)
{
void *pnt;

pnt = malloc(b);
if (pnt == NULL)
exit(98);
return (pnt);
}

