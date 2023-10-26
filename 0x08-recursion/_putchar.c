#include <unistd.h>

/**
 * function for writing to standard output
 * success - return 0
 * Error - return -1
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}


