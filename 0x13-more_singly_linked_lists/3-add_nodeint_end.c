#include "lists.h"

/**
 * add_nodeint_end - makes addition to a node, to the end of a linked list
 * @head: pointer to the head of the list
 * @n: number to be used as content
 * Return: address of the newly added node
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *pointer = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode != NULL)
	{
		newNode->n = n;
		newNode->next = NULL;
	}
	else
		return (NULL);
	if (pointer != NULL)
	{
		while (pointer->next != NULL)
			pointer = pointer->next;
		pointer->next = newNode;
	}
	else
		*head = newNode;
	return (newNode);
}
