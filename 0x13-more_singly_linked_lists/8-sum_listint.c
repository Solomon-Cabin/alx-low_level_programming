#include "lists.h"

/**
 * sum_listint - this function calculates the sum of
 * all the data in a listint_t list
 * @head: the initial node in the linked list
 *
 * Return: sum result
 */

int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *temp = head;

	while (temp)
	{
		s += temp->n;
		temp = temp->next;
	}
	return (s);
}
