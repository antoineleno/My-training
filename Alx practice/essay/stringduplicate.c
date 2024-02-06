#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_strdup(const char *original_string);

int main(void)
{
	char *original_string = "This is string duplicate function in c programming.";
	char *duplicate_string = _strdup(original_string);
	
	if ( *duplicate_string !='\0')
	{
		printf("Original string : %s\n",original_string);
		printf("Duplicate string: %s\n",duplicate_string);
		free(duplicate_string);
	}
	else
	{
		fprintf(stderr, "Memory Allocation failled\n");
	}



	return (0);
}


char *_strdup(const char *original_string)
{
	int length_of_original_string = 0;
	const char *new_origianl_string = original_string;
	int i;

	while ( *new_origianl_string != '\0')
	{
		length_of_original_string++;
		new_origianl_string++;
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