#include <stdio.h>

/**
 * main - Prints the first 50 fibonacci numbers
 * - starting with 1 and 2
 * Return: returns zer (0)
 */
int main(void)
{
	int counter = 0;
	long int x = 1, y = 2, sum = y;

	while (x + y < 4000000)
	{
		y = y + x;
		if (y % 2 == 0)
			sum = sum + y;
			x = y - x;
			++counter;
	}
	printf("%ld\n", sum);
	return (0);
}
