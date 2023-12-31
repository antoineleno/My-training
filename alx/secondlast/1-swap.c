#include "main.h"

/**
 * swap_int - Function to swap two integers.
 * @a: First integer
 * @b: second integer
 * Return: No return value.
*/

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}