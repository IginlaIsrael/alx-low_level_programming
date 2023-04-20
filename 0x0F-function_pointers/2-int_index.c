#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - a function that searches for an integer.
 *
 * @array: The array to be searched
 * @size: The size of the array
 * @cmp: The function pointer
 * Return: Is nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL || size <= 0 )
		return (-1);
	for (a = 0 ; a < size ; a++)
	{
		cmp(array[a]);
		return (a);
	}
	return (-1);
}
