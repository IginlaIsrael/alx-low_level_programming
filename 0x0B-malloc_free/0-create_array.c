#include "main.h"
#include <stdlib.h>

/**
 * create_array - A  function that creates an array of chars
 * @size: The size to be given to the character
 * @c: The character that is to be initialized
 * Return: is null when false and the array when true
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	array = (char *)(malloc(size * sizeof(char)));
	if (!array)
		return (NULL);
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
