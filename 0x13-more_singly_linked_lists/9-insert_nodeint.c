#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - function that inserts a new node at a position
 * @idx: position to insert newnode
 * @n: data of node
 * @head: pointer's pointer to start of node
 * Return:  the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int totalnode = 0;
listint_t *current = *head;
listint_t *node = *head;
listint_t *newnode = malloc(sizeof(listint_t));
unsigned int count = 0;
if (newnode == NULL)
return (NULL);
newnode->n = n;
while (current->next != NULL)
{
totalnode++;
current = current->next;
}
if (*head == NULL && idx == 0)
{
newnode->next = *head;
*head = newnode;
return (newnode);
}
if (idx > totalnode + 1)
{
free(newnode);
return (NULL);
}
if (idx == totalnode + 1)
{
current->next = newnode;
newnode->next = NULL;
return (newnode);
}
while (count + 1 < idx)
{
node = node->next;
count++;
}
newnode->next = node->next;
node->next = newnode;
return (newnode);
}




