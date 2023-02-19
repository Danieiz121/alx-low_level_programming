#include <stdio.h>
/**
 * main - printing number 0-9 with the putchar function
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar((a % 10) + '0');
	}
	putchar ('\n');
	return (0);
}
