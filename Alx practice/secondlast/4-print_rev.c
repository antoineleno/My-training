#include "main.h"

/**
 * print_rev - function to print a string in reverse.
 * @s: string to be printed.
 * Return: No return value.
*/

void print_rev(char *s)
{
	int lenght_of_s = 0;
	char *new_value_of_s = s;
	int i;

	while (*new_value_of_s != '\0')
	{
		lenght_of_s++;
		new_value_of_s++;
	}

	for (i = lenght_of_s - 1; i >= 0; i--)
	{
		_putchar(*(s + i));

	}

	_putchar('\n');


}
