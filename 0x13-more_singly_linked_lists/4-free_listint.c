#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to start of node
 * Return: freed space
 */
void free_listint(listint_t *head)
{
listint_t *temp = head;
if (head->next == NULL)
{
free(head);
return;
}
else
{
while (head != NULL)
{
head = head->next;
free(temp);
temp = head;
}
free(temp);
}
}

