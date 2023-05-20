#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - starting (entry) point of the program
  * printf - write the string to standard output
  * non - function statement block (if , else if, else)
  * Description - prints random numbers and check if
  * - condition is true if not move to next
  * Return: returns (0) for success
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	} else
	{
		printf("%d is zero\n", n);
	}
	return (0);

}
