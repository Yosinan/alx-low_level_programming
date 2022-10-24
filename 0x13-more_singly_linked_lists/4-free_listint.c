#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * free_listint - freed the linked list
 * @head: input linked list pointer
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *f;

	while (head != NULL)
	{
		f = head;
		head = f->next;
		free(f);
	}
}
