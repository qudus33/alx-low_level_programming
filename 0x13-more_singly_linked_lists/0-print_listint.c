#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @q: linked list of type listint_t to print
 * Written by Ibrahim Omeiza
 * Return: number of nodes
 */

size_t print_listint(const listint_t *q)
{
	size_t val = 0;

	while (q)
	{
		printf("%d\n", q->n);
		val++;
		q = q->next;
	}
	return (val);
}
