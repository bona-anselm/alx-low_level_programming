#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked-list
 * @head: head of the linked list.
 *
 * Return: The head node
 */

int pop_listint(listint_t **head)
{
	listint_t *h, *current;
	int head_node;

	if (*head == NULL)
		return (0);
	current = *head;
	head_node = current->n;
	h = current->next;
	free(current);
	*head = h;

	return (head_node);
}
