#include "main.h"

/**
  * _strlen - check the lenght of a string
  * @s: integer pointer to check
  * lenght - lenght of the string
  *Return: return lenght
  */

int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	return (lenght);
}
