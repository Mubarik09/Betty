#include "main.h"
#include <string.h>
/**
 * append_text_to_file - function appends text to end of afile
 * @filename: pointer to name of the file
 * @text_content: pointer to the text to append
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
size_t bytes_written;
size_t length;
int fp;
off_t file_position;
if (filename == NULL)
return (-1);
fp = open(filename, O_APPEND | O_WRONLY);
if (fp == -1)
return (-1);
if (text_content == NULL)
{
close(fp);
return (1);
}
length = strlen(text_content);
file_position = lseek(fp, 0, SEEK_END);
if (file_position == -1)
{
close(fp);
return (-1);
}
bytes_written = write(fp, text_content, length);
if (bytes_written != length)
return (-1);
close(fp);
return (1);
}


