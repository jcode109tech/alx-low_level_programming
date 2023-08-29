#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint - function that adds a new node at the beginning
* of a listint_t list.
* @head: double pointer
* @n: interger
* Return: newnode
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode = malloc(sizeof(listint_t));

if (newnode == NULL)
return (NULL);

newnode->n = n;
newnode->next = *head;
*head = newnode;

return (newnode);
}

