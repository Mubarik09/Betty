#include <stdlib.h>
#include "main.h"
/**
 * _realloc - function that reallocates a memory block
 * @ptr: pointer to the string
 * @new_size: size of the new array to be allocated
 * @old_size: size of the old array to be reallocated
 * Return: return the pointer
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
int *newptr;
int i;
int minsize;
minsize = new_size > old_size ? old_size : new_size;
if (new_size > old_size || old_size > new_size)
{
newptr = malloc(new_size * sizeof(*newptr));
if (newptr == NULL)
{
return (NULL);
}
for (i = 0; i < minsize; i++)
{
newptr[i] = 0;
}
free(ptr);
return (newptr);
}

if (ptr == NULL)
{
newptr = malloc(new_size * sizeof(*newptr));
if (newptr == NULL)
{
return (NULL);
}
return (newptr);
}

if (new_size == old_size)
{
return (ptr);
}

if (new_size == 0)
{
free(ptr);
return (NULL);
}
return (NULL);
}

