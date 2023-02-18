#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - Prints a text according number 
 * Return: Always 0 (success)
 *
 */

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Lastd = n % 10;

	if (Lastd > 5)
	{
		printf("Last digit of %d is %d and is grater than 5\n", n,lastd);
	}
	else if (Lastd == 0)
	{
		printf("Last digit of %d is %d and 0\n", n,Lastd);
	}
	else if (lastd < 6 && Lastd != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Lastd);
	}

	return (0);
}
