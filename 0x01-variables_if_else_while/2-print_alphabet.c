#include <stdio.h>

/**
  * main - starting (entry) point of the program
  * printf - write the string to standard output
  *
  * Return: returns (0) for success
  */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter++);
	}
	putchar('\n');
	return (0);

}
