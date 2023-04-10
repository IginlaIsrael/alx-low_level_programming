#include <stdio.h>
#include <stdlib.h>

/**
 * main - The main function of this project
 * @argc: The number of command line arguments passed
 * @argv: The array containing argc
 * Return: is 0 when true
 */

int main(int argc, char **argv)
{
	int israel = argc - 1;

	if (israel == 2)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		puts("error");
		return (1);
	}
}
