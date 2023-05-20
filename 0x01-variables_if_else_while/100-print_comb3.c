#include <stdio.h>

/**
  * main - starting (entry) point of the program
  * printf - write the string to standard output
  * Description: Prints all possible different combinations
  * -  of two digits followed by a new line
  * Return: returns (0) for success
  */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 <= 8; num1++)
	{
		for (num2 = num1 + 1; num2 <= 9; num2++)
		{
			putchar(num1 + '0');
			putchar(num2 + '0');
		if (num1 != 8 || num2 != 9)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);

}

