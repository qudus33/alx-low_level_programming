#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 * Written by Ibrahim Omeiza
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t ans = 0;

	while (h)
	{
		printf("%d\n", h->n);
		ans++;
		h = h->next;
	}
	return (ans);
}
