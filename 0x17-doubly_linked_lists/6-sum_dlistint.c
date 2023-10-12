#include "lists.h"

/**
 * sum_dlistint - returns the sum of all ints 'n' of a dlistint_t linked list
 * @head: pointer to first member of dlistint_t list
 * Return: sum of all ints 'n', or 0 of list is empty
 */

sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
