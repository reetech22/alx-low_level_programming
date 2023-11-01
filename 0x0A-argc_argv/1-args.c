#include "main.h"
#include <stdio.h>

/**
* main - print the number of arguments passed to the program
*
* @argc: number of command line arguments
*
* @argv: argument string array
*
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}

