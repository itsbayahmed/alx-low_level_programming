#include "main.h"
#include <stdio.h>
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
* str_concat - A function that concatenates two strings.
*
* @s1: The first string.
* @s2: The second string.
*
* Return: - If successful, the function will return a pointer
*  to a new memory space that holds the combined contents of
*  s1 and s2, ending with a null character.
*
* - If the function fails, it will return NULL.
*/
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, len1, len2;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);

	str = malloc((len1 + len2 + 1) * sizeof(char));
	i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';

	return (str);
}
