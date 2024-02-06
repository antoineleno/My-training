#include "main.h"

void puts_half(char *str)
{
    int length_of_the_string = 0;
    int n;
    int i;
    char *changed_string = str;

    while ( *changed_string != '\0')
    {
        length_of_the_string++;
        changed_string++;
    }

    n = ( length_of_the_string - 1) / 2;
    

    for ( i = n +1; i < length_of_the_string; i++)
    {
        _putchar(str[i]);
    
    }

    _putchar('\n');

    

}