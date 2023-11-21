#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @index: node to free
 * @head: pointer's pointer to start of node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *precurrent = *head;
listint_t *current;
unsigned int count = 0;
if (*head == NULL)
{
return (-1);
}

if (index == 0)
{
current = *head;
if (current->next == NULL)
{
free(current);
*head = NULL;
return (1);
}
*head = current->next;
free(current);
return (1);
}
while (count + 1 < index)
{
precurrent = precurrent->next;
if (precurrent == NULL || precurrent->next == NULL)
{
return (-1);
}
count++;
}
current = precurrent->next;
if (current->next == NULL)
{
precurrent->next = NULL;
free(current);
return (1);
}
precurrent->next = current->next;
free(current);
return (1);
}
