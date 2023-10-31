#include <unistd.h>

int _putchar(const char c)
{
write(1, &c, 1);
return 0;
}
