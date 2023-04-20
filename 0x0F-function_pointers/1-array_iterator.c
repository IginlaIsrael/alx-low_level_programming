#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function that executes function given
 * as a parameter on each element of an array
 * @array: The array whose parameters are to be executed
 * @size: THe size of the array to be executed
 * @action: THe action to be taken
 *
 * *Return: is nothing when succesful
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int v;

	if (array == NULL || action == NULL)
		return;
	for (v = 0 ; v < size ; v++)
	{
		action(array[v]);
	}
}
