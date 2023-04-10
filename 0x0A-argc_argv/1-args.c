#include <stdio.h>

/**
 * main - the main function
 * @argc: The number of the command line arguments
 * @argv: The array of argc
 * Return: is 0 when true
 */
int main(int argc, char **argv)
{
	(void)(argv);
	printf("%d\n", argc - 1);
	return (0);
}
