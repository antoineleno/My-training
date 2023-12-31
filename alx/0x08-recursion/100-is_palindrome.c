#include "main.h"
#include <string.h>

int is_palindrome(char *s)
{
    unsigned int n = strlen(s);

    if ( *s == '\0')
    {
        return 1;
    }

    else
    {
        return is_palindrome_helper(s,0,n-1);
    }
}


int is_palindrome_helper(char *s,int start, int end)
{
    if ( start >= end)
    {
        return 1;
    }

    else if ( s[start] != s[end])
    {
        return 0;
    }

    else 
    {
        return is_palindrome_helper(s,++start,--end);
    }
}