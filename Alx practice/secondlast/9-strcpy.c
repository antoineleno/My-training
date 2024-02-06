#include "main.h"
/**
 * _strcpy - function to copy a string.
 * @dest: Destination string.
 * @src: String to copy.
 * Return: Return dest funtion.
*/


char *_strcpy(char *dest, char *src)
{
	int i;
	char *new_src = src;
	int length_of_src = 0;

	while (*new_src != '\0')
	{
		length_of_src++;
		new_src++;
	}

	while (i < length_of_src)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
