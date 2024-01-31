#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[35];
	printf("Enter you name:");
	fgets(name, 35, stdin);
	name[strcspn(name, "\n")] = '\0';
	printf("%s\n",name);
	return (0);
}