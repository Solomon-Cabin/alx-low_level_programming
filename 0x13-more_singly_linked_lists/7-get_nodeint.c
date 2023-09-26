#include "lists.h"

/**
 * get_nodeint_at_index - this returns the node at a certain
 * index in a linked list
 * @head: the initial node in the linked list
 * @index: index of the node to return
 *
 * Return: the pointer to the missing node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int r = 0;
	listint_t *temp = head;

	while (temp && r < index)
	{
		temp = temp->next;
		r++;
	}

	return (temp ? temp : NULL);
}

