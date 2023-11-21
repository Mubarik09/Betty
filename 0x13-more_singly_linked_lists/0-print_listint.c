#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: pointer to start of linked list
 * Return: number of nodes if success
 */
size_t print_listint(const listint_t *h)
{
size_t nodes = 0;
while (h != NULL)
{
nodes++;
printf("%d\n", h->n);
h = h->next;
}
return (nodes);
}
