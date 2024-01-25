#include "lists.h"

/**
* dlistint_len -  a function that returns the number 
* of elements in a linked dlistint_t list.
* @h: The head of the dlistint_t list.      
* Returns: no of linked list
*/

size_t dlistint_len(const dlistint_t *h)
{
    size_t num_nodes = 0;

    while(h)
    {
        num_nodes++;
        h = h->next;
    } 

    return (num_nodes);
}      