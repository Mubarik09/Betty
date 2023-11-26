#include "main.h"
#include <stddef.h>
/**
 * set_bit - function sets bit at a given index to zero
 * @n: pointer to a binary value
 * @index: position to change bit
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 32)
return (-1);

*n = ((1 << index) | *n);
return (1);
}
