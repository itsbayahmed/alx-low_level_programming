#include "main.h"
/**
 * _islower - a function that checks if a character is lowercase or no.
 *
 * @c: is the character to check.
 *
 * if "c" is lowercase it returns 1, else it returns 0.
 *
 * Return: Always 0
 */
int _islower(int c)
{
	char a;

	a = 'a';
	if (a <= 'z')
		{
		c = 1;
		_putchar('0' + c);
		}

	else
	{
		a = 'A';
		if (a <= 'Z')
	{
		c = 0;
		_putchar('0' + c);
	}
	}
	return (0);
}

