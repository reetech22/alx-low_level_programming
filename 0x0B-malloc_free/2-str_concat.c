#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* str_concat - function to concatenate two strings to a newly allocated string
*
* @s1: first string to be concatenated
*
* @s2: second string to concatenate
*
* Return: pointer to newly allocated string or NULL on fail
*/
char *str_concat(char *s1, char *s2)
{

char *concatnt;
int len1 = 0, len2 = 0;
int j, k;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1])
len1++;
while (s2[len2])
len2++;

concatnt = malloc((len1 + len2 + 1) * sizeof(char));

if (concatnt == NULL)
return (NULL);

for (j = 0; j < len1; j++)
concatnt[j] = s1[j];

for (k = 0; k < len2; k++)
concatnt[j + k] = s2[k];

concatnt[j + k] = '\0';

return (concatnt);
}

