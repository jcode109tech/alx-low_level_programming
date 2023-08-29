#include "lists.h"
#include <stdlib.h>

/**
* delete_nodeint_at_index -  a function that deletes the node
* at index index of a listint_t linked list.
* @head: struct *
* @index: position
* Return: 1 if success, -1 otherwise.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t *previous;
listint_t *current;

if (!(head) || index == 0)
return (-1);

if (index == 0)
{
previous = *head;
*head = (*head)->next;
free(previous);
return (1);
}

current = *head;
previous = NULL;

for (i = 1; current != NULL && i < index; i++)
{
previous = current;
current = current->next;
}

if (current == NULL)
return (-1);

previous->next = current->next;
free(current);

return (1);
}
