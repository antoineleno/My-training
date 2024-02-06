#include "main.h"

void reverse_array(int *a, int n)
{
    int start = 0;
    int end = n - 1;

    while ( start < end)
    {
        int b = a[start];
        a[start] = a[end];
        a[end] = b;
        start++;
        end--;
    }
}
