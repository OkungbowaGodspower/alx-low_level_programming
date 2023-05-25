#include "main.h"

/**
 * print_numbers - prints digits from
 * - from (0 through 9)
 *
 * @n: variable to print
 * Return: return nothing
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n = n + 1)
		_putchar(n + '0');
	_putchar('\n');
}
