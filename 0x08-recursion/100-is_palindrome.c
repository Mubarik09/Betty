#include "main.h"

int is_palindrome_util(char *s, int start, int end);
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
int length = 0;
int end;

while (s[length] != '\0')
length++;

end = length - 1;

return (is_palindrome_util(s, 0, end));
}
/**
 * is_palindrome_util - A  function to check if string is a palindrome.
 * @s: The input string.
 * @start: The start index of the current substring.
 * @end: The end index of the current substring.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int is_palindrome_util(char *s, int start, int end)
{
if (start >= end)
return (1);

if (s[start] != s[end])
return (0);

return (is_palindrome_util(s, start + 1, end - 1));
}

