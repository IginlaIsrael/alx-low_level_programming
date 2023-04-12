#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  a function that returns a pointer to a new space in memory.
 * @str: string to be duplicated
 *
 *
 *Return: NuLL if string is false and Duplicates the string when succesful
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;
	int j;

	if (str == NULL)
		return (NULL);

	for (i = 0 ; str[i] != '\0' ; i++)
		;

	ptr = (char *)(malloc((i + 1) * (sizeof(char))));
	if (ptr == NULL)
		return (NULL);
	for (j = 0 ; str[j] != '\0' ; j++)
		ptr[j] = str[j];
	ptr[j] = '\0';
	return (ptr);

}
