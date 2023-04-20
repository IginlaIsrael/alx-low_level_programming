#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - a function that prints a name.
 * @name: The name to be printed
 * @f: A variable
 *
 *Return: is 0 when succesful
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
