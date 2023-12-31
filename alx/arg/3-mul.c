#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if ( argc == 1 )
    {
        printf("Error\n");
    }

    else 
    {
        int i;
        int result = 1;
        for ( i = 1; i < argc; i++)
        {
            result = result *  atoi(argv[i]);
        }

        printf("%d\n",result);
    }

   
    return 0;
}