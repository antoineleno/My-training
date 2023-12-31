#include "main.h"

char *leet(char *a)
{
    int i = 0;
    int j;
    int length = 0;
    char *b = "aeotl";
    char *c = "AEOTL";
    char *number = "43071";
    char *new = a;

    while ( *new != '\0')
    {
        length++;
        new++;
    }

    while ( i < length)
    {
        for ( j = 0; j < 5; j++)
        {
            if ( a[i] == b[j] || a[i] == c[j])
            {
                a[i] = number[j];
                break;
            }
        }
        i++;
    }

    return a;
}
