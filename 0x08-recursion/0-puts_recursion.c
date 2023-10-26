#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: A pointer to character string
 * Success - return 0
 * Error - return 1
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
