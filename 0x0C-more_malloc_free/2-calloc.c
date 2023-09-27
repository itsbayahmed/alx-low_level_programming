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
	unsigned int i;

	arr = malloc(nmemb * size);
	memset(arr, 0, (nmemb * size));
	if (arr == NULL)
	{
		return (NULL);
	}
	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = nmemb;
		}
	}
	return (arr);
}
