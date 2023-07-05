#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head : pointer to the head of the linked list
 * Return: head node's data (x)
 * or 0 - if the linked list is empty
 *
 */

int pop_listint(listint_t **head)
{
listint_t *current;
int x;

current = *head;

if (current == NULL)
return (0);

*head = current->next;
x = current->n;
free(current);
return (x);
}
