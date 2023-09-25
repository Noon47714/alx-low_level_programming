#include "lists.h"

/**
 * add_nodeint - Adds a new node
 * @head: A pointer to the address of the head
 * @n: the integer
 * Return: NULL if function fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
