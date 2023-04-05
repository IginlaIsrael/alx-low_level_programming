#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: parameter to be swapped
 * @b: parameter to be swapped
 * Return: is 0
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
