/**
 * len - Calculate the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string (number of characters).
 */
int len(char *str)
{
int length = 0;
while (str[length] != '\0')
{
length++;
}
return (length);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - function which copies an array
 * @str: pointer to array where string is copied from
 * Return: return pointer to array is success and NULL if error
 */
char *_strdup(char *str)
{
int i = 0;
int size = len(str) + 1;
char *array = malloc(size * sizeof(*array));
if (array == NULL)
{
return (NULL);
}
if (str == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
array[i] = str[i];
}
return (array);
}
