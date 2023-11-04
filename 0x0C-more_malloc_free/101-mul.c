/**
 * pow - Calculate the power of an integer.
 * @base: The base number.
 * @exponent: The exponent to which the base is raised.
 *
 * Return: The result of base raised to the power of exponent.
 */
double pow(double base, double exponent)
{
double result = 1.0;
int i;

for (i = 0; i < exponent; i++)
{
result *= base;
}

return (result);
}

#include "main.h"
#include <stdlib.h>
/**
 * prints - function to print the results
 * @num1: first string
 * @num2: second string
 * Return: return only for void data type
 */
void prints(char *num1, char *num2)
{
unsigned long temp;
int count;
unsigned long result;
int i;
result = atoi(num1) * atoi(num2);
temp = result;
count = 0;

while (temp != 0)
{
temp /= 10;
count++;
}

for (i = 0; i < count; i++)
{
_putchar(result / (int)pow(10, count - i - 1) + '0');
result %= (int)pow(10, count - i - 1);
}
_putchar('\n');
return;
}

#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
char *error = "Error";
char *num1 = argv[1];
char *num2 = argv[2];
int i = 0;


if (argc != 3)
{
for (i = 0; i < 5; i++)
{
_putchar(error[i]);
}
exit(98);
}

for (i = 0; num1[i] != '\0'; i++)
{
if (num1[i] < '0' || num1[i] > '9')
{
for (i = 0; i < 5; i++)
{
_putchar(error[i]);
}
exit(98);
}
}

for (i = 0; num2[i] != '\0'; i++)
{
if (num2[i] < '0' || num2[i] > '9')
{
for (i = 0; i < 5; i++)
{
_putchar(error[i]);
}
exit(98);
}
}
prints(num1, num2);
return (0);
}


