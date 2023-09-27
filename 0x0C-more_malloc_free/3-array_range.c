#include "main.h"
#include <stdlib.h>
/**
 * array_range - A function that creates an array of integers,
 *    containing all the values from min to max.
 *
 * @min: : The smallest value in the range.
 * @max: : The largest value in the range.
 *
 * Return: On success, a pointer to the newly created array.
 *         or NULL if the allocation fails or if min is greater than max.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	arr = malloc(((max - min) + 1) * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	if (min > max)
	{
		return (NULL);
	}
	for (i = 0; i < max - min; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
