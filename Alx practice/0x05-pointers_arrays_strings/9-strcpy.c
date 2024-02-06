#include "main.h"

char *_strcpy(char *dest, char *source);

int main(void)
{





    return (0);
}


char *_strcpy(char *dest, char *src)
{
    int i;
    while ( src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    return dest;
}




