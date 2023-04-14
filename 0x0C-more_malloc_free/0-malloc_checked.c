#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked -  a function that allocates memory using malloc.
 * @b: an unsinged int which determines the size of malloc.
 * Return: A pointer when true and 98 when false
 */

void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);

	if (pt == NULL)
		exit(98);
	return (pt);
}
