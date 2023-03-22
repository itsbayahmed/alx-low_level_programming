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
	int a;

	if (n > 0)
		a = n % 10;
	else if (n < 0)
		a = (10 - (n % 10));
	else
		a = 0;

	return (a);
}
