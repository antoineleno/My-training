#include "main.h"


char *_strpbrk(char *s, char *accept)
{

unsigned int i,j;
unsigned int length_of_accept = 0;
unsigned int length_of_s = 0;
char *new_s = s;
char *new_accept = accept;

while ( *new_s != '\0')
{
    length_of_s++;
    new_s++;
}

while ( *new_accept != '\0')
{
    length_of_accept++;
    new_accept++;
}


for ( i = 0; i < length_of_s; i++)
{
    for ( j = 0; j < length_of_accept; j++)
    {
        if ( s[i] == accept[j])
        {
            return s + i;
        }
    }
}

return 0;
}