#include "main.h"

void _puts(char *str)
{
    int i;
    int length = 0;
    char *newvalue = str;

    while ( *newvalue != '\0')
    {
        length++;
        newvalue++;
    }

    for ( i = 0; i < length; i++)
    {
        _putchar(*str);
        str++;
    }

    _putchar('\n');
}