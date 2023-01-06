#include "sort.h"
/**
 * bubble_sort - function that sort an array using the bubble algorithm
 * @array: array of integers
 * @size: size_t
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int j = 0, i = 0, h = 0;

	int save_num = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				save_num = array[j];
				array[j] = array[j + 1];
				array[j + 1] = save_num;
				for (h = 0; h < size; h++)
				{
					printf("%d, ", array[h]);
				}
				printf("\n");
			}
		}
	}
}
