#include <stdio.h>
/**
 * main - main block
 * descripution: prints all single number of base 10
 * starting from 0, followed by a new line
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
