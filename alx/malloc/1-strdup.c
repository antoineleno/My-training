#include "main.h"

char *_strdup(char *str)
{
    char *allocate_string = (char *)malloc(strlen(str) + 1);

    if ( allocate_string == NULL)
    {
        return NULL;
    }

    else 
    {
        strcpy(allocate_string,str);
    }


    return allocate_string;
}