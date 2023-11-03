#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* _calloc - allocates memory for array
*
* @nmemb: allocate memory for array
*
* @size: allocate element of size bytes
*
* Return: pointer to allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{

	unsigned int j;
	char *rtn;

if (nmemb == 0 || size == 0)
return (NULL);
rtn = malloc(nmemb * size);
if (rtn == NULL)
return (NULL);
for (j = 0; j < (nmemb * size); j++)
rtn[j] = 0;
return (rtn);
}

