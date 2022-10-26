#include "lists.h"

/**
 * free_listint2 - frees a linked-list
 * @head: head of the linked list.
 *
 * Return: no return.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
	}
}
