#include "main.h"

/**
 * _isdigit - Function to check for digit
 * @c: number to be ckecked
 * Return: Always 0 (Success)
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
