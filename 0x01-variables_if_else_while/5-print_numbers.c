#include <stdio.h>

/**
  * main - starting (entry) point of the program
  * printf - write the string to standard output
  *
  * Description: print all single digit -
  * - numbers of base 10 starting from 0
  * Return: returns (0) for success
  */
int main(void)
{
	int num;

	for (num  = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	printf("\n");
	return (0);

}
