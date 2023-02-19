#include <stdio.h>

/**
 * main - main block
 * Description: write a program that prints all possible
 * Return: 0
 */
int main(void)
{
	int a;
	int b;

	for (b = '0'; b <= '9'; b++)
	{
		for (a = '0'; a <= '9'; a++)
		{
			if (!((a == b) || (b > a)))
			{
				putchar(tens);
				putchar(ones);
				if (!(a == '9' && b == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
