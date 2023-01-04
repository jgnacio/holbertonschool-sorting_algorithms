#include "sort.h"

/**
 * quick_sort - function that sort an array
 * @array: array to sort
 * @size: array size
 */
void quick_sort(int *array, size_t size)
{
	size_t	end = size - 1,
				 index;
	int temp_num,
			target = 0;

	if (!array || size == 0)
		return;

	for (index = 0; array && index < end; index++)
	{
		if (array[end] > array[index])
		{
			temp_num = array[index];
			array[index] = array[target];
			array[target] = temp_num;
			target++;
		}
	}
	temp_num = array[end];
	array[end] = array[target];
	array[target] = temp_num;

	print_array(array, size);
	quick_sort(&array[0], target);
	quick_sort(&array[target + 1], end - target);
}
