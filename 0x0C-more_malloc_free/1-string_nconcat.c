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
unsigned int length1 = 0;
unsigned int length2 = 0;
unsigned int i = 0;
char *array;
unsigned int j = 1;
while (*s1 != '\0')
{
length1++;
s1++;
}
while (*s2 != '\0')
{
length2++;
s2++;
}

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
for (i = 0; i < length1; i++)
{
array[i] = s1[i];
}

for (j = 0; j < n + 1; j++)
{
array[length1 + j] = s2[j];
}
return (array);
}

