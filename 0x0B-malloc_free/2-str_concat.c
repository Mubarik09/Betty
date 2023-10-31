#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function joins two strings in a new array
 * @s1: first string to be copied
 * @s2: second string to add to s1
 * Return: return pointer if sucess and NULL if error
 */
char *str_concat(char *s1, char *s2)
{
int i = 0;
int j = len(s1);
int size = len(s1) + len(s2) + 1;
char *array = malloc(size * sizeof(*array));
if (array == NULL)
{
return (NULL);
}
if (s1 == NULL)
{
s1 = " ";
}
if (s2 == NULL)
{
s2 = " ";
}
for (i = 0; i < len(s1); i++)
{
array[i] = s1[i];
}
for (j = len(s1); j < size; j++)
{
array[j] = *s2;
s2++;
}
return (array);
}



