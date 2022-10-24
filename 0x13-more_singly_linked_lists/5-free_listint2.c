#include "lists.h"
/**
 * free_listint2 - frees the list
 * @head: the pointer to the struct
 *
 * Return: Always 0(success)
 */
void free_listint2(listint_t **head)
{
	listint_t *f;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		f = *head;
		*head = f->next;
		free(f);
	}
}
