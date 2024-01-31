#include "main.h"

/**
 * _strdup - Function to duplicate a string.
 * @origianl_string: String to be duplicated.
 * Return: The duplicate function.
*/

char *_strdup(const char *original_string)
{
	int length_of_original_string = 0;
	const char *new_original_string = original_string;
	int i;

	while (*new_original_string != '\0')
	{
		length_of_original_string++;
		new_original_string++;
	}

	char *buffer = malloc(length_of_original_string + 1);
	if ( buffer != NULL)
	{
		while (*original_string != '\0')
		{
			buffer[i] = *original_string;
			i++;
			original_string++;
		}
	}

	buffer[i] = '\0';

	return (buffer);

}