#include "main.h"
#include <stdio.h>

/**
  * _isalpha - checks the alphabet if the character
  * - is a lower case or upper case alphabet
  * _putchar: write the string to standard output
  * @c: is the char to be checked
  * - followed by a new line
  *
  * Return: returns 1 if c is lowercase or uppercase
  * else return 0
  */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
