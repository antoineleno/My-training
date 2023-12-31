#include "main.h"

/**
 * _isupper - function to check for upper case
 * @c: The character to be checked
 * Return: Always 0 (Success)
*/

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
