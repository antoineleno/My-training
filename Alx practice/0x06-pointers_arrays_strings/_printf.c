#include "main.h"

/**
 * _printf - Function to print a string on the consol
 * @placeholder: Format of the string.
 * Return: The number of character printed.
*/

int _printf(char *placeholder, ...)
{
	va_list list_of_arguments;
	
	va_start(list_of_arguments, placeholder);

	int i;
	int length_of_placeholder = 0;
	char *new_placeholder = placeholder;

	while (*new_placeholder != '\0')
	{
		length_of_placeholder++;
		new_placeholder++;
	}

	for (i = 0; i <= length_of_placeholder -1; i++)
	{
		if ( placeholder[i] == '%')
		{
			switch (placeholder[i+1])
			{
			case 'd':
				int x = va_arg(list_of_arguments, int);
				char buffer[2];
				snprintf(buffer, sizeof(buffer), "%d",x);
				puts(buffer);
				i++;
				break;

			case 's':
				char *string = va_arg(list_of_arguments, char *);
				char string_buffer[250];
				string_buffer[strcspn(string_buffer, "\n")] = '\0';
				snprintf(string_buffer, sizeof(string_buffer), "%s", string);
				puts(string_buffer);
				i++;
				break;

			case 'c':
				char *character = va_arg(list_of_arguments, char *);
				char characterbuffer[1];
				snprintf(characterbuffer, sizeof(characterbuffer), "%s",character);
				puts(characterbuffer);
				i++;
				break;

			case 'i':
				int y = va_arg(list_of_arguments, int);
				char integerbuffer[2];
				snprintf(integerbuffer, sizeof(integerbuffer), "%d",y);
				puts(integerbuffer);
				i++;
				break;

			default:
				puts("%");
				break;
			}
		}

		else if ( placeholder[i] == '\\' && placeholder[i+ 1] == '\\')
		{
			putchar('\\');
		}

		else if ( placeholder[i] == '\\' && placeholder[i+1] == 'n')
		{

			puts("\n");
		}

		else
		{
			putchar(placeholder[i]);
		}

	}



}