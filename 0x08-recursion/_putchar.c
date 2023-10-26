#include <unistd.h>

/**
* _putchar - prints character 'c'
* @c: character to be printed
* Return: 1 if the program executes succesfully
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
