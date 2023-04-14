#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: The smallest value
 * @max: The largest value
 */

int *array_range(int min, int max)
{
	int *pt;
	int i, area;

	if (min > max)
		return (NULL);
	area = max - min + 1;
	pt = malloc(sizeof(int) * area);

	if (pt == NULL)
		return (NULL);
	for (i = 0 ; min <= max ; i++)
		pt[i] = min++;

	return (pt);
}
