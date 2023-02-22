#include "main.h"
/**
 * print_alphabet_x10 - Make alphabet x10 time
 * Return: void
 * void print_alphabet_x10(void)
 */
int main(void)
{	
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = '0'; c <= 'z'; c++)
			_putchar (c);
	}
	{_putchar ('\n');
	i++;
	}
}
