#include "main.h"
/**
 * _abs - Print the absolue value of an integer.
 *
 * @n: the integer to check.
 *
 * Return: always 0
 */
int _abs(int n)
{
	if (n > 0 || n == 0)
		_putchar('0' + n);
	else
	{
		n = -n;
		_putchar('0' + n);
	}
	return (0);
}
