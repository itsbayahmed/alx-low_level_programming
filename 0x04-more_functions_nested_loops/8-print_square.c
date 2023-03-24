#include "main.h"

/**
 * print_square - A function that prints a square.
 *
 * @size: The size of the square
 *
 * Return: void.
 */
void print_square(int size)
{
	int a, b;

	for (a = 0; a < size; ++a)
	{
		for (b = 0; b < size; ++b)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
	 _putchar('\n');
}
