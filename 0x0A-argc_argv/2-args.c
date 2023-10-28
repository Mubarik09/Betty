#include <stdio.h>
/**
 * main - Function to print all inputed argument received.
 * @argv: array of cli arguments.
 * @argc: cli arguments count.
 * Return: Always 0(success).
 */
int main(int argc, char **argv)
{
int count = 0;
while (count < argc)
{
printf("%s\n", *(argv + count));
count++;
}
return (0);
}

