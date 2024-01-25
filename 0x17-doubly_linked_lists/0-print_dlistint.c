# include "lists.h"

/**
* print_dlistint - a function that prints all 
* the elements of a dlistint_t list.
* @h: head of list
* Return: nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
    size_t num_nodes = 0;

    while (h)
    {
        printf("%d\n",h->n);
        num_nodes++;
        h = h->next;
    }

    return (num_nodes);
}