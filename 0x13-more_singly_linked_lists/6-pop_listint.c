#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: head of the list
 * Return: value of popped node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head || !*head)
		return (0);

	n = (*head)->next;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}
