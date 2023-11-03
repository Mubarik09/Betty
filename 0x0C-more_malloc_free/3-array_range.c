#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers from min to max
 * @min: the minimum value
 * @max: the maximum value
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
int size = (max - min) + 1;
int *ptr = malloc(size * sizeof(*ptr));
int i = 0;
if (min > max)
{
return (NULL);
}
if (ptr == 0)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
ptr[i] = min;
min++;
}
return (ptr);
}


