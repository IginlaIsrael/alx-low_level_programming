#include <stdio.h>
#include <stdlib.h>

/**
 * addition - checks and adds numbers
 * @s: string parameter to be checked
 * Return: 0 when true or successful
 */

int addition(const char *s)
{
	while (*s != '\0')
	{
		if (*s < '\0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

/**
 * main - adds numbers
 * @argc: The number of command line arguments passed
 * @argv: The array of size argc
 * Return: 0 when succesful
 */

int main(int argc, char **argv)
{
	int z = 1, w = 0;

	while (z < argc)
	{
		if (addition(argv[z]) == 0)
		{
			puts("Error");
			return (1);
		}
		w = w + atoi(argv[z]);
		z++;
	}
	printf("%d\n", w);
	return (0);
}
