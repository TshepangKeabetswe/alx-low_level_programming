#include "lists.h"
/**
 * sum_listint - calculates the sum of all the data (n)
 *  of a listint_t linked list.
 * @head: the address to the header node
 * Return: sum of all nodes
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
