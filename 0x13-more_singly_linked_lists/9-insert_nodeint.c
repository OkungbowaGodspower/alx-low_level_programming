#include "lists.h"

/**
 * insert_nodeint_at_index - addition of a new node to a linked list
 * at a given position
 * @head - pointer to the head of the list
 * @idx - index of the list where the new node will be added
 * - (indices start at 0)
 * @n - value for the new node to be added
 * Return: pointer to the new node,
 * or NULL - if function fails
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *newNode, *current = *head;
unsigned int node1;

newNode = malloc(sizeof(listint_t));

if (newNode == NULL)
return (NULL);

newNode->n = n;

if (idx == 0)
{
newNode->next = current;
*head = newNode;
return (newNode);
}

for (node1 = 0; node1 < (idx - 1); node1++)
{
if (current == NULL || current->next == NULL)
return (NULL);

current = current->next;
}

newNode->next = current->next;
current->next = newNode;

return (newNode);
}
