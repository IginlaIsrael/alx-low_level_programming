#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2d array
 * @width: Arrays row
 * @height: Arrays column
 * Return: NULL if widhth / heigth is 0 and also on failure
 * but returns a pointer to the 2d array when successful
 */

int **alloc_grid(int width, int height)
{
	int j, i, **ptr;

	if (width < 1 || height < 1)
		return (NULL);
	ptr = (int **)malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; i < height ; i++)
	{
		ptr[i] = (int *)malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (; i >= 0 ; i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0 ; i < height ; i++)
		for (j = 0 ; j < width ; j++)
			ptr[i][j] = 0;
	return (ptr);
}
