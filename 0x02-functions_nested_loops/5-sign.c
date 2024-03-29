#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the int to check
 * Return: return 1 and prints + if n is greater than
 * - zero 0 and prints 0 if n is zero,
 * and -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		/* 48 is '0' in ASCII */
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
