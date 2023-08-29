
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint_end - function that adds a new node at the end
* of a listint_t list.
* @head: double pointer
* @n: interger
* Return: newnode
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *current;
listint_t *newnode = (listint_t *)malloc(sizeof(listint_t));

if (!newnode)
return (NULL);

current = *head;

newnode->n = n;
newnode->next = NULL;

if (!(*head))
{
*head = newnode;
return (newnode);
}

while (current->next)
current = current->next;

current->next = newnode;

return (newnode);
}



