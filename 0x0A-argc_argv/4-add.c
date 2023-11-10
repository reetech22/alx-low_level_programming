#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - main function
* @argc:number of command line arguments
* @argv: array of command line argument strings
*
* Return: 0 on success, 1 on invalid input.
*/

int main(int argc, char *argv[])
{
int sum, numb, j;
if (argc == 1)
printf("0\n");
return (0);

sum = 0;
for (j = 1; j < argc; j++)
{
numb = atoi(argv[j]);

if (numb == 0 && argv[j][0] != '0')
printf("Error\n");
return (1);
if (numb < 0)
printf("Error\n");
return (1);

sum += numb;
}
printf("%d\n", sum);
return (0);
}

