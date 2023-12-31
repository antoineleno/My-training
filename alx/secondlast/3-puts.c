#include "main.h"

/**
 * _puts - function to print a string.
 * @str: string to be printed.
 * Return: No value to be returned.
*/

void _puts(char *str)
{
	int length_of_str = 0;
	char *new_value = str;
	int i;

	while ( *new_value != '\0')
	{
		length_of_str++;
		new_value++;
	}

	for (i = 0; i < length_of_str; i++)
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');

}