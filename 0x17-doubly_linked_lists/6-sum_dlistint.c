#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of 
 *  the data (n) of a dlistint_t linked list.
 *  @head: head of list
 *  Return: sum of data
*/
int sum_dlistint(dlistint_t *head)
{
    dlistint_t *current = head;
    int sum_list = 0;

    while (current)
    {
        sum_list += current->n;
        current = current->next;
    }
    
    return (sum_list);
}