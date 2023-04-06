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
	int i = 0;

	_putchar(s[i]);
	s++;
	if (s[i] != '\0')
	{
	_puts_recursion(s);
	}
	if (s[i] == '\0')
		_putchar('\n');
}

