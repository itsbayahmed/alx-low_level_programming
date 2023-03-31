#include "main.h"

/**
 * *_strncat - A function that concatenates two
 * strings (appends the src string to the dest string),
 * using at most n bytes from src.
 *
 * @dest: The string where we want to append.
 * @src:  The string from which 'n' bytes are going to append.
 * @n: The maximum number of bytes to be appended.
 *
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{

	int i;
	int len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	return (dest);
}






