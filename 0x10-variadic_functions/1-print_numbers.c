#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
/**
* print_numbers - prints numbers followed by a new line
* @n: number of parameter
* @separator: separator between two numbers
* Return: Always 0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list args;
int num;
va_start(args, n);
if (separator == NULL)
{
separator = "";
}

while (i < n)
{
num = va_arg(args, int);
printf("%d", num);
if (i < n - 1)
{
printf("%s", separator);
}
i++;
}

va_end(args);
printf("\n");
}

