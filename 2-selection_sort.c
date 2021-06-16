#include "sort.h"

/**
* selection_sort - sorts an array of integers in ascending order using
* the Selection Sort Algoeithm
* @array: array to be sorted
* @size: size of the array
*
* Return: no return
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_el_idx, temp, flag;

	if(!array)
		return;

	for (i = 0; i < size; i++)
	{
		min_el_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_el_idx])
				min_el_idx = j;
				flag = 1;
		}
		if (flag == 1)
		{
			temp = array[i];
			array[i] = array[min_el_idx];
			array[min_el_idx] = temp;
			print_array(array, size);
		}
		flag = 0;
	}
}
