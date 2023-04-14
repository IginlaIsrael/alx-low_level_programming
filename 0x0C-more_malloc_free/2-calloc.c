#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * memory - Not the main function
 * @s: a parameter
 * @v: another param
 * @j: a parameter
 * Return: Returns a pointer s
 */

char *memory(char *s, char v, unsigned int j)
{
	unsigned int i;

	for (i = 0 ; i < j ; i++)
	{
		s[i] = v;
	}
	return (s);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: number of the elements in the array
 * @size: size of elements
 * Return: Returns a pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pt;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pt = malloc(size * nmemb);
	if (pt == NULL)
		return (NULL);
	memory(pt, 0, nmemb * size);
	return (pt);
}
