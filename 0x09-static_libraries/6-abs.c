#include "main.h"

/**
 * _abs - prints a sign of a number
 * Return:d or -d
 *@d: parameter to be checked
 */
int _abs(int d)
{
	if (d < 0)
		return (-d);
	else if (d >= 0)
	{
		return (d);
	}
	return (0);
}
