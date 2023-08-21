#include "main.h"
#include <stdio.h>
/**
  * _islower - checks the alphabet if the cahracter
  * - is a lower case or upper case alphabet
  * _putchar: write the string to standard output
  * @c: is the char to be checked
  * - followed by a new line
  *
  * Return: returns 1 if c is lowercase else return 0
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
