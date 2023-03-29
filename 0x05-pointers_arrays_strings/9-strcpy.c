#include "main.h"
/**
 * _strcpy - copy the string pointed to by src to dest
 *
 * @dest: char to check
 *
 * @src: char to check
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
