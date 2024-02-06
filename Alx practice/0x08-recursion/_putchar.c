#include <unistd.h>

void _putchar(char c)
{
    write(2,&c,1);
}