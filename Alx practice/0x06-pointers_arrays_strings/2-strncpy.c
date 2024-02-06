#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
    int i = 0; 
    int j = 0;

    while ( j < n && src[i] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';


    return dest;
}