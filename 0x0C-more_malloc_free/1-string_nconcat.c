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
char *concat;
unsigned int s1_len = 0;
unsigned int s2_len = 0;
unsigned int j, k;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[s1_len])
s1_len++;
while (s2[s2_len])
s2_len++;

if (n >= s2_len)
n = s2_len;

concat = malloc(s1_len + n + 1);

if (concat == NULL)
return (NULL);

for (j = 0; j < s1_len; j++)
concat[j] = s1[j];

for (k = 0; k < n; k++, k++)
concat[k] = s2[k];

concat[j] = '\0';

return (concat);
}

