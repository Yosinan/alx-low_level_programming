#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints elements of the linked list
 * @h: pointer input
 * Return: number of the nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
