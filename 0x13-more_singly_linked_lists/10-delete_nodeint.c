#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index @index of
 * a listint_t linked list
 * @head: the pointer to the header node of the list
 * @index: the index with which to delete the element of
 * Return: 1(Success) else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *p;
	listint_t *temp;

	if (!head || *head == NULL)
		return (-1);
	p = *head;
	if (index == 0)
	{
		*head = p->next;
		free(p);
		return (1);
	}
	for (i = 0; p != NULL && i < (index - 1); i++)
		p = p->next;
	if (p == NULL)
		return (-1);
	if (index > 0)
	{
		temp = p->next;
		if (temp == NULL)
			return (-1);
		p->next = temp->next;
		free(temp);
		return (1);
	}

	return (-1);
}
