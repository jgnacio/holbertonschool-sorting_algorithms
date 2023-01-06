#include "sort.h"

void swap(listint_t **node);


void insertion_sort_list(listint_t **list)
{
	listint_t *prev = NULL,
						*head = *list;

	if (!list)
		return;

	(void)prev;
	/*
	while (head->next)
	{
		print_list(*list);

		while (head->prev)
		{
			if (head->n < prev->n)
				swap(&head);
			prev = head->prev;
			head = head->prev;
		}
		head = head->next;
	}
	*/

	swap(&(head->next->next));
	print_list(head);
}








listint_t *create_listint(const int *array, size_t size)
{
	listint_t *list;
	listint_t *node;
	int *tmp;

	list = NULL;
	while (size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
			return (NULL);
		tmp = (int *)&node->n;
		*tmp = array[size];
		node->next = list;
		node->prev = NULL;
		list = node;
		if (list->next)
			list->next->prev = list;
	}
	return (list);
}


void swap(listint_t **node)
{

	listint_t *temp = NULL,
						*prev = NULL,
						*next = NULL,
						*head = *node;
			
	next = head->next;
	prev = head->prev;
	temp = next->next;

	if(prev)
		prev->next = next;

	next->prev = prev;
	head->prev = next;
	next->next = head;
	head->next = temp;



	if (temp)
				temp->prev = head;
}



