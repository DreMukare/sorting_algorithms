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
	size_t i, j, min_el_idx;
	int temp = 0;

	for (i = 0; i < size; i++)
	{
		min_el_idx = i;
		for (j = i + 1; j < size - 1; j++)
		{
			if (array[j] < arr[min_el_idx])
				min_el_idx = j;
		}
		temp = arr[i];
		arr[i] = arr[min_el_idx];
		arr[min_el_idx] = temp;
		print_array(array, size);
	}
}
