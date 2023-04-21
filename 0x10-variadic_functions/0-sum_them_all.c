#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: THe number of all the function parameters
 * @...: Uncounntable number.
 * Return: is sum of all the parameters
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list z;
	unsigned int a;
	unsigned int sum = 0;

	va_start(z, n);

	for (a = 0 ; a < n ; a++)
		sum += va_arg(z, int);
	va_end(z);
	return (sum);
}
