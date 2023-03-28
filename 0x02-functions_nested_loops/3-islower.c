#include "main.h"

/**
 *_islower - function to check for lower case characters
 *
 * @c: prarameter that checks
 *
 * Return: is 1 if true and 0 when fals
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
