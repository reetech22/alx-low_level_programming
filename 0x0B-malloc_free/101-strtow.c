#include "main.h"
#include <stdlib.h>
/**
* is_space - Check if a character is a space, tab, or newline character.
* @c: The character to check.
*
* Return: 1 if the character is a space, tab, or newline; 0 otherwise.
*/
int is_space(char c)
{
return (c == ' ' || c == '\t' || c == '\n');
}

/**
* count_words - count  number of words in a string
*
* @str: string input
*
* Return: number of words in a string
*/

int count_words(char *str)
{
int count_wrd = 0;
int wrd = 0;

while (*str)
{
if (is_space(*str))
{
wrd = 0;
}
else if (wrd == 0)
{
wrd = 1;
count_wrd++;
}

str++;
}

return (count_wrd);
}

/**
* strtow - split a string into words
*
* @str: string input
*
* Return: A pointer to an array of strings
*/

char **strtow(char *str)
{
char **arry_wrd;
int count_word, i, j, k;

if (str == NULL || str[0] == '\0')
return (NULL);
count_word = count_words(str);
arry_wrd = (char **)malloc(sizeof(char *) * (count_word + 1));

if (arry_wrd == NULL)
return (NULL);
i = 0;
while (*str)
{
if (is_space(*str))
{
str++;
continue;
}
j = 0;
while (str[j] && !is_space(str[j]))
j++;
arry_wrd[i] = (char *)malloc(sizeof(char) * (j + 1));

if (arry_wrd[i] == NULL)
{
for (k = 0; k < i; k++)
free(arry_wrd[k]);
free(arry_wrd);
return (NULL);
}

for (k = 0; k < j; k++)
arry_wrd[i][k] = str[k];
arry_wrd[i][j] = '\0';
i++;

str += j;
}
arry_wrd[i] = NULL;
return (arry_wrd);
}

