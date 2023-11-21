#include "lists.h"

/**
 * listint_len - function that shows elements in a linked listint_t list.
 * @h: pointer to start of linked list
 * Return: number of elements if success
 */
size_t listint_len(const listint_t *h)
{
size_t nodes = 0;
while (h != NULL)
{
nodes++;
h = h->next;
}
return (nodes);
}
