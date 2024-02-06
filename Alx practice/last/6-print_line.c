#include "main.h"

/**
 * print_line - Function to print line.
 * @n: The number of times the character _ should be printed.
 * Return: Always 0 (success)
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n || n == 0)
		{
			_putchar('$');
		}
		else
		{
			_putchar('_');
		}

	}
	_putchar('\n');
}