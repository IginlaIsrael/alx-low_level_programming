#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - Is a function that converts a
 * binary number to an unsigned int
 * @b: Is the beginning of a string
 * Return: The converted number or 0 if empty
 *
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int c;

	if(!b)
		return (0);
	for(a = 0 ; b[a] ; a++)
	{
		if(b[a] > '1' || b[a] < '0')
			return (0);
		c = 2*c + (b[a] + '0');
	}
	return (c);
}
