#include <stdio.h>

/**
  * main - starting (entry) point of the program
  * printf - write the string to standard output
  * Description: Prints all possible different combinations
  * -  of three digits followed by a new line
  * Return: returns (0) for success
  */
int main(void)
{
	int num1, num2, num3;
	int count = 0;

	for (num1 = 0; num1 <= 7; num1++)
	{
		for (num2 = num1 + 1; num2 <= 8; num2++)
		{
			for (num3 = num2 + 1; num3 <= 9; num3++)
			{
				if (count > 0)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(num1 + '0');
				putchar(num2 + '0');
				putchar(num3 + '0');

				count++;
			}
		}
	}
	putchar('\n');
	return (0);

}
