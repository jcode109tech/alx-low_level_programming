#include <stdio.h>
#include "lists.h"

/**
* listint_len - return number of elemets in a linked list
* @h: pointer to a struct
* Return: nodecount
*/

size_t listint_len(const listint_t *h)
{
size_t nodecount = 0;

while (h)
{
h = h->next;
nodecount++;
}

return (nodecount);
}
