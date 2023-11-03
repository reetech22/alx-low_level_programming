#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* _realloc - reallocates a memory block using malloc and free
*
* @ptr: pointer to the memory previously allocated
*
* @old_size:is the size, in bytes, of the allocated space for ptr
*
* @new_size: the new size, in bytes of the new memory block
*
* Return: pointer allocate new size memory, or NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

unsigned int j, k = new_size;
char *prevp = ptr;
char *ar;

if (ptr == NULL)
ar = malloc(new_size);
return (ar);
if (new_size == 0)
free(ptr);
return (NULL);
if (new_size == old_size)
return (ptr);
ar = malloc(new_size);
if (ar == NULL)
return (NULL);
if (new_size > old_size)
k = old_size;
for (j = 0; j < k; j++)
ar[j] = prevp[j];
free(ptr);
return (ar);
}

