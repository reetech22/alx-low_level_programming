#include "main.h"

/**
* wildcmp - recursive funtion to compare strings
*
* @s1: string pointer parameter
*
* @s2: string pointer parameter
*
* Return: 0 on success
*/

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0')
if (*s2 != '\0' && *s2 == '*')
return (wildcmp(s1, s2 + 1));
return (*s2 == '\0');

if (*s2 == '*')
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
else if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
}
