#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns number of elements
 * @h: input linked list
 * Return: number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
