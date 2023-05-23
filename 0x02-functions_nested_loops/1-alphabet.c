#include "main.h"
/**
  * print_alphabet - print the alphabet in lower case
  * - from 'a' to 'z'
  * _putchar: write the string to standard output
  * - followed by a new line
  *
  * Return: returns (0) for success
  */
void print_alphabet(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		_putchar(letters);
		letters++;
	}
	_putchar('\n');
}
