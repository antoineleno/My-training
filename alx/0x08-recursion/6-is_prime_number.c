#include "main.h"

int is_prime_number(int n)
{

    if ( n <= 1)
    {
        return 0;
    }

    else
    {
        return is_prime_helper(n,n-1);
    }

}

int is_prime_helper(int n,int m)
{
    if ( m <= 1)
    {
        return 1;
    }

    else if ( n%m == 0)
    {
        return 0;
    }

    else
    {
        return is_prime_helper(n,m-1);
    }
}