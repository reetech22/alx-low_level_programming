#include "main.h"
/**
* _strpbrk -  function that locates the first occurrence in a string
*
* @s: string parameter
*
* @accept: parameter
*
* Return: 0 on success
*/
char *_strpbrk(char *s, char *accept)
{
int j;

while (*s)
{
for (j = 0; accept[j]; j++)
{
if (*s == accept[j])
return (s);
}
s++;
}
return ('\0');
}

