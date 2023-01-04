#include "sort.h"

void selection_sort(int *array, size_t size)
{
  size_t index, out_index;
  int entry_index, temp_num = 0;
  
  if (!array)
    return;

  for (index = 0; array && index < size; index++)
  {
    entry_index = index;
    for (out_index = index + 1; out_index < size; out_index++)
    {
      if (array[out_index] < array[entry_index])
      {
        entry_index = out_index;
      }
    }
    temp_num = array[index];
    array[index] = array[entry_index];
    array[entry_index] = temp_num;
    print_array(array, size);
  }
}
