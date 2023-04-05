#include <stdio.h>
#include "lists.h"
/**
 * print_listint - print list
 * Return: size_t
 * @h: list
 */
size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	while (d)
	{
		nodes++;
		printf("%d", h->n);
		d = d->next;
		printf("\n");
	}
	return (nodes);
}
