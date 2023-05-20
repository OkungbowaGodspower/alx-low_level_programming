#include <stdio.h>
/**
  * main - starting (entry) point of the program
  * printf - write the string to standard output
  * Description: Prints small alphabetsin reverse
  * - from "z - a", followed by a new line
  * Return: returns (0) for success
  */
int main(void)
{
	char letter = 'z';

	for (; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);

}
