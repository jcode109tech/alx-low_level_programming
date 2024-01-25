#include "lists.h"
/**
* insert_dnodeint_at_index -  function that inserts a new node at a given position.
* @h: head of list
* @idx: index to insert
* @n: data to insert
* Returns: 
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n) {

    unsigned int pos_current = 0;

    dlistint_t *current = *h;
    dlistint_t *newNode = NULL;

    if (h == NULL)
        return NULL;

    while (current != NULL && pos_current < idx)
    {
        current = current->next;
        pos_current++;
    }

    if (current == NULL && pos_current < idx)
        return NULL;

    newNode = malloc(sizeof(dlistint_t));

    if (newNode == NULL)
        return NULL;

    newNode->n = n;
    newNode->next = NULL;
    newNode->prev = NULL;

    if (idx == 0)
        add_dnodeint(&newNode, n);
    else 
    {
        newNode->next = current;
        newNode->prev = current->prev;

        if (current->prev != NULL)
            current->prev->next = newNode;

        current->prev = newNode;
    }

    return newNode;
}

