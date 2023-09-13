#include "main.h"
#include <stdlib.h>
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
	unsigned long i;

	s = malloc(sizeof(str));

	if ((str == NULL) || (s == NULL))
		return (NULL);

	else
	{
		for (i = 0; i < sizeof(str); i++)
		{
			s[i] = str[i];
		}
		return (s);
	}
}
