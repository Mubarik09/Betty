#include "main.h"
#include <string.h>
#include <stddef.h>
/**
 * binary_to_uint - function to convert binary to decimal
 * @b: pointer to the binary
 * Return: the decimal or 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int total = 0;
int answer = 1;
int i = 0;
int format[500];
int count = 0;
if (b == NULL)
return (0);
while (*b)
{
if (*b == '1' || *b == '0')
{
format[i] = *b - '0';
i++;
count++;
b++;
}
else
{
return (0);
}
}
for (i = count - 1; i >= 0; i--)
{
total += (format[i] * answer);
answer *= 2;
}
return (total);
}





