#include "lists.h"

/**
 * get_dnodeint_at_index -  a function that returns the 
 * nth node of a dlistint_t linked list.
 * @head: head of list
 * @index: index
 * Return: nth node index list
*/



dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *current = head;
    unsigned int i = 0;

    for (; current != NULL && i < index; i++) 
        current = current->next;
    
    if (current == NULL) 
        return (NULL);
    else 
        return current;
}