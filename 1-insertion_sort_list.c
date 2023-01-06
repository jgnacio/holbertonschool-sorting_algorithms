#include "sort.h"

/**
 * insertion_sort_list - function that sort a list
 * @list: the list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node = NULL;

	if (!list || !(*list))
		return;

	for (node = *list; node; node = node->next)
	{
		while (node->prev && node->prev->n > node->n)
		{
			node->prev->next = node->next;
			if (node->next)
				node->next->prev = node->prev;
			node->next = node->prev;
			node->prev = node->prev->prev;
			node->next->prev = node;
			if (node->prev)
				node->prev->next = node;
			else
				*list = node;
			print_list(*list);
		}
	}
}

