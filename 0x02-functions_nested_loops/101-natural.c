#include <stdio.h>
/**
  * main - starting (entry) point of the program
  * printf - write the string to standard output
  *
  *Return: returns zero (0)
  */

int main(void)
{
	int i, y = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			y = y + i;
		}
		i++;
	}
	printf("%d\n", y);
	return (0);
}
