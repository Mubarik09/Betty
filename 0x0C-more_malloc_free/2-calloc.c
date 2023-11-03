#include <stdlib.h>
#include "main.h"
/**
 * _calloc - Allocates memory for an array and initializes it to zero
 * @nmemb: Number of elements to allocate
 * @size: Size in bytes of each element
 *
 * Return: Pointer to the allocated memory, or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *array = malloc(size * nmemb);
unsigned int i = 0;
if (array == NULL)
{
return (NULL);
}
if (nmemb == 0 || size == 0)
{
return (NULL);
}

for (i = 0; i < nmemb * size; i++)
{
((char *)array)[i] = 0;
}
return (array);
}

