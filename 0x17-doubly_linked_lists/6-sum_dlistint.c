#include "lists.h"

/**
 * sum_dlistint - returns the sum of all ints 'n' of a dlistint_t linked list
 * @head: pointer to first member of dlistint_t list
 * Return: sum of all ints 'n', or 0 of list is empty
 */

sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
