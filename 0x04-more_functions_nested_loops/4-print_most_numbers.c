#include "main.h"

/**
 * print_most_numbers - prints didgits
 * - excluding 2 and 4
 *
 * Return: return (o)
 */
void print_most_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		if (num == 2 || num == 4)
		{
			num++;
			continue;
		}
		_putchar(num + '0');
		num++;
	}
	_putchar('\n');
}
