#include "main.h"

/**
 * rot13 - Encode a string using rot13
 * @s: The string to be encoded
 *
 * Return: A pointer to the encoded string
 */
char *rot13(char *s)
{
    char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
    int i, j;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; input[j] != '\0'; j++)
        {
            if (s[i] == input[j])
            {
                s[i] = output[j];
                break; // Move to the next character in the input string
            }
        }
    }

    return s;
}
