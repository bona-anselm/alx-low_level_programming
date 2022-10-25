#include "lists.h"

/**
 * add_nodeint - Adds node at the beginning of a list
 * @head: holds pointer to the head pointer data
 * @n: holds data to a node
 *
 * Return: The number of nodes
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

	return (*head);
}
