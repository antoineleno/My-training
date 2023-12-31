#include "main.h"

int _strlen(char *s)
{
    int length = 0;
    char *newvalue = s;

    while ( *newvalue != '\0')
    {
        length++;
        newvalue++;
    }

    return length;
}