#include "main.h"
/**
 * _print_rev_recursion - prints string in reverse using recursion
 * @s: A pointer to character string
 * Success - return 0
 * Error - return 1
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
else
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
