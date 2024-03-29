#include <stdio.h>

/**
  * main - starting (entry) point of the program
  * @printf - write the string to standard output
  * data types - char, int, long int, long long int, float
  *
  * Return: returns (0) for success
  */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(a));
	printf("Size of an int: %lu byte(s)\n", sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));

	return (0);
}
