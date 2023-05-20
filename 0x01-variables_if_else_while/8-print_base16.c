#include <stdio.h>

/**
  * main - starting (entry) point of the program
  * printf - write the string to standard output
  * Description: Prints all the numbers of base 16 in
  * - lowercase followed by a new line
  * Return: returns (0) for success
  */
int main(void)
{
	int num = 0;
	char letter = 'a';

	for (; num < 10; num++)
	{
		putchar(num + '0');
	}
	while (letter < 'g')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);

}
