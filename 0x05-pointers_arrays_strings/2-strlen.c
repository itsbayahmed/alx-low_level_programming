#include "main.h"

/**
 * _strlen - A function that returns the length of a string.
 *
 * @s: The string whose length is to be returned.
 *
 * Return: The string length.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}

	return (length);

}
