#include "main.h"
#include <stdio.h>
/**
 * main - function that points to an int and updates the value to  98.
 * n = parameter been pointed at by pointer
 * Return: Always 0.
 */
int main(void)
{
int n = 4;
int *ptr = &n;
*ptr = 98;
printf("%d\n", *ptr);
return (0);
}

/**
 * reset_to_98 - Function to update the value pointed to by a pointer to 98.
 * @n: Pointer to an int.
 */
void reset_to_98(int *n)
{
*n = 98
}
