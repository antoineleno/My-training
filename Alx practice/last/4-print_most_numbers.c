#include "main.h"

/**
 * print_most_numbers - Function to print number from 0 to 0 without 2 and 4
 * Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			break;
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}
}
