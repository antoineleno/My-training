#include "main.h"

int _sqrt_recursion(int n)
{
   if ( n == 0 && n == 1)
   {
        return n;
   }

   else if ( n < 0)
   {
    return -1;
   }

   else 
   {
    return _sqrt_helper(n,1);
   }
}


int _sqrt_helper(int n,int m)
{
    if ( m * m == n)
    {
        return m;
    }

    else if ( m * m > n)
    {
        return -1;
    }

    else 
    {
        return _sqrt_helper(n,m+1);
    }
}

