#include <stdio.h>
#include <unistd.h>

int main(void)
{
    
    __pid_t pid;

    pid = getpid();
    printf("%u\n",pid);

    fork();

    if ( pid == 0)
    {
        return 1;
    }

    if ( pid == 1)

    {
        return -1;
    }



    return (0);
}
