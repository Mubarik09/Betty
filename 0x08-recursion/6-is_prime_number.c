#include "main.h"
#include <math.h>
/**
 * is_prime_number - Checks if the input integer is a prime number.
 * @n: The input number.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else if (n == 2 || n == 3)
{
return (1);
}
else if (n % 2 == 0 || n % 3 == 0)
{
return (0);
}
else if (sqrt(n) == (int)sqrt(n))
{
return (0);
}
else
{
return (1);
}
}
