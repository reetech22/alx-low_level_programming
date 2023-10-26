#include "main.h"

/**
* _strlen_recursion - recursive function to compute strlen
*
* @s: string pointer
*
* Return: string length on success
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
