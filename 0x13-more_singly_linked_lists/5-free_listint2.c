#include "lists.h"
/**
 * free_listint2 - it free the linked list
 * @head : pointer to list
 * Return: void
 *
 */

void free_listint2(listint_t **head)
{
listint_t *current;

if (head == NULL)
return;

while (*head)
{
current = *head;
*head = (*head)->next;
free(current);
}
head = NULL;
}
