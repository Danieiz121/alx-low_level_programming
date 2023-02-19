#include<stdio.h>
/**
 * main - printing the lowercase in reverse
 * Return: Always 0
 */
int main(void)
{
	int c;

	for (c = 'n'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar ('\n');
	return (0);
}
