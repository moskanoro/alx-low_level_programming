#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: pointer to the first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(const listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
