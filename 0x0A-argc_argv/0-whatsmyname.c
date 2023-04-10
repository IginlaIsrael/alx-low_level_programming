#include <stdio.h>

/**
 * main - The main function
 * @argc: number of command line arguments
 * @argv: Arrat of argc
 * Return: 0 when succesful
 */

int main(int argc, char **argv)
{
	puts(argv[argc - 1]);
	return (0);
}
