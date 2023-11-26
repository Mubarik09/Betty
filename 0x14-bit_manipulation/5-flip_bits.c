#include "main.h"
/**
 * flip_bits - function that returns bit to flip to change a number to another.
 * @m: number to be flipped
 * @n: number to compare to the first
 * Return: returns the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int count = 0;
unsigned long int i = 0;
unsigned long int a = m ^ n;
unsigned int b;
while (i < 32)
{
b = ((a >> i) & 1);
if (b != 0)
{
count++;
}
i++;
}


return (count);
}

