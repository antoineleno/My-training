#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
    int i;
    int j;
    int length_of_s1 = 0;
    int length_of_s2 = 0;
    char *result;
    char *new_s1 = s1;
    char *new_s2 = s2;

    while ( *new_s1 != '\0')
    {
        length_of_s1++;
        new_s1++;
    }

    while ( *new_s2 != '\0')
    {
        length_of_s2++;
        new_s2++;
    }

    new_s1 = s1;
    new_s2 = s2;
    result = (char *)malloc(length_of_s1 + length_of_s2);

    for ( i = 0; i < length_of_s1; i++)
    {
        result[i] = s1[i];
    }

    for ( j = 0; j < length_of_s2; j++)
    {
        result[length_of_s1 + j] = s2[j];
    }

    
    return result;

}
