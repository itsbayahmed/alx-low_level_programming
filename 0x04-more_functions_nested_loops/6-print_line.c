#include "main.h"
/**
 * print_line - A function that prints a straight line in the terminal
 *
 * @n: The number of lines to print.
 *
 * Return: Always 0
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
