#include <string.h>
#include <stdio.h>
/**
 * _strstr - This function takes two strings s1 and s2 as an argument
 * @s1: This is the main string to be examined.
 * @s2: This is the sub-string to be searched in s1 string.
 * Return: value 0
 */

int main(void)
{
	char s1[] = "GeeksforGeeks";

	char s2[] = "for";

	char *p;

	p = strstr(s1, s2);

	if (p)
	{
		printf("String found\n");
		printf("First occurrence of string '%s' in '%s' is '%s'", s2, s1, p);
	}
	return 0;
}
