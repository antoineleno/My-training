#include <limits.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
int len;
int len2;
unsigned int ui;
void *addr;
len = _printf("Let's try to printf a simple sentence.\n");
len2 = printf("Let's try to printf a simple sentence.\n");
//ui = (unsigned int)INT_MAX + 1024;
//addr = (void *)0x7ffe637541f0;
//_printf("Length:[%+15d,%i]\n", len, len);
//printf("Length:[%d,%i]\n", len2, len2);
//_printf("Negative:[%d]\n", -762534);
//printf("Negative:[%d]\n", -762534);
//_printf("Unsigned:[%u]\n", ui);
//printf("Unsigned:[%05u]\n", ui);
//_printf("Unsigned octal:[%#o]\n", ui);
//printf("Unsigned octal:[%o]\n", ui);
//_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
//printf("Unsigned hexadecimal:[%#x, %#X]\n", ui, ui);
//_printf("Character:[%05c]\n", 'H');
//printf("Character:[%5c]\n", 'H');
//_printf("String:[%.*s]\n", 5, "Iamastring !");
//printf("String:[%5s]\n", "I am a string !");
//_printf("Address:[%5p]\n", addr);
//printf("Address:[%5p]\n", addr);
//len = _printf("Percent:[%%]\n");
//len2 = printf("Percent:[%%]\n");
//_printf("Len:[%d]\n", len);
//printf("Len:[%d]\n", len2);
//_printf("Unknown:[%r]\n", "r%");
//printf("Unknown:[%%r]\n");
//_printf("%S\n", "Best\nSchool");
//_printf("[%R]\n","ANTOINE");
return (0);
}
