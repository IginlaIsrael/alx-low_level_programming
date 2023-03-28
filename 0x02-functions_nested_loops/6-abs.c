#include "main.h"

/**
 *_abs - function for absolute value
 *
 *@s: the absolute value parameter to be printed
 *Return: returns a always
 */

int _abs(int s)
{
	if (s < 0)
		s = -(s);
	else if (s >= 0)
		s = s;
	return (s);
}
