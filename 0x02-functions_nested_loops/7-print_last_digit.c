#include "main.h"
/**
 * print_last_digit - Print the last digit of a number.
 *
 * @n: The number to check.
 *
 * Return: The last digit of n.
 */
int print_last_digit(int n)
{
	if (n > 0)
		return (n % 10);
	else if (n < 0)
		return (10 - (n % 10));
	else
		return (0);
}
