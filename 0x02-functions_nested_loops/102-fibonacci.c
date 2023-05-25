#include <stdio.h>

/**
 * main - Prints the first 50 fibonacci numbers
 * - starting from 1 and 2
 * Return: returns zero (0)
 */
int main(void)
{
	int counter = 0;
	long int  x = 1, y = 2;

	while (counter < 50)
	{
		if (counter == 0)
			printf("%ld", x);
		else if (counter == 1)
			printf(", %ld", y);
		else
		{
			y = y + x;
			x = y - x;
			printf(", %ld", y);
		}
		++counter
	}
	printf("\n");
	return (0);
}
