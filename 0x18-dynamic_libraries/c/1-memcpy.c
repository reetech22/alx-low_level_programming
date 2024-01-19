#include "main.h"

/**
* _memcpy - function copies n bytes from memory area
*
* @dest: destination memory
*
* @src: source memory
*
* @n: number of bytes to be manipulated
*
* Return: destination memory with copied bytes
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
int a = 0;
int j = n;

for (; a < j; a++)
{
dest[a] = src[a];
n--;
}
return (dest);
}

