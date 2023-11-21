#include "lists.h"
/**
 * get_nodeint_at_index - function returns the nth node of linked list.
 * @head: pointer to start of node
 * @index: index of the node, starting at 0
 * Return: returns the nth node on success and NULL on failure
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *node = head;
listint_t *current = head;
unsigned int count = 0;
unsigned int totalnodes = 0;
if (head == NULL)
{
return (NULL);
}
while (current != NULL)
{
totalnodes++;
current = current->next;
}
if (index >= totalnodes)
{
return (NULL);
}
else if (index == 0)
{
return (head);
}
else
{
while (count < index)
{
node = node->next;
count++;
}
return (node);
}
}
