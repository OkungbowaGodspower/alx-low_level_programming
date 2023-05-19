#include <stdio.h>

/**
  * main - starting (entry) point of the program
  * printf - write the string to standard output
  *
  * Return: returns (0) for success
  */
int main(void)
{
	char smallcaps = 'a';
	char bigcaps = 'A';

	while (smallcaps <= 'z')
	{
		putchar(smallcaps++);
	}
	while (bigcaps <= 'Z')
	{
		putchar(bigcaps++);
	}
	putchar('\n');
	return (0);

}
