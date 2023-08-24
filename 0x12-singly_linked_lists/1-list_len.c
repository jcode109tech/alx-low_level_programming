#include  "lists.h"
#include  <stdlib.h>

/**
* list_len - a function that returns the number
* of elements in a linked list_t list.
* @h: Pointer to list_t.
* Return: number of elemnts
*/

size_t list_len(const list_t *h)
{
size_t num = 0;

while (h)
{
num++;
h = h->next;
}

return (num);
}

