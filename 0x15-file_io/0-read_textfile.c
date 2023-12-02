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
int count;
char *str = (char *)malloc(letters * sizeof(char));
if (filename == NULL)
return (0);

if (fptr == -1)
return (0);
count = read(fptr, str, letters);
if (count == -1)
{
close(fptr);
return (0);
}
dprintf(1, "%s", str);
close(fptr);
return (count);
}


