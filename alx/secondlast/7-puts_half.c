#include "main.h"

/**
 * puts_half - function to print half of the string.
 * @str: string to be printed
 * Return: No return value.
*/

void puts_half(char *str)
{
	int length_of_the_string = 0;
	char *new_value_of_the_string = str;
	int i;
	int n;

	while (*new_value_of_the_string != '\0')
	{
		length_of_the_string++;
		new_value_of_the_string++;
	}

	n = (length_of_the_string - 1) / 2;

	for (i = n + 1; i <= length_of_the_string; i++)
	{
		_putchar(*(str + i));
	}

	_putchar('\n');


}
