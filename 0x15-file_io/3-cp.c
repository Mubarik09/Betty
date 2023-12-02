#include "main.h"
/**
 * main - program copies file to another file
 * @argc: cli argument count
 * @argv: strings of arguments
 * Return: 1 on success
 */
int main(int argc, char *argv[])
{
int fp, fx, a, b;
size_t bytes_read, bytes_written;
char *buffer;
if (argc != 3)
{
dprintf(2, "Usage: cp file_from file_to");
return (-1);
}
fp = open(argv[1], O_RDONLY);
if (fp == -1)
{
dprintf(2, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
fx = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
if (fx == -1)
{
dprintf(2, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
buffer = (char *)malloc(1024 * sizeof(char));
if (buffer == NULL)
return (-1);
while ((bytes_read = read(fp, buffer, 1024)) > 0)
{
bytes_written = write(fx, buffer, bytes_read);
if (bytes_read != bytes_written)
{
free(buffer);
return (-1);
}
}
a = close(fp);
if (a == -1)
{
dprintf(2, "Error: Can't close fd %d\n", fp);
free(buffer);
exit(100);
}
b = close(fx);
if (b == -1)
{
dprintf(2, "Error: Can't close fd %d\n", fx);
free(buffer);
exit(100);
}
free(buffer);
return (1);
}




