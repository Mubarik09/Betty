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
printf("%d", result);
}
}
printf("\n");
}

