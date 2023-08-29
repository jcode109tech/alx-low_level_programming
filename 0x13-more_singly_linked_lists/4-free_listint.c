#include <stdlib.h>
#include "lists.h"

/**
* free_listint - a function that frees a listint_t list.
* @head: struct
*/

void free_listint(listint_t *head)
{
listint_t *free_struct;

while (head)
{
free_struct = head->next;
free(head);

head = free_struct;
}
}

