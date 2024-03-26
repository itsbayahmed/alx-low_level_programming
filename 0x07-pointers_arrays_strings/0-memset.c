#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte.
 *
 * @s: A pointer to the memory block to be filled.
 * @b: The value to be filled in each byte of the memory block.
 * @n: The number of bytes to be filled.
 *
 * Return: This function returns a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i += 1;
	}
	return (s);
}
