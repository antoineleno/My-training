#include "main.h"

void puts2(char *str)
{
    int i = 0;

    while ( *str != '\0')
    {
        _putchar(str[i]);
        str+=2;
    }

    _putchar('\n');
}
