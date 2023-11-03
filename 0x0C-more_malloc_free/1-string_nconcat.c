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
unsigned int i, j, k;
char *concat;


if (s1 == NULL)
i = 0;

for (i = 0; s1[i]; ++i)
;
if (s2 == NULL)
j = 0;

for (j = 0; s2[j]; ++j)
;
if (j > n)
j = n;
concat = malloc(sizeof(char) * (i + j + 1));
if (concat == NULL)
return (NULL);
for (k = 0; k < i; k++)
concat[k] = s1[k];
for (k = 0; k < j; k++)
concat[k + i] = s2[k];
concat[i + j] = '\0';
return (concat);
}

