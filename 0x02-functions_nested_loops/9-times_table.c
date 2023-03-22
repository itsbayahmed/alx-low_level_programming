#include "main.h"
/**
 * times_table -Prints 9 times table.
 *
 *
 * Return: void.
 */
void times_table(void)
{
	int a, b, c, units, tens;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
		c = a * b;
		units = c / 10;
		tens = c % 10;
		if (b == 0)
		{
			_putchar('0');
		}
		else if (c < 10)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + c);
		}
		else
		{
			_putchar(',');
			_putchar(' ');
			_putchar('0' + units);
			_putchar('0' + tens);
		}
		}
		_putchar('\n');
	}
}
