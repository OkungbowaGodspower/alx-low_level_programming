#include "lists.h"

/**
 * free_listint - it frees a linked list
 * @head: head of the list
 * Return: void
 *
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
