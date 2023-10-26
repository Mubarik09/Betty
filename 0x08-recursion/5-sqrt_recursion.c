#include <stdio.h>
/**
 * find_sqrt - Helper function to find the square root recursively.
 * @n: The input number for which the square root is being calculated.
 * @guess: The current guess for the square root.
 *
 * Return: The square root of n, or -1 if n don't have a natural square root.
 */
int find_sqrt(int n, int guess)
{
if (guess * guess == n)
{
return (guess);
}
else if (guess * guess > n)
{
return (-1);
}
else
{
return (find_sqrt(n, guess + 1));
}
}
/**
 * _sqrt_recursion - Returns the natural square root using recursion.
 * @n: The input number.
 *
 * Return: The square root of n. If n have no natural square root, returns -1.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (find_sqrt(n, 0));
}

