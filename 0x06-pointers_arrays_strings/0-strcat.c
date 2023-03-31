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

	while (*src)
	{
		src++;
	}
	while (*dest)
	{
		dest++;
	}
	*dest = *src;
	*dest = '\0';
	return (dest);
}


