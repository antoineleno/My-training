#include <stdio.h>

int function(long int n);

int main()
{
 long int  b_prime = 0;
 int r = 0;
 long int n = 612852475143;
 for(long int i = 1; i<=n; i++)
 {
  r = n % i;
  if(r == 0 && function(i) == 2)
  {
     b_prime = i;
  }
  
 }
 printf("%ld\n", b_prime);
 return 0;
}

int function(long int n)
{
 int p = 0, k= 0;
 for(long int i = 1; i <= n; i++)
 {
  k = n % i;
  if(k == 0)
  {
   p++;
  }
  
 }
 
 return p;
}