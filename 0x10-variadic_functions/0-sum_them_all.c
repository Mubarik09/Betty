#include <stdarg.h>
/**
* sum_them_all - adds all the numbers
* @n: the number of parameters passed
* Return: Always 0
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i = 0;
int sum = 0;
int value;
va_list args;
if (n == 0)
{
return (0);
}

va_start(args, n);
for (i = 0; i < n; i++)
{
value = va_arg(args, int);
sum += value;
}

va_end(args);
return (sum);
}

