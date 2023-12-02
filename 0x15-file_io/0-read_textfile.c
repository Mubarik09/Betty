#include "main.h"
/**
 * read_textfile - function reads and printtext file to POSIX
 * @filename: pointer to name of the file to be read
 * @letters: num of bytes to be read and printed
 * Return: number of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fptr = open(filename, O_RDONLY);
int count, total_written;
char *str;
if (filename == NULL)
return (0);

if (fptr == -1)
return (0);
str = (char *)malloc(letters * sizeof(char));
count = read(fptr, str, letters);
if (count == -1)
{
free(str);
close(fptr);
return (0);
}
total_written = write(1, str, count);
if (total_written != count)
{
free(str);
close(fptr);
return (0);
}
free(str);
close(fptr);
return (count);
}


