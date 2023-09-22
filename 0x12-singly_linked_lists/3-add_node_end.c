#include "lists.h"
/**
 * add_node_end - function that adds a new node
 * @head: pointer to singly linked
 * @str: pointer to signly linked
 * Return: The address of the new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t nchar;
	new_node = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (nchar = 0; str[nchar]; nchar++)
		;
	
	new->len = nchar;
	new->next = NULL;
	temp = *head;
	
	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	
	return (*head);
}
