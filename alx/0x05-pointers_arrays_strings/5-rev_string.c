#include "main.h"

void rev_string(char *s)
{
    int length = 0;
    int start = 0;
    int end;
    char *newvalue = s;

    while ( *newvalue != '\0')
    {
        length++;
        newvalue++;
    }

    end = length - 1;

    while ( start < end)
    {
        char c = s[start];
        s[start] = s[end];
        s[end] = c;
        start++;
        end--;
    }
}
