#include <stdio.h>

/**
 * main -this is my main function
 * Remove: is always 0 when succesful
 */

int main(void)
{
	printf("Size of a char: %ul byte(s)",sizeof(char));
	printf("Size of int: %ul byte(s)",sizeof(int));
	printf("Size of long int: %ul byte(s)",sizeof(long int));
	printf("Size of float: %ulbytes(s)",sizeof(float));
	return (0);
}
