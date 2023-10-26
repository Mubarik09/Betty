#include "main.h"

int is_prime_recursive(int n, int divisor);
/**
 * is_prime_number - Checks if the input integer is a prime number.
 * @n: The input integer.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
if (n <= 3)
return (1);
if (n % 2 == 0)
return (0);

return (is_prime_recursive(n, 3));
}
/**
 * is_prime_recursive - Helper function to recursively check for prime.
 * @n: The input integer.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
if (divisor * divisor > n)
return (1);

if (n % divisor == 0)
return (0);

return (is_prime_recursive(n, divisor + 2));
}

