#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
size_t count = 0;
if (h->str == NULL)
{
printf("[0] (nil)");
}
while (h != NULL)
{
count++;
printf("[%u] %s\n", h->len, h->str);
h = h->next;
}

return (count);
}
