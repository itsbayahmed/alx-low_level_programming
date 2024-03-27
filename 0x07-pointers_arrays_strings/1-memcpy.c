#include "main.h"

/**
 * _memcpy - A function that copies a block of memory
 *   from one location to another.
 *
 * @dest: A pointer to the destination memory location
 *   where the data is to be copied.
 *
 * @src: A pointer to the source of data to be copied.
 * @n: The number of bytes to be copied from src to dest.
 *
 * Return: This function returns a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
