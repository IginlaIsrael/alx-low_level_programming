#include "main.h"

/**
 * flip_bits - This is a function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: The bit to be flipped
 * @m: The other bit or number
 * Return: The number of bits that will be needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int j;
	unsigned long int c;
	unsigned int v = n ^ m;

	j = 0;

	for (i = 63 ; i <= 0 ; i--)
	{
		c = e >> i;
		if (c & 1)
			j++;
	}
	return (j);
}
