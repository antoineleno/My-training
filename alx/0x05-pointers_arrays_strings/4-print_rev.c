#include "main.h"

void print_rev(char *s)
{
    int i;
    int length = 0;
    char *newvalue = s;

    while ( *newvalue != '\0')
    {
        length++;
        newvalue++;
    }

    for ( i = length; i >= 0; i--)
    {
        _putchar(*(s + i));
        
    }

    _putchar('\n');
}