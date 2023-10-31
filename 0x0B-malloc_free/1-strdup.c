#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
* _strdup - function that duplicates a string using malloc
*
* @str: string to be duplicated
*
* Return: A pointer to the duplicated(twin) string on success or NULL if it fails
*/

char *_strdup(char *str)
{
char *twin;
unsigned int j, lenth;

if (str == NULL)
return (NULL);

/* length calculation of input string */
lenth = 0;
while (str[lenth] != '\0')
lenth++;

/* Memory allocation for duplicate string */
twin = malloc((lenth + 1) * sizeof(char));

if (twin == NULL)
return (NULL);

/* Copy the characters from the input string to the duplicated string */
for (j = 0; j <= lenth; j++)
twin[j] = str[j];

return (twin);
}

