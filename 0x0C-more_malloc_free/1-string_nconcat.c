#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatenates 2 strings up to n bytes of the second string
*
* @s1: first string
*
* @s2: second string
*
* @n: maximum bytes to concatenate
*
* Return: pointer to concatenated string, NULL on failure
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, j = 0, k = 0, l = 0;
char *concat;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[i])
i++;

while (s2[k])
k++;

if (n >= k)
l = i + k;
else
l = i + n;

concat = malloc(sizeof(char) * l + 1);
if (concat == NULL)
return (NULL);

k = 0;
while (j < l)
{
if (j <= i)
concat[j] = s1[j];

if (j >= i)
{
concat[j] = s2[k];
k++;
}
j++;
}
concat[j] = '\0';
return (concat);
}
