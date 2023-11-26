#include "main.h"
#include <stddef.h>
/**
 * clear_bit - function sets a value at a given bit to zero
 * @n: pointer to the binary number
 * @index: pointion to clear
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (n == NULL)
return (-1);

if (index > 32)
return (-1);

*n = (~(1 << index) & *n);
return (1);
}
