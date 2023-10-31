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
int len_1 = 0, len_2 = 0;
int j, k;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len_1])
len_1++;
while (s2[len_2])
len_2++;

concatnt = malloc(sizeof(char) * (len_1 + len_2 + 1));
if (concatnt == NULL)
return (NULL);

for (j = 0; j < len_1; j++)
concatnt[j] = s1[j];

for (k = 0; k < len_2; k++)
concatnt[j + k] = s2[j];

concatnt[j + k] = '\0';

return (concatnt);
}



