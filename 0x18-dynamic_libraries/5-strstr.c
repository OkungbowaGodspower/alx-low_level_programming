#include "main.h"
#include <stdlib.h>

/**
 * _strstr - locate a substring
 * @haystack: string
 * @needle: string substring
 * Return: Pointer to beginning of substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, x, c;

	i = 0;
	c = 0;
	while (haystack[i] != '\0')
	{
		x = 0;
		while (needle[x + c] != '\0' && haystack[i + c] != '\0'
		       && needle[x + c] == haystack[i + c])
		{
			if (haystack[i + c] != needle[x + c])
				break;
			c++;
		}
		if (needle[x + c] == '\0')
			return (&haystack[i]);
		x++;
		i++;
	}

	return (NULL);
}
