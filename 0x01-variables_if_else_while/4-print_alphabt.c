#include <stdio.h>

/**
  * main - starting (entry) point of the program
  * printf - write the string to standard output
  * Description: prints lower alphabets from "a - z"
  * - then skip 'q' and 'e' followed by a new line
  *
  * Return: returns (0) for success
  */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'q' || letter == 'e')
		{
			letter++;
			continue;
		}
		putchar(letter++);
	}
	putchar('\n');
	return (0);

}
