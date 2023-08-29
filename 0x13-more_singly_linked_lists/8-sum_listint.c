#include "lists.h"

/**
* sum_listint - a function that returns the sum of all
* the data (n) of a listint_t linked list.
* @head: struct *
* Return: int, the sum of n in every node.
*/

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *SUM;

SUM = head;

while (SUM)
{
sum += SUM->n;
SUM = SUM->next;
}

return (sum);

}
