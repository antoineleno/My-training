#include "main.h"

char *string_toupper(char *a)
{
    
    int i;
    while ( a[i] != '\0')
    {
        if ( a[i] <= 'z' && a[i] >= 'a')
        {
            a[i] = a[i] - 32;
        }
        i++;
    }
    
    return a;
}