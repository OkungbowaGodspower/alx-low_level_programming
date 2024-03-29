#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - starting (entry) point of the program
  * printf - write the string to standard output
  * non - function statement block (if , else if, else)
  * Description: prints random numbers and check if
  * - condistion is true else move to next condition
  * Return: returns (0) for success
  */
int main(void)
{
	int n;
	int lastnum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastnum = n % 10;

	if (lastnum > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastnum);
	} else if (lastnum < 6 && lastnum != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastnum);
	} else
	{
		printf("Last digit of %d is %d and is 0\n", n, lastnum);
	}
	return (0);

}
