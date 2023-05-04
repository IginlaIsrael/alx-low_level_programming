#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 * Return: Is 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int i;
	char *pointer = (char *)&i;

	return (*pointer);
}
