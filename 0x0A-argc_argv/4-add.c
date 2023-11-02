#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program adds positive numbers
 * @argc: argument count
 * @argv: array of argument
 * Return: 0 for success and 1 for error
 */
int main(int argc, char *argv[])
{
int i = 0;
int result = 0;
int j = 0;
if (argc == 1)
{
printf("0\n");
return (1);
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
result += atoi(argv[i]);
}
printf("%d\n", result);
return (0);
}

