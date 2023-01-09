#include "sort.h"

/**
 * print_array - Prints an array of integers
 * @array: the array to be printed
 * @size, Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
    printf("%d", array[i]);
    ++i;
	}
  printf("\n");
}

/**
 * print_list - Print a list of integers
 * @list: the list to be printed
 */
void print_list (const listint_t *list)
{
  int i;

  i = 0;
  while (list)
  {
    if (i > 0)
      printf(", ");
    printf("%d", list->n);
    ++i;
    list = list->next;
  }
  printf("\n");
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
