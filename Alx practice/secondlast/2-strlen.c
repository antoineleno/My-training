#include "main.h"

/**
 * _strlen - function that return the length of the string.
 * @s: The string to be check.
 * Return: length of the string.
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
