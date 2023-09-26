#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: head of the list
 * Return: value of popped node
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	n = (*head)->next;
	free(*hea);
	*head = node;
	return (n);
}
