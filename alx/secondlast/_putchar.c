#include <unistd.h>

/**
 * _putchar - Function to print a character
 * @c: The character to be printed.
 * Return: Always 0 (Success)
*/

int _putchar(char c)
{
	return (write(1,&c,1));
}