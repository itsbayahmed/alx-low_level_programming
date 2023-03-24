#include "main.h"
/**
 * more_numbers - A function that prints 10 times
 * the numbers from 0 to 14.
 *
 * Return: void
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 11; ++a)
	{
		for (b = 0; b < 15; ++b)
		{
			if (b < 10)
			{
			_putchar('0' + b);
			}
			else
			{
				_putchar('0' + b / 10);
				_putchar('0' + b % 10);
			}
		_putchar('\n');
	}
}


