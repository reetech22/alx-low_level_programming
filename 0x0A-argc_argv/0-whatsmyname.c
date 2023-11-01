#include <stdio.h>
#include "main.h"

/**
* main - main function of the program
*
* @argc: number of command line arguments
*
* @argv: array of CL argument strings
*
* Return: 0 on succes
*/

int main(int argc, char *argv[])
{
if (argc > 0)
{
printf("%s\n", argv[0]);
}
return (0);
}

