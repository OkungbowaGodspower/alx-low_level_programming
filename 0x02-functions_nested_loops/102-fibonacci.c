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

	while (counte < 50)
	{
		if (counter == 0)
			printf("%d", x);
		else if (counter == 1)
			printf(", %d", y);
		else
		{
			y = y + x;
			x = y - x;
			printf(", %d", y);
		}
		++counter
	}
	printf("\n");
	return (0);
}
