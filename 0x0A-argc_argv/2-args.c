#include <stdio.h>

/**
 * main - My main function
 * @argc: The number of command line arguments
 * @argv: Array of size argc
 * Return: is 0 when true
 */

int main(int argc, char **argv)
{
	int v = 0;

	while (v < argc)
	{
		puts(argv[v]);
		v++;
	}
	return (0);
}
