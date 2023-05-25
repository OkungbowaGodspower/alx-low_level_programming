#include "main.h"

/**
 * _isdigit - checks for a digit (0 throgh 9)
 * @c: Variable text
 * Return: return (1) if c is a number else
 * - return (0)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
