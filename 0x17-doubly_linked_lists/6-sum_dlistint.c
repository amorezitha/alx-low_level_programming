#include "lists.h"

/**
 * sum_dlistint - sum of elements in list
 * @head: list
 * Return: int
 */

sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
