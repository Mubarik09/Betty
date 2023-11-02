#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that finds the change to an amount inputed
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 when success, and 1 when error
 */
int main(int argc, char *argv[])
{
int cent;
int coin25;
int coin10;
int coin5;
int coin2;
int coin1;
int total_change;

if (argc != 2)
{
printf("Error\n");
return (1);
}
if (atoi(argv[1]) < 0)
{
printf("0\n");
return (0);
}
cent = atoi(argv[1]);
coin25 = cent / 25;
cent = cent % 25;
coin10 = cent / 10;
cent = cent % 10;
coin5 = cent / 5;
cent = cent % 5;
coin2 = cent / 2;
cent = cent % 2;
coin1 = cent;

total_change = coin25 + coin10 + coin5 + coin2 + coin1;
printf("%d\n", total_change);
return (0);
}
