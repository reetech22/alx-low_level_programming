#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - main function
* @argc: number of command-line arguments
*
* @argv: array of command-line argument strings.
*
* Return: 0 on successf or 1 if not enough arguments
*/

int main(int argc, char *argv[])
{
int num1, num2;

if (argc != 3)
printf("Error\n");
return (1);

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

printf("%d\n", num1 *num2);
return (0);
}

