#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: Holds linked list data
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t elem_num;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		elem_num++;
	}
	return (elem_num);

}
