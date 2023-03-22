#include "main.h"
/**
 * _abs - Print the absolue value of an integer.
 *
 * @int: the integer to check.
 *
 * Return: always 0
 */
int _abs(int)
{
	int n;

	if (n > 0 || n == 0)
		_putchar('0' + n);
	else
	{
		n = -n;
		putchar('0' + n);
	}
	return (0);
}
