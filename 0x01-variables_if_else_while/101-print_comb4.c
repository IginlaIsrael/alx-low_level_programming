#include <stdio.h>

/**
 * main - main function
 *
 * Return: sometimes 0
 *
 */

int main(void)
{
	int i;
	int w;
	int z;

	for (i = 0 ; i < 10 ; i++)
	{
		for (w = 1 ; w < 10 ; w++)
		{
			for (z = 2 ; z < 10 ; z++)
			{
				if (i < w && w < z)
				{
					putchar(i + '0');
					putchar(w + '0');
					putchar(z + '0');
					if (i + w + z != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
