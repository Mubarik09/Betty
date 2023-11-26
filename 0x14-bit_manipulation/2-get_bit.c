#include "main.h"
/**
 * get_bit - function to check the bit at an index
 * @n: binary value
 * @index: position to check for the bit
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > 32)
return (-1);

else
return ((n >> index) & 1);
}
