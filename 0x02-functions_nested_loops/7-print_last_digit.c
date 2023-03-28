#include "main.h"

/**
 *int print_last_digit - prints the last digit of a number
 *@c: Integer parameter
 *
 *Return: always j
 *
 */

int print_last_digit(int i)
{
	int j;

	j = i % 10;
	if (j < 0)
		j = -j;
	return(j);
}
