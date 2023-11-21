#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - function that sums up all data in listint_t list
 * @head: pointer to a start of node
 * Return: return sum of data or 0 of failed
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *node = head;
if (head == NULL)
{
return (0);
}
while (node != NULL)
{
sum = sum + node->n;
node = node->next;
}
return (sum);
}
