#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Afunction that returns a pointer
 *  to a 2D array of integers.
 *
 *  @width: The number of the arry rows.
 *  @height: The number of the array columns.
 *
 *  Return: - NULL if the width or height are 0 or negative.
 *          - On failure, the function will also return NULL.
 *          - On success, it will return a pointer to a 2D
 *          array of integers.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	arr = malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}

