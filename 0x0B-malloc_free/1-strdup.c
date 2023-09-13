#include "main.h"
#include <stdlib.h>

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
	char *s;
	unsigned long i, len;

	len = _strlen(str);

	s = malloc((len + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			s[i] = str[i];
		}
		return (s);
	}
}
