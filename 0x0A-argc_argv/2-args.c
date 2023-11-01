#include "main.h"
#include <stdio.h>

/**
* main - main function
* @argc: number of command line arguments
* @argv: array of command ine arguments string
*
* Return: Always 0
*/

int main(int argc, char *argv[])
{
int j;

for (j = 0; j < argc; j++)
{
printf("%s\n", argv[j]);
}

return (0);
}

