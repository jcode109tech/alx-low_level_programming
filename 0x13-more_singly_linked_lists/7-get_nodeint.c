#include "lists.h"
/**
* get_nodeint_at_index - a function that deletes the head node of a
* listint_t linked list, and returns the head node’s data (n).
* @head: struct *
* @index: position
* Return: listint_t
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *current;

if (head)
return (NULL);

current = head;

while (current && i < index)
{
if (i == index)
return (current);

current = current->next;
i++;
}

return (current ? current : NULL);

}
