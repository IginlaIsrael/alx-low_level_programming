#include "main.h"

/**
 * _strlen_recursion - Prints the lenght of a string
 * @s: The string length to be found
 * Return: IS 0 when successful
 */

int _strlen_recursion(char *s)
{
	int israel = 0;

	if (*s)
	{
		israel++;
		israel += _strlen_recursion(s + 1);
	}
	return (israel);
}
