#include "main.h"
/**
 * wildcmp - Compares two strings with wildcard support.
 * @s1: The first input string.
 * @s2: The second input string with wildcard '*'.
 *
 * Return: 1 if strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '\0')
return (*s1 == '\0');

if (*s2 == '*')
return (wildcmp(s1, s2 + 1) || (wildcmp(s1 + 1, s2)));

if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));

return (0);
}

