#include "lists.h"

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 * Return: the number of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *pointer = h;
	size_t add = 0;

	while (pointer != NULL)
	{
		add += 1;
		pointer = pointer->next;
	}
	return (add);
}
