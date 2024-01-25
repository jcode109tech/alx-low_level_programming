#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node 
 * at the beginning of a dlistint_t list
 * @head: head of lis
 * @n: Data
 * Return: sum of list data n
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *newNode = malloc(sizeof(dlistint_t));

    if (newNode == NULL)
        return (NULL);

    if (*head == NULL)
        *head = newNode;
    else
    {
        newNode->n = n;
        newNode->next = *head;
        newNode->prev = NULL;
        (*head)->prev = newNode;
        *head = newNode;
    }

    return (newNode);
}