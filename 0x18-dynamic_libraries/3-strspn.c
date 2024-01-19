#include "main.h"

/**
* _strspn - Returns the number of bytes in the initial segment of s
*
* @s: function parameter
*
* @accept: function parameter
*
* Return: 0 on successful execution
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int a;

while (*s)
{
for (a = 0; accept[a]; a++)
{
if (*s == accept[a])
{
n++;
break;
}
else if (accept[a + 1] == '\0')
return (n);
}
s++;
}
return (n);
}

