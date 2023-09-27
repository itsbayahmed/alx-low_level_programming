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
 * string_nconcat - A function that concatenates two strings, up to n
 * characters of the second string.
 *
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of characters to concatenate from the second string.
 *
 * Return: On success, Returns a pointer to a new string containing
 *  the concatenation of s1 and the first n characters of s2.
 *         If the function fails, it will return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j;
	unsigned int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	str = malloc((len1 + len2 + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	if (n < len2)
	{
		for (j = 0; (j < n && s2[j] != '\0'); j++)
		{
			str[i] = s2[j];
			i++;
		}
	}
	else
	{
		while (s2[j] != '\0')
		{
			str[i] = s2[j];
			i++;
			j++;
		}
	}
	str[i] = '\0';
	return (str);
}
