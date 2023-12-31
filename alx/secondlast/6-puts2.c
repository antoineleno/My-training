#include "main.h"

/**
 * puts2 - Function to print every character of a string.
 * @str: Character to be printed.
 * Return: No value to be return.
*/

void puts2(char *str)
{
	int length_of_str = 0;
	int i;
	char *new_value_of_str = str;

	while (*new_value_of_str != '\0')
	{
		length_of_str++;
		new_value_of_str++;
	}

	for (i = 0; i < length_of_str; i++)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');


}
