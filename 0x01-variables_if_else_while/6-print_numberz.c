#include <stdio.h>

/**
  * main - starting (entry) point of the program
  * printf - write the string to standard output
  * Description: Prints all single numbers from "0 - 9"
  * - followed by a new line
  * Return: returns (0) for success
  */
int main(void)
{
	int num = 0;

	for (; num < 10; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);

}
