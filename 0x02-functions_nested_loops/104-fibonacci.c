#include "main.h"
#include <stdio.h>

#define MAX_DIGITS 1000
/**
 * add_arrays - Adds two arrays representing numbers
 * @arr1: Array representing the first number
 * @arr2: Array representing the second number
 */
void add_arrays(int *arr1, int *arr2)
{
int carry = 0;

for (int i = MAX_DIGITS - 1; i >= 0; i--)
{
int sum = arr1[i] + arr2[i] + carry;
arr1[i] = sum % 10;
carry = sum / 10;
}
}
/**
 * print_fibonacci - Prints a number represented by an array of digits
 * @fib: Array representing the number
 */
void print_fibonacci(int *fib)
{
int start = 0;
while (start < MAX_DIGITS && fib[start] == 0)
{
start++;
}
for (int i = start; i < MAX_DIGITS; i++)
{
printf("%d", fib[i]);
}
}
/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{
int fib1[MAX_DIGITS] = {0};
int fib2[MAX_DIGITS] = {0};
int fib3[MAX_DIGITS] = {0};

fib1[MAX_DIGITS - 1] = 1;
fib2[MAX_DIGITS - 1] = 2;

printf("%d, %d, ", 1, 2);

for (int i = 3; i <= 98; i++)
{
add_arrays(fib3, fib1);
add_arrays(fib3, fib2);
for (int j = 0; j < MAX_DIGITS; j++)
{
fib1[j] = fib2[j];
fib2[j] = fib3[j];
}
print_fibonacci(fib3);
if (i != 98)
{
printf(", ");
}
}
printf("\n");

return (0);
}


