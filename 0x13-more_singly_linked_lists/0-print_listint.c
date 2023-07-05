#include "lists.h"

/**
 * print_listint - prints all the members of a linked list
 * @h: head of the list
 * Return: the number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *pointer = h;
	size_t add = 0;

	while (pointer != NULL)
	{
		printf("%d\n", pointer->n);
		add += 1;
		pointer  = pointer->next;
	}
	return (add);
}
