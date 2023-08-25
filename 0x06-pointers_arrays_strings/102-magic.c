#include <stdio.h>

/**
 * main - Add one line to code to print a[2] = 98
 * *p: pointer
 *
 * Return: Success
 */
int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
/*adding one line to code*/
*(p + 5) = 98;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}

