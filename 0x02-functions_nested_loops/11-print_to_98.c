#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - printd to ninty-eigth
 * @n: function parameters
 * Return: always 0
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d, ", i);
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			printf("%d, ", i);
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d, ", n);
	printf("\n");
}