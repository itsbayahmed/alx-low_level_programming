#include "main.h"

/**
 * print_times_table - A function that prints the n times table,
 * starting with 0.
 *
 * @n: An integer representing the maximum value for the multiplication table.
 *
 * Return: nothing (void).
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			if (j == 0)
				_putchar('0');
			else if (result < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + result);
			}
			else if (result < 100)
			{

				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + ((result / 10) % 10));
				_putchar('0' + (result % 10));
			}
			else
			{

				_putchar(',');
				_putchar(' ');
				_putchar('0' + ((result / 100) % 10));
				_putchar('0' + ((result / 10) % 10));
				_putchar('0' + (result % 10));
			}
		}
		_putchar('\n');
	}
}
