#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
/**
 * _strdup - A function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 *
 * @str: The string to be duplicated.
 *
 * Return: NULL if str = NULL or if insufficient memory was available,
 *  otherwise, returns a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *new_str;
	unsigned long i, len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = _strlen(str);

	new_str = malloc((len + 1) * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			new_str[i] = str[i];
		}
		return (new_str);
	}
}
