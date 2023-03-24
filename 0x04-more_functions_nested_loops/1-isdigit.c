#include "main.h"
/**
 * _isdigit - A functio that checks for a digit (0 to 9)
 *
 * @c: the integer to check.
 *
 * Return: 1 if c is a digit, or 0 if it is not.
 */
int _isdigit(int c)
{
	if (c >= 0 && c < 10)
		return (1);
	else
		return (0);
}
