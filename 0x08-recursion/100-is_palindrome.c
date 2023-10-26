
#include "main.h"

/**
* is_palindrome - checks if a string is a palindrome
*
* @s: reverse string parameter
*
* Return: 1 if its a palindrome and 0 on otherwise
*/

int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (confirm_if_palindrome(s, 0, _strlen_recursion(s)));
}

/**
* confirm_if_palindrome - recursive function for checking palindrome
*
* @j: iteration parameter
*
* @s: string to be tested if a palindrome
*
* @len: string length
*
* Return: 1 if  str is a palindrome and 0 if false
*/

int confirm_if_palindrome(char *s, int j, int len)
{
if (*(s + j) != *(s + len - 1))
return (0);
if (j >= len)
return (1);
return (confirm_if_palindrome(s, j + 1, len - 1));
}

/**
* _strlen_recursion - function for checking string length
*
* @s: string parameter
*
* Return: length of string in function
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}



