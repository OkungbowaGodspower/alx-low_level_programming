#include "main.h"
#include <stdio.h>
/**
  * print_alphabet_x10 - print the alphabet in lower case
  * - from 'a' to 'z' ten times
  * _putchar: write the string to standard output
  * - followed by a new line
  *
  * Return: returns (0) for success
  */
void print_alphabet_x10(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		char letter = 'a';

		for (b  = 0; b < 26; b++)
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
