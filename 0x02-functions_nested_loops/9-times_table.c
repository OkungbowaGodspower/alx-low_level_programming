#include "main.h"

/**
 * times_table - prints the 9x (times) table
 * -starting with zero (0)
 *
 * Return: returns nothing (void)
 */
void times_table(void)
{
	int num1, num2, a, b, c;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			a = num1 * num2;
			if (a > 9)
			{
				b = a % 10;
				c = (a - b) / 10;

				/* 44 is ',' in ASCII */
				_putchar(44);
				/* 32 is ' ' in ASCII */
				_putchar(32);
				_putchar(b + '0');
				_putchar(c + '0');
			}
			else
			{
				if (num2 != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(a + '0');
			}
		}
		_putchar('\n');
	}
}
