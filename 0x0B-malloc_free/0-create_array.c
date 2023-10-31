#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function creates address, initialize the array
 * @size: space of array
 * @c: array value
 * Return: Always pointer (Success)
 */
char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *array = malloc(size * sizeof(*array));
if (array == NULL)
{
return (0);
}
if (size == 0)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
