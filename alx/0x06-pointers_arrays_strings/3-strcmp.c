#include "main.h"

int _strcmp(char *s1, char *s2)
{
    int n;
    int i = 0;

    while ( s1[i] != '\0' && s2[i] != '\0')
    {
        n = s1[i] - s2[i];

        if ( n != 0)
        {
            return n;
        }
        else 
        {
            return n;
        }
    }

    return s1[i] - s2[i];
}
