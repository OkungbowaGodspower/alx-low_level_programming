#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node into a linked list
 *                          at the specified position.
 * @head: Pointer to the head of the list.
 * @idx: Index where the new node will be added (indices start at 0).
 * @n: Value for the new node to be added.
 *
 * Return: Pointer to the new node, or NULL if the function fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *current = *head;
	unsigned int node_idx;

	/* Create a new node */
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	/* Insert at the beginning of the list */
	if (idx == 0)
	{
		newNode->next = current;
		*head = newNode;
		return (newNode);
	}

	/* Traverse the list to the specified position */
	for (node_idx = 0; node_idx < (idx - 1); node_idx++)
	{
		if (current == NULL || current->next == NULL)
			return (NULL);

		current = current->next;
	}

	/* Insert the new node into the list */
	newNode->next = current->next;
	current->next = newNode;

	return (newNode);
}
