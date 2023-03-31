#include "main.h"
/**
 * _strcmp - A function that compare
 *  two strings (s1 and s2).
 *
 * @s1: s1 is a string.
 * @s2: s2 is another string.
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

