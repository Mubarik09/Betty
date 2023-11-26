#include "main.h"
/**
 * get_endianness - function that checks how byte of bits are stored in memory
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
unsigned int num = 1;
char *ptr = (char *)&num;
if (*ptr == 0)
return (0);

else
return (1);
}
