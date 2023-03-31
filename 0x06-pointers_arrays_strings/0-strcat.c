#include "main.h"
/**
 * *_strcat - A function that concatenates two strings.
 *
 * @src: The first string.
 * @dest: The second string.
 *
 * Return: Returns a pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	i = 0;
	while (src[i] != '\0')
	{
	dest[length] = src[i];
	length++;
	i++;
	}
	return (dest);
}


