#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - function to add node at end of list
 * @head: pointer's pointer to start of node
 * @n: data in structure
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *current = *head;
listint_t *newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
{
return (NULL);
}

newnode->next = NULL;
newnode->n = n;
if (*head == NULL)
{
*head = newnode;
return (newnode);
}
while (current->next != NULL)
{
current = current->next;
}
current->next = newnode;
current = newnode;
return (newnode);
}

