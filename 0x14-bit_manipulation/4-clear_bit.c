#include "main.h"
#include <stdio.h>

/**
 * clear_bit - This is a function that sets the
 * value of a bit to 0 at a given index.
 * @n: The bit to be set to 0
 * @index: Index of the bit to be set to 0
 * Return: 1 on succes and -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
