#include "lists.h"
/**
 * free_listint -  frees a listint_t list.
 * @head: pointer to the start of the list
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
