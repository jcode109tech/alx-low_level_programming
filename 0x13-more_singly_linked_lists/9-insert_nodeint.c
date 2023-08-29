#include "lists.h"
#include <stdlib.h>

/***
* insert_nodeint_at_index - write a function that inserts a new
* node at a given position.
* @head:
* @idx:
* @n:
* Return: newnode
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *current;
listint_t *newnode;


if (!(*head) || idx == 0)
{
newnode = (listint_t *) malloc(sizeof(listint_t));
if (newnode != NULL)
{
newnode->n = n;
newnode->next = *head;
*head = newnode;
}
}

current = *head;

for (i = 1; current != NULL && i < idx; i++)
current = current->next;

if (current == NULL)
return (NULL);

newnode = (listint_t *)malloc(sizeof(listint_t));

if (!newnode)
return (NULL);

newnode->n = n;
newnode->next = current->next;
current->next = newnode;

return (newnode);
}
