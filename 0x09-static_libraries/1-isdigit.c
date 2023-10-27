#include "main.h"
/**
 * _isdigit - function to check for digits between 0 and 9
 * @c: Inputed number
 * Return: Output 1 if true or 0 if false
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
