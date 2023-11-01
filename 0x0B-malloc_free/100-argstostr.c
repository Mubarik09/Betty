/**
 * string_length - Calculate the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string (number of characters).
 */
int string_length(char *str)
{
int length = 0;
while (str[length] != '\0')
{
length++;
}
return (length);
}

#include <stdlib.h>
/**
 * argstostr - Concatenate program arguments with newlines.
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 *
 * Return: A pointer to a newly allocated string containing concatenated
 * arguments separated by '\n', or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
int i = 0;
int j = 0;
int position = 0;
int total_length = 0;
char *result;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
total_length += string_length(av[i]) + 1;
}

result = malloc(total_length * (sizeof(*result)));

if (result == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
result[position++] = av[i][j];
}
result[position++] = '\n';
}
return (result);
}

