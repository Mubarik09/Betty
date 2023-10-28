#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints its name followed by a new line.
 * If you rename the program, it will print the new name without
 * requiring recompilation. The path before the program name is not removed.
 *@argc: unused parameter.
 * @argv: array of cli arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void)argc;
printf("%s\n", argv[0]);
return (0);
}
