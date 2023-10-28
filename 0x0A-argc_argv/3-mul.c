#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * @argc: cli argument count.
 * @argv: array of argument.
 * Return: Always 1(error).
 */
int main(int argc, char **argv)
{
if (argc == 3)
{
int a = atoi(argv[1]);
int b = atoi(argv[2]);
int result = a * b;
printf("%d\n", result);
}
if (argc != 3)
{
printf("Error\n");
}
return (1);
}

