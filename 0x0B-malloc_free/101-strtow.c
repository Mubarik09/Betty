#include <stdlib.h>

/**
 * strtow - Split a string into words.
 * @str: The input string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
int i = 0;
int j = 0;
int word_index = 0;
int word_pos = 0;
int word_count = 0;
int word_start = -1;
char **words = NULL;
if (str == NULL || str[0] == '\0')
{
return (NULL);
}

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')){
word_count++;
}
}

words = (char **)malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
{
return (NULL);
}

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')){
word_start = i;
}
if (word_start != -1 && (str[i] == ' ' || str[i + 1] == '\0'))
{
int word_length = (str[i] == ' ') ? i - word_start : i - word_start + 1;
words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
if (words[word_index] == NULL)
{
for (j = 0; j < word_index; j++)
{
free(words[j]);
}
free(words);
return (NULL);
}


for (j = word_start; j <= i; j++) {
words[word_index][word_pos] = str[j];
word_pos++;
}
words[word_index][word_length] = '\0';
word_index++;
word_start = -1;
}
}

words[word_count] = NULL;

return (words);
}
