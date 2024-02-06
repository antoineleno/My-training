#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
*/

int main(void)
{
    unsigned long int number = 612852475143;
    unsigned long int i;
    unsigned long int n = 0;
    unsigned long int largestPrimeFactor = 0;

    for (i = 2; i <= number; i++)
    {
        while (number % i == 0)
        {
            largestPrimeFactor = i;
            number /= i;
        }
    }

    printf("Largest prime factor: %lu\n", largestPrimeFactor);

    return (0);
}
