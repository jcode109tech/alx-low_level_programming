#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at the 
 * end of a dlistint_t list.
 * @head: head of lis
 * @n: Data
 * Return: new list
*/


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *newNode = malloc(sizeof(dlistint_t));
    dlistint_t *current = malloc(sizeof(dlistint_t));

    if (newNode == NULL)
        return (NULL);

    newNode->n = n;
    newNode->next = NULL;

    if (*head == NULL)
    {
        newNode->prev = NULL;
        *head = newNode;
        
        return (newNode);
    }

    current = *head;

    while(current->next != NULL)
        current = current->next;
    
    current->next = newNode;
    newNode->prev = current;

    return (newNode);
}