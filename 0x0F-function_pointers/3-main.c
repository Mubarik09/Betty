#include "3-calc.h"
#include "stdio.h"
#include <stdlib.h>

/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int num1 = atoi(argv[1]);
int num2 = atoi(argv[3]);
char *operator = argv[2];
int (*ptr_to_result)(int, int) = get_op_func(operator);
int result = ptr_to_result(num1, num2);

if (get_op_func(operator) == NULL || operator[1] != '\0')
{
printf("Error\n");
exit(99);
}
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (argv[2] != operator)
{
printf("Error\n");
return (-1);
}
printf("%d\n", result);
return (0);
}






