#include "main.h"

/**
 * print_last_digit - prints the last number of
 * -the given integer
 * @n: the int to check
 * Return: return the last value of int
 */
int print_last_digit(int n)
{
	int lastnum;

	lastnum = n % 10;
	if (lastnum < 0)
	{
		lastnum = lastnum * -1;
	}
	_putchar(lastnum + '0');
	return (lastnum);

}
