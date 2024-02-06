#include "main.h"

/**
 * print_diagonal - function to draws a diagonal line.
 * @n: Number of times the character / should be printed.
 * Return: Always 0 (Success)
*/

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
