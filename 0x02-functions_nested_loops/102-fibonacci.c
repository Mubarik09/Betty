#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long fib1 = 1, fib2 = 2, next;
int count;

printf("%lu, %lu", fib1, fib2);

for (count = 2; count < 50; count++)
{
next = fib1 + fib2;
printf(", %lu", next);
fib1 = fib2;
fib2 = next;
}

putchar('\n');

return (0);
}


