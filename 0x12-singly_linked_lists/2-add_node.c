#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node - a function that adds a new node at the
* beginning of a list_t list.
* @head: double pointer
* @str: string contents in struct
* Return: head
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
size_t len = 0;

new_node = (list_t *)malloc(sizeof(list_t));

if (!new_node)
return (NULL);

while (str[len])
len++;

new_node->str = strdup(str);
new_node->len = len;
new_node->next = *head;
*head = new_node;

return (*head);
        
}
