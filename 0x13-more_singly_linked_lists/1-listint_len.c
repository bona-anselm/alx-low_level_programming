#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list
 * @h: holds pointer to head data
 *
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int nod_num;

	nod_num = 0;
	while (h != NULL)
	{
		h = h->next;
		nod_num++;
	}
	return (nod_num);
}
