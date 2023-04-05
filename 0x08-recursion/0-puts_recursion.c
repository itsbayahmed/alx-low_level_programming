#include "main.h"
/**
 * _puts_recursion - A function that Prints a string.
 *
 * @s: The string to print.
 *
 * Return: void.
 */

void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		_putchar(s[i]);
	}
	_putchar('\0');
	_putchar('\n');
}

