#include <stdlib.h>
#include "lists.h"

/**
* free_listint2 - a function that frees a listint_t list.
* @head: struct *
*/

void free_listint2(listint_t **head)
{
listint_t *free_struct;

if (head == NULL)
return;

while (*head)
{
free_struct = (*head)->next;
free(*head);

*head = free_struct;
}
}


