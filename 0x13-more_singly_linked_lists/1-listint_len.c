#include "lists.h"

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t add = 0;

	while (pointer != NULL)
	{
		count += 1;
		pointer = pointer->next;
	}
	return (add);
}
