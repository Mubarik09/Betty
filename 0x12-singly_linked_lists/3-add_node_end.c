#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *tail = *head;
unsigned int len = 0;
list_t *new_node = malloc(sizeof(list_t));
while (str[len])
{
len++;
}
new_node->str = strdup(str);
new_node->len = len;
if (new_node == NULL)
{
return (NULL);
}
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
while (tail->next != NULL)
{
tail = tail->next;
}
tail->next = new_node;
new_node->next = NULL;

return (new_node);
}


