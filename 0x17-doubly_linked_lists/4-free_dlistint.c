#include "lists.h"

/**
 * free_dlistint - ction that frees a dlistint_t list.
 * @head: head of list
 * Return: None
*/


void free_dlistint(dlistint_t *head)
{
    dlistint_t *current = head;
    dlistint_t *next;

    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }

    head = NULL;
}