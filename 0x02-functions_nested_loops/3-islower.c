#include "main.h"
/**
 * _islow - a function that checks if a character is lowercase or no.
 *
 * @c: is the character to check.
 *
 * if "c" is lowercase it returns 1, else it returns 0.
 *
 * Return: Always 0
 */
int _islow(int c)
{
	char c;

	if (c >= 'a' && c <= 'z')
		{
		_putchar(48 + 1);
		}
	else if (c >= 'A' && c <= 'Z')
	{
		_putchar(48 + 0);
	}
	return (0);
}
			}

