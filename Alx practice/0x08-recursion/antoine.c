#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    printf("Argc is the number of string pass while executing the program. argc = %d\n",argc);

    for ( int i = 0; i < argc; i++)
    {
        printf("Argv is the string pass while executing the program: argv[%d] = %s\n",i,argv[i]);
    }

    return (0);
}