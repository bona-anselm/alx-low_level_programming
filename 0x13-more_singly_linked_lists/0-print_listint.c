#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: holds pointer to head data
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int nod_num;

	nod_num = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nod_num++;
	}
	return (nod_num);
}
