#include <stdio.h>
#include "lists.h"

/**
* print_listint - prints all contents of node
* @h: pointer for struct
* Return: nodecount:
*/


size_t print_listint(const listint_t *h)
{
size_t nodecount = 0;
while (h != NULL)
{
printf("%d\n", h->n);
nodecount++;
h = h->next;
}

return (nodecount);
}

