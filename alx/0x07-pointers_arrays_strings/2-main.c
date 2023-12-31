#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        while (*f != '\0') {
            printf("%c", *f);
            f++;
        }
        printf("\n");
    }

    return (0);
}