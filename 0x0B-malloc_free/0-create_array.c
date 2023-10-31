#include "main.h"
#include <stdlib.h>
/**
* create_array - function for an array(crt) of characters
*
* @size: The size of the array to create
*
* @c: The character to initialize the array with
*
* Return: A pointer to the newly created array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
char *crt;
unsigned int j;

if (size == 0)
return (NULL);

crt = malloc(size * sizeof(char));  /* Allocate memory for the array */

if (crt == NULL)
return (NULL);

for (j = 0; j < size; j++)
crt[j] = c;  /* Initialize each element with the specified character */

return (crt);
}

