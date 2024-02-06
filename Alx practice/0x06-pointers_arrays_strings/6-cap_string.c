#include "main.h"

char *cap_string(char *a)
{
    int i = 0;
    
    while (a[i] != '\0')
    {
        if (a[i] == ',' || a[i] == ';' || a[i] == '!' || a[i] == '(' || a[i] == '.' || a[i] == ' ')
        {
            
            if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
            {
                a[i + 1] = a[i + 1] - 32;
            }
        }
        i++;
    }

    return a;
}
