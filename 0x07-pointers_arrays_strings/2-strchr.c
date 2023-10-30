#include "main.h"

/**
* _strchr - Returns a pointer to the first occurrence of the character c
*
* @s: string parameter
*
* @c: character function parameter
*
* Return: 0 on successful execution
*/
char *_strchr(char *s, char c)
{
int j = 0;

for (; s[j] >= '\0'; j++)
{
if (s[j] == c)
return (&s[j]);
}
return (0);
}

