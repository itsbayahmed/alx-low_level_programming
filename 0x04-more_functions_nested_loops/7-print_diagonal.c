#include "main.h"

/**
 * print_diagonal - A function that draws a diagonal
 * line on the terminal.
 *
 * @n: The number of diagonal lines to draw.
 *
 * Return: void.
 */
void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; ++a)
	{
		for (b = 0; b < a; ++b)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
