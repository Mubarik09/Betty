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
while (i < n)
{
num = va_arg(args, int);
if (i == n - 1)
{
printf("%d", num);
}
else if (separator != NULL)
{
printf("%d, ", num);
}
else
{
printf("%d", num);
}
i++;
}

va_end(args);
printf("\n");
}

