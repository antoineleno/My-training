#include "main.h"

char *_strstr(char *haystack, char *needle)
{
    int length_of_needle = 0;
    int length_of_haystack = 0;
    char *new_deedle = needle;
    char *new_haystack = haystack;
    int i,j;

    while ( *new_deedle != '\0')
    {
        length_of_needle++;
        new_deedle++;
    }

    while ( *new_haystack != '\0')
    {
        length_of_haystack++;
        new_haystack++;
    }


    for ( i = 0; i < length_of_haystack; i++)
    {
        for ( j = 0; j < length_of_needle; j++)
        {
            if ( haystack[i + j] != needle[j])
            {
                break;
            }
        }

        if ( haystack[i + j] == needle[j])
        {
            return haystack + i;
        }
    }

    return NULL;
}
