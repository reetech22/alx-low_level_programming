#include <stdlib.h>
#include "main.h"

/**
* argstostr - concatenates all the program arguments into a single string
*
* @ac: number of arguments
*
* @av: array of argument strings
*
* Return: pointer to concatenated string on success
*/
char *argstostr(int ac, char **av)
{
char *concatnt;
int j, k, l = 0;
int sum_length = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (j = 0; j < ac; j++)
{
for (k = 0; av[j][k]; k++)
{
sum_length++;
}
}

concatnt = (char *)malloc(sizeof(char) * (sum_length + ac + 1));

if (concatnt == NULL)
return (NULL);

for (j = 0; j < ac; j++)
{
for (k = 0; av[j][k]; k++)
{
concatnt[l] = av[j][k];
l++;
}
concatnt[l] = '\n';
l++;
}

concatnt[l] = '\0';

return (concatnt);
}

