#include "main.h"

/**
 * rev_string - function to reverse a string.
 * @s: string to be reverse.
 * Return: No value to return.
*/

void rev_string(char *s)
{
	int length_of_s = 0;
	int start = 0;
	int end;
	char *new_value_of_s = s;

	while (*new_value_of_s != '\0')
	{
		length_of_s++;
		new_value_of_s++;
	}

	end = length_of_s - 1;

	while (start < end)
	{
		char string = s[start];

		s[start] = s[end];
		s[end] = string;
		start++;
		end--;
	}
}
