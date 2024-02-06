#include <stdio.h>
#include <string.h>

int main(void)
{
	/**
	 * String function for comparaison
	*/

// strcmp
char first[56] = "Antoine";
char second[34] = "Antoine";
int n = strcmp(first,second);
printf("%d\n",n);

// strncmp

int m = strncmp(first,second,5);
printf("%d\n",m);

// memcmp

int k = memcmp(first,second,strlen(first));
printf("%d\n",k);
	/**
	 * string function to copy a string.
	*/

	// strcpy

	char name[54] = "Ant";
	char last_name[45] = "LENO";

	//strcpy(name,last_name);
	//printf("%s\n",name);

	// strncpy

	//strncpy(name,last_name,3);
	//printf("%s\n",name);

	// memcpy
	memcpy(name,last_name,strlen(last_name));
	printf("%s\n",name);

	// string function for concatenation
	char dest[35] = "Antoine ";
	char source[45] = "LENO";

	// strcat
	//strcat(dest,source);
	//printf("%s\n",dest);

	// strncat
	//strncat(dest,source,2);
	//printf("%s\n",dest);

	// string function for searching

	// strchr

	char letters[23] = "123abcdefghijklmnopqrstuvwxyz";
	char number[45] = "123";
	int result = strspn(letters,number);
	printf("%d\n",result +1);
	

	return (0);
}