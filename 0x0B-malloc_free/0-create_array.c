#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - A function that creates an array of chars,
 *  and initializes it with a specific char.
 *
 * @size: the size of the array.
 * @c: the initialization character.
 *
 * Return: NULL if size = 0 or if it fails,
 *  otherwise, it returns a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size);

	if (size == 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
		arr[i] = c;
		}
	}
	return (arr);
}
