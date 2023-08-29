#include "lists.h"

/**
* reverse_listint - a function that reverses a listint_t linked list.
* @head: struct *
* Return: head
*/


listint_t *reverse_listint(listint_t **head) 
{
listint_t *prev = NULL;
listint_t *current = *head;
listint_t *nextnode = NULL;

while (current != NULL)
{
nextnode = current->next;
current->next = prev;
prev = current;
current = nextnode;
}

*head = prev;
return (*head);
}
