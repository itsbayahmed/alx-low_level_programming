#include "main.h"
/**
 * print_alphabet_x10 - Print the alphabet in lowercase 10 times.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char a = print_alphabet;
	
	for (a = 0; a < 10; ++a)
	{
		_putchar(a);
	}
	_putchar('\n');
}

