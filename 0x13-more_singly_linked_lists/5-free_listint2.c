#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function that frees a listint_t list and set head to NULL
 * @head: pointer's pointer to start of node
 * Return: freed space
 */
void free_listint2(listint_t **head)
{
listint_t *temp = *head;
if (*head == NULL)
{
return;
}
else if ((*head)->next == NULL)
{
free(*head);
return;
}
else
{
while (*head != NULL)
{
*head = (*head)->next;
free(temp);
temp = *head;
}
free(temp);
*head = NULL;
}
}
