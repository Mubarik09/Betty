#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
/**
* print_strings - prints numbers followed by a new line
* @n: number of parameter
* @separator: separator between two numbers
* Return: Always 0
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
char *str;
unsigned int i = 0;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
str = va_arg(args, char *);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}

if (separator != NULL && i != n - 1)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}




