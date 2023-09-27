#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - A function that allocates memory for an array.
 *
 * @nmemb: The number of elements in the array.
 * @size: he size of each element in the array in bytes.
 *
 * Return: A pointer to the allocated memory,
 *      or NULL if the allocation fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	memset(arr, 0, (nmemb * size));
	return (arr);
}
