#include "main.h"
/**
 * swap_integers - function that swap values
 * @a: pointer 1
 * @b: pointer 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}

