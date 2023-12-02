#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: pointer to name of the file
 * @text_content: pointer to what file should contain
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
size_t bytes_written;
size_t length = 0;
int fp;
char *ptr;
if (filename == NULL)
return (-1);
fp = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
if (fp == -1)
return (-1);
if (text_content == NULL)
{
close(fp);
return (1);
}
ptr = text_content;
while (*ptr != '\0')
{
length++;
ptr++;
}
bytes_written = write(fp, text_content, length);
if (bytes_written != length)
{
close(fp);
return (-1);
}
close(fp);
return (1);
}

