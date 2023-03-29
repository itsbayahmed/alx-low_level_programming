#include "main.h"
/**
 * puts_half - print the half of a string
 *
 *@str: the string
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int length = 0;
	int n, i;
	char *p = str;

	while (*p != '\0')
	{
		length++;
		p++;
	}
	n = (length - 1) / 2 + 1;
	for (i = n; i < length; ++i)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
