#include "main.h"
#include <stdio.h>
/**
 * print_array - function to print the elements of the array.
 * @a: My array
 * @n: number of elements in the array.
 * Return: No value to be returned.
*/

void print_array(int *a, int n)
{
    int i;
    
    for (i = 0; i < n; i++)
    {
        
        printf("%d", a[i]);

        
        if (i < n - 1)
        {
            printf(", ");
        }
    }

    printf("\n");
}
