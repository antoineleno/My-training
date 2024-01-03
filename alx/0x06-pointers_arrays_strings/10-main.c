#include "main.h"

/**
 * main - Entry point function to check the string duplicate function.
 * Return: Always 0 (Success)
*/

int main(void)
{
	char first_string[100] = "This is string duplicate function in c programming";
	char *duplicate_string = _strdup(first_string);

	if (duplicate_string != NULL)
	{
		printf("Original string : %s\n",first_string);
		printf("Duplicate string: %s\n", duplicate_string);
	}
	else
	{
		fprintf(stderr, "Memory allocation failled\n");
	}

	return (0);
}