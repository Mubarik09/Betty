#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: pointer's pointer to start of node
 * Return: returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
listint_t *temp = *head;
int num;
if (*head == NULL)
{
return (0);
}
*head = (*head)->next;
num = temp->n;
free(temp);
return (num);
}

