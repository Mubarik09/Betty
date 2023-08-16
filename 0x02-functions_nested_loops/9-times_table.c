#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
int row, column, result;

for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{
result = row * column;

if (column == 0)
{
putchar('0');
}
else if (result < 10)
{
putchar(' ');
putchar(' ');
putchar(result + '0');
}
else
{
putchar(' ');
putchar((result / 10) + '0');
putchar((result % 10) + '0');
}

if (column < 9)
{
putchar(',');
putchar(' ');
}
}

putchar('\n');
}
}

