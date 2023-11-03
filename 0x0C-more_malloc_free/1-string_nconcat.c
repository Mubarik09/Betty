
/**
 * length - function to find string length
 * @c: pointer to the string
 * Return: Return the length of the string
 */
int length(char *c)
{
int len = 0;
while (*c != '\0')
{
len++;
c++;
}
return (len);
}

#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings with a limit
 * @s1: The first string
 * @s2: The second string
 * @n: Maximum number of bytes from s2 to concatenate
 *
 * Return: Pointer to the concatenated string or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int length1 = length(s1);
unsigned int length2 = length(s2);
unsigned int i = 0;
char *array;
unsigned int j = 0;

if (n >= length2)
{
n = length2;
}
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

array = malloc((length1 + n + 1) * sizeof(*array));
if (array == NULL)
{
return (NULL);
}
while (i < length1)
{
array[i] = s1[i];
i++;
}

while (j < n)
{
array[length1 + j] = s2[j];
j++;
}
array[length1 + n] = '\0';
return (array);
}

