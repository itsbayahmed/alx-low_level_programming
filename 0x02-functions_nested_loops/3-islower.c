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
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

