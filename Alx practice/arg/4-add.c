#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int i;
    int result = 0;

    if ( argc == 1)
    {
        printf("0\n");
        return 0;
    }

    else 
    {
        for ( i = 0; i < argc; i++)
        {
            char character = tolower(argv[i][0]);
            if ( character <= 'z' && character >= 'a')
            {
                printf("Error\n");
                return 1;
            }

            else 
            {
                result = result + atoi(argv[i]);
            }
        }    
    }

    printf("%d\n",result);

    return 0;
}
